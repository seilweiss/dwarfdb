



void get_render_data(unit_data& unit, float32 scale, xColor_tag& color, xMat4x3& mat, xVec2& uv0, xVec2& uv1, int32 min_alpha);
void update(float32 dt);
void emit(xMat4x3& mat, xVec3& scale, int32 texture_index);
void set_curve(curve_node_1* curve, uint32 size);
void refresh_config();
void set_texture(int8* name);
void set_default_config();
void init(int32 max_size);
void xDecalUpdate(float32 dt);
void xDecalInit();
void emit_env(emit_context& ec, xMat4x3& mat);
void emit(emit_context& ec, xMat4x3& mat, RpAtomic* model, xMat4x3* model_mat, uint8 moving_model);
void sphere_emit(emit_context& ec, xVec3& center, float32 radius, int32 check_flags);
void emit(emit_context& ec, xMat4x3& mat, int32 check_flags);
void render_all();
void update(float32 dt);
void reset();
void scene_exit();
void scene_enter();
void intersect_env(intersect_env_params& arg);
int32 intersect_env_callback(xClumpCollBSPTriangle* tri, void* data);
int32 compare_decals(void* e1, void* e2);
decal_instance* create_decal(emit_context& ec, xMat4x3* driver, owner_group_type* owner_group);
void refresh_decal(decal_instance& decal);
void add_to_owner_group(decal_instance& decal, owner_group_type* owner_group);
void remove_from_owner_group(decal_instance& decal);
void obb_to_capsule(xLine3& line, float32& radius, xBox& box, xMat4x3& mat);
void complete_decal_atomic(RpAtomic* atomic, xVec2* uv, RwSphere* o);
RpAtomic* create_decal_atomic(decal_instance& decal, int32 vert_size, int32 tri_size);
void clip_decal_indexed(clip_decal_indexed_params& arg);
void clip_decal(clip_decal_params& arg);
void transform_combo_vertices(xVec3* vert, combo_vertex* cv, int32 vert_size, xVec3* src_vert);

// get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10xColor_tagR7xMat4x3R5xVec2R5xVec2i
// Start address: 0x3fb5c0
void xDecalEmitter::get_render_data(unit_data& unit, float32 scale, xColor_tag& color, xMat4x3& mat, xVec2& uv0, xVec2& uv1, int32 min_alpha)
{
	// Line 3526, Address: 0x3fb5c0, Func Offset: 0
	// Line 3530, Address: 0x3fb5cc, Func Offset: 0xc
	// Line 3531, Address: 0x3fb9e8, Func Offset: 0x428
	// Line 3533, Address: 0x3fb9f8, Func Offset: 0x438
	// Line 3536, Address: 0x3fba08, Func Offset: 0x448
	// Line 3535, Address: 0x3fba0c, Func Offset: 0x44c
	// Line 3537, Address: 0x3fba10, Func Offset: 0x450
	// Line 3538, Address: 0x3fba14, Func Offset: 0x454
	// Line 3539, Address: 0x3fba18, Func Offset: 0x458
	// Line 3536, Address: 0x3fba24, Func Offset: 0x464
	// Line 3535, Address: 0x3fba28, Func Offset: 0x468
	// Line 3537, Address: 0x3fba2c, Func Offset: 0x46c
	// Line 3538, Address: 0x3fba30, Func Offset: 0x470
	// Line 3535, Address: 0x3fba34, Func Offset: 0x474
	// Line 3536, Address: 0x3fba94, Func Offset: 0x4d4
	// Line 3537, Address: 0x3fbab8, Func Offset: 0x4f8
	// Line 3538, Address: 0x3fbadc, Func Offset: 0x51c
	// Line 3539, Address: 0x3fbb00, Func Offset: 0x540
	// Line 3540, Address: 0x3fbb08, Func Offset: 0x548
	// Line 3543, Address: 0x3fbb10, Func Offset: 0x550
	// Line 3544, Address: 0x3fbb90, Func Offset: 0x5d0
	// Line 3548, Address: 0x3fbbfc, Func Offset: 0x63c
	// Line 3549, Address: 0x3fbc30, Func Offset: 0x670
	// Line 3548, Address: 0x3fbc34, Func Offset: 0x674
	// Line 3549, Address: 0x3fbc48, Func Offset: 0x688
	// Line 3550, Address: 0x3fbc94, Func Offset: 0x6d4
	// Line 3551, Address: 0x3fbca4, Func Offset: 0x6e4
	// Line 3552, Address: 0x3fbcb0, Func Offset: 0x6f0
	// Func End, Address: 0x3fbcc8, Func Offset: 0x708
}

// update__13xDecalEmitterFf
// Start address: 0x3fbcd0
void xDecalEmitter::update(float32 dt)
{
	float32 dage;
	ptank_pool__color_mat_uv2 pool;
	int32 min_alpha;
	iterator_0 it;
	unit_data& unit;
	float32 scale;
	// Line 3438, Address: 0x3fbcd0, Func Offset: 0
	// Line 3447, Address: 0x3fbcd4, Func Offset: 0x4
	// Line 3438, Address: 0x3fbcd8, Func Offset: 0x8
	// Line 3450, Address: 0x3fbcdc, Func Offset: 0xc
	// Line 3438, Address: 0x3fbce0, Func Offset: 0x10
	// Line 3447, Address: 0x3fbd04, Func Offset: 0x34
	// Line 3438, Address: 0x3fbd08, Func Offset: 0x38
	// Line 3443, Address: 0x3fbd0c, Func Offset: 0x3c
	// Line 3438, Address: 0x3fbd10, Func Offset: 0x40
	// Line 3443, Address: 0x3fbd18, Func Offset: 0x48
	// Line 3447, Address: 0x3fbd1c, Func Offset: 0x4c
	// Line 3448, Address: 0x3fbd24, Func Offset: 0x54
	// Line 3449, Address: 0x3fbd2c, Func Offset: 0x5c
	// Line 3450, Address: 0x3fbd34, Func Offset: 0x64
	// Line 3451, Address: 0x3fbd3c, Func Offset: 0x6c
	// Line 3454, Address: 0x3fbd48, Func Offset: 0x78
	// Line 3456, Address: 0x3fbd58, Func Offset: 0x88
	// Line 3457, Address: 0x3fbd60, Func Offset: 0x90
	// Line 3458, Address: 0x3fbd68, Func Offset: 0x98
	// Line 3461, Address: 0x3fbd70, Func Offset: 0xa0
	// Line 3469, Address: 0x3fbd78, Func Offset: 0xa8
	// Line 3470, Address: 0x3fbdd0, Func Offset: 0x100
	// Line 3471, Address: 0x3fbdd4, Func Offset: 0x104
	// Line 3470, Address: 0x3fbdd8, Func Offset: 0x108
	// Line 3471, Address: 0x3fbddc, Func Offset: 0x10c
	// Line 3500, Address: 0x3fbde4, Func Offset: 0x114
	// Line 3471, Address: 0x3fbde8, Func Offset: 0x118
	// Line 3500, Address: 0x3fbdec, Func Offset: 0x11c
	// Line 3471, Address: 0x3fbdf8, Func Offset: 0x128
	// Line 3500, Address: 0x3fbe04, Func Offset: 0x134
	// Line 3471, Address: 0x3fbe08, Func Offset: 0x138
	// Line 3500, Address: 0x3fbe14, Func Offset: 0x144
	// Line 3475, Address: 0x3fbe40, Func Offset: 0x170
	// Line 3500, Address: 0x3fbe44, Func Offset: 0x174
	// Line 3477, Address: 0x3fbe48, Func Offset: 0x178
	// Line 3475, Address: 0x3fbe4c, Func Offset: 0x17c
	// Line 3477, Address: 0x3fbe50, Func Offset: 0x180
	// Line 3500, Address: 0x3fbe54, Func Offset: 0x184
	// Line 3476, Address: 0x3fbe60, Func Offset: 0x190
	// Line 3477, Address: 0x3fbe64, Func Offset: 0x194
	// Line 3500, Address: 0x3fbe68, Func Offset: 0x198
	// Line 3479, Address: 0x3fbea4, Func Offset: 0x1d4
	// Line 3500, Address: 0x3fbea8, Func Offset: 0x1d8
	// Line 3479, Address: 0x3fbeb4, Func Offset: 0x1e4
	// Line 3500, Address: 0x3fbeb8, Func Offset: 0x1e8
	// Line 3479, Address: 0x3fbee4, Func Offset: 0x214
	// Line 3500, Address: 0x3fbee8, Func Offset: 0x218
	// Line 3479, Address: 0x3fbef0, Func Offset: 0x220
	// Line 3500, Address: 0x3fbef8, Func Offset: 0x228
	// Line 3484, Address: 0x3fbf00, Func Offset: 0x230
	// Line 3487, Address: 0x3fbf04, Func Offset: 0x234
	// Line 3500, Address: 0x3fbf0c, Func Offset: 0x23c
	// Line 3479, Address: 0x3fbf20, Func Offset: 0x250
	// Line 3500, Address: 0x3fbf30, Func Offset: 0x260
	// Line 3484, Address: 0x3fbf44, Func Offset: 0x274
	// Line 3500, Address: 0x3fbf48, Func Offset: 0x278
	// Line 3484, Address: 0x3fbf4c, Func Offset: 0x27c
	// Line 3500, Address: 0x3fbf50, Func Offset: 0x280
	// Line 3484, Address: 0x3fbf5c, Func Offset: 0x28c
	// Line 3486, Address: 0x3fbf68, Func Offset: 0x298
	// Line 3500, Address: 0x3fbf6c, Func Offset: 0x29c
	// Line 3490, Address: 0x3fbfe0, Func Offset: 0x310
	// Line 3500, Address: 0x3fbfe4, Func Offset: 0x314
	// Line 3490, Address: 0x3fbff4, Func Offset: 0x324
	// Line 3500, Address: 0x3fbff8, Func Offset: 0x328
	// Line 3490, Address: 0x3fc014, Func Offset: 0x344
	// Line 3500, Address: 0x3fc018, Func Offset: 0x348
	// Line 3490, Address: 0x3fc038, Func Offset: 0x368
	// Line 3500, Address: 0x3fc040, Func Offset: 0x370
	// Line 3490, Address: 0x3fc050, Func Offset: 0x380
	// Line 3500, Address: 0x3fc054, Func Offset: 0x384
	// Line 3490, Address: 0x3fc064, Func Offset: 0x394
	// Line 3500, Address: 0x3fc068, Func Offset: 0x398
	// Line 3490, Address: 0x3fc084, Func Offset: 0x3b4
	// Line 3500, Address: 0x3fc090, Func Offset: 0x3c0
	// Line 3490, Address: 0x3fc09c, Func Offset: 0x3cc
	// Line 3500, Address: 0x3fc0a4, Func Offset: 0x3d4
	// Line 3490, Address: 0x3fc0a8, Func Offset: 0x3d8
	// Line 3500, Address: 0x3fc0ac, Func Offset: 0x3dc
	// Line 3490, Address: 0x3fc0b4, Func Offset: 0x3e4
	// Line 3500, Address: 0x3fc0b8, Func Offset: 0x3e8
	// Line 3490, Address: 0x3fc0c4, Func Offset: 0x3f4
	// Line 3500, Address: 0x3fc0c8, Func Offset: 0x3f8
	// Line 3492, Address: 0x3fc0d8, Func Offset: 0x408
	// Line 3500, Address: 0x3fc0dc, Func Offset: 0x40c
	// Line 3492, Address: 0x3fc0e0, Func Offset: 0x410
	// Line 3500, Address: 0x3fc0e4, Func Offset: 0x414
	// Line 3492, Address: 0x3fc0e8, Func Offset: 0x418
	// Line 3500, Address: 0x3fc0f0, Func Offset: 0x420
	// Line 3502, Address: 0x3fc148, Func Offset: 0x478
	// Line 3505, Address: 0x3fc194, Func Offset: 0x4c4
	// Line 3502, Address: 0x3fc19c, Func Offset: 0x4cc
	// Line 3505, Address: 0x3fc1a0, Func Offset: 0x4d0
	// Line 3506, Address: 0x3fc1f0, Func Offset: 0x520
	// Func End, Address: 0x3fc228, Func Offset: 0x558
}

// emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i
// Start address: 0x3fc230
void xDecalEmitter::emit(xMat4x3& mat, xVec3& scale, int32 texture_index)
{
	// Line 3408, Address: 0x3fc230, Func Offset: 0
	// Line 3411, Address: 0x3fc240, Func Offset: 0x10
	// Line 3412, Address: 0x3fc254, Func Offset: 0x24
	// Line 3414, Address: 0x3fc258, Func Offset: 0x28
	// Line 3412, Address: 0x3fc25c, Func Offset: 0x2c
	// Line 3413, Address: 0x3fc27c, Func Offset: 0x4c
	// Line 3414, Address: 0x3fc290, Func Offset: 0x60
	// Line 3415, Address: 0x3fc294, Func Offset: 0x64
	// Line 3417, Address: 0x3fc2a4, Func Offset: 0x74
	// Line 3418, Address: 0x3fc2b0, Func Offset: 0x80
	// Line 3417, Address: 0x3fc2bc, Func Offset: 0x8c
	// Line 3418, Address: 0x3fc2c8, Func Offset: 0x98
	// Line 3419, Address: 0x3fc2d4, Func Offset: 0xa4
	// Line 3420, Address: 0x3fc308, Func Offset: 0xd8
	// Line 3423, Address: 0x3fc310, Func Offset: 0xe0
	// Line 3424, Address: 0x3fc380, Func Offset: 0x150
	// Line 3423, Address: 0x3fc384, Func Offset: 0x154
	// Line 3425, Address: 0x3fc388, Func Offset: 0x158
	// Line 3423, Address: 0x3fc38c, Func Offset: 0x15c
	// Line 3426, Address: 0x3fc398, Func Offset: 0x168
	// Line 3424, Address: 0x3fc39c, Func Offset: 0x16c
	// Line 3425, Address: 0x3fc3c0, Func Offset: 0x190
	// Line 3426, Address: 0x3fc3e4, Func Offset: 0x1b4
	// Line 3427, Address: 0x3fc40c, Func Offset: 0x1dc
	// Line 3426, Address: 0x3fc410, Func Offset: 0x1e0
	// Line 3427, Address: 0x3fc418, Func Offset: 0x1e8
	// Line 3431, Address: 0x3fc4ac, Func Offset: 0x27c
	// Line 3433, Address: 0x3fc4c4, Func Offset: 0x294
	// Line 3434, Address: 0x3fc4d4, Func Offset: 0x2a4
	// Line 3435, Address: 0x3fc4e0, Func Offset: 0x2b0
	// Line 3432, Address: 0x3fc504, Func Offset: 0x2d4
	// Line 3435, Address: 0x3fc508, Func Offset: 0x2d8
	// Line 3432, Address: 0x3fc518, Func Offset: 0x2e8
	// Line 3435, Address: 0x3fc520, Func Offset: 0x2f0
	// Line 3432, Address: 0x3fc52c, Func Offset: 0x2fc
	// Line 3435, Address: 0x3fc540, Func Offset: 0x310
	// Line 3432, Address: 0x3fc550, Func Offset: 0x320
	// Line 3435, Address: 0x3fc56c, Func Offset: 0x33c
	// Func End, Address: 0x3fc580, Func Offset: 0x350
}

// set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUi
// Start address: 0x3fc580
void xDecalEmitter::set_curve(curve_node_1* curve, uint32 size)
{
	// Line 3365, Address: 0x3fc580, Func Offset: 0
	// Line 3368, Address: 0x3fc584, Func Offset: 0x4
	// Func End, Address: 0x3fc58c, Func Offset: 0xc
}

// refresh_config__13xDecalEmitterFv
// Start address: 0x3fc590
void xDecalEmitter::refresh_config()
{
	// Line 3347, Address: 0x3fc590, Func Offset: 0
	// Line 3348, Address: 0x3fc594, Func Offset: 0x4
	// Line 3347, Address: 0x3fc598, Func Offset: 0x8
	// Line 3348, Address: 0x3fc59c, Func Offset: 0xc
	// Line 3347, Address: 0x3fc5a0, Func Offset: 0x10
	// Line 3348, Address: 0x3fc5a4, Func Offset: 0x14
	// Line 3349, Address: 0x3fc5b8, Func Offset: 0x28
	// Line 3351, Address: 0x3fc5d4, Func Offset: 0x44
	// Line 3352, Address: 0x3fc5e0, Func Offset: 0x50
	// Line 3353, Address: 0x3fc5ec, Func Offset: 0x5c
	// Line 3354, Address: 0x3fc608, Func Offset: 0x78
	// Line 3355, Address: 0x3fc624, Func Offset: 0x94
	// Line 3356, Address: 0x3fc64c, Func Offset: 0xbc
	// Line 3357, Address: 0x3fc674, Func Offset: 0xe4
	// Line 3358, Address: 0x3fc684, Func Offset: 0xf4
	// Line 3359, Address: 0x3fc6d0, Func Offset: 0x140
	// Line 3360, Address: 0x3fc718, Func Offset: 0x188
	// Line 3359, Address: 0x3fc71c, Func Offset: 0x18c
	// Line 3360, Address: 0x3fc720, Func Offset: 0x190
	// Line 3361, Address: 0x3fc740, Func Offset: 0x1b0
	// Func End, Address: 0x3fc770, Func Offset: 0x1e0
}

// set_texture__13xDecalEmitterFPCc
// Start address: 0x3fc770
void xDecalEmitter::set_texture(int8* name)
{
	// Line 3332, Address: 0x3fc770, Func Offset: 0
	// Func End, Address: 0x3fc7c0, Func Offset: 0x50
}

// set_default_config__13xDecalEmitterFv
// Start address: 0x3fc7c0
void xDecalEmitter::set_default_config()
{
	// Line 3320, Address: 0x3fc7c0, Func Offset: 0
	// Line 3321, Address: 0x3fc7c4, Func Offset: 0x4
	// Line 3322, Address: 0x3fc7c8, Func Offset: 0x8
	// Line 3321, Address: 0x3fc7cc, Func Offset: 0xc
	// Line 3322, Address: 0x3fc7d0, Func Offset: 0x10
	// Line 3323, Address: 0x3fc7d4, Func Offset: 0x14
	// Line 3326, Address: 0x3fc7dc, Func Offset: 0x1c
	// Line 3324, Address: 0x3fc7e0, Func Offset: 0x20
	// Line 3325, Address: 0x3fc7e8, Func Offset: 0x28
	// Line 3326, Address: 0x3fc7f0, Func Offset: 0x30
	// Line 3328, Address: 0x3fc7f8, Func Offset: 0x38
	// Func End, Address: 0x3fc800, Func Offset: 0x40
}

// init__13xDecalEmitterFiPCc
// Start address: 0x3fc800
void xDecalEmitter::init(int32 max_size)
{
	// Line 3301, Address: 0x3fc800, Func Offset: 0
	// Line 3303, Address: 0x3fc814, Func Offset: 0x14
	// Line 3304, Address: 0x3fc820, Func Offset: 0x20
	// Line 3303, Address: 0x3fc854, Func Offset: 0x54
	// Line 3304, Address: 0x3fc858, Func Offset: 0x58
	// Line 3306, Address: 0x3fc8b0, Func Offset: 0xb0
	// Func End, Address: 0x3fc8c0, Func Offset: 0xc0
}

// xDecalUpdate__Ff
// Start address: 0x3fc8c0
void xDecalUpdate(float32 dt)
{
	uint32 i;
	// Line 3291, Address: 0x3fc8c0, Func Offset: 0
	// Line 3292, Address: 0x3fc8d0, Func Offset: 0x10
	// Line 3291, Address: 0x3fc8d4, Func Offset: 0x14
	// Line 3292, Address: 0x3fc8d8, Func Offset: 0x18
	// Line 3294, Address: 0x3fc8f4, Func Offset: 0x34
	// Line 3296, Address: 0x3fc90c, Func Offset: 0x4c
	// Line 3297, Address: 0x3fc928, Func Offset: 0x68
	// Func End, Address: 0x3fc958, Func Offset: 0x98
}

// xDecalInit__Fv
// Start address: 0x3fc960
void xDecalInit()
{
	// Line 3288, Address: 0x3fc960, Func Offset: 0
	// Func End, Address: 0x3fc968, Func Offset: 0x8
}

// emit_env__6xDecalFRCQ26xDecal12emit_contextRC7xMat4x3
// Start address: 0x3fc970
void emit_env(emit_context& ec, xMat4x3& mat)
{
	owner_group_type* owner_group;
	uint8* temp_scratch;
	uint8* mem;
	intersect_env_params* iarg;
	clip_decal_params* carg;
	xVec3* decal_vert;
	uint8* outcode;
	float32 rx;
	float32 ry;
	decal_instance* decal;
	immediate_mode_data* im;
	uint16* index;
	uint16 i;
	RpGeometry* geom;
	RpTriangle* atri;
	uint16 i;
	RpMorphTarget* mt;
	RwSphere o;
	// Line 3014, Address: 0x3fc970, Func Offset: 0
	// Line 3016, Address: 0x3fc998, Func Offset: 0x28
	// Line 3019, Address: 0x3fc9ac, Func Offset: 0x3c
	// Line 3020, Address: 0x3fc9f8, Func Offset: 0x88
	// Line 3024, Address: 0x3fca2c, Func Offset: 0xbc
	// Line 3046, Address: 0x3fca38, Func Offset: 0xc8
	// Line 3031, Address: 0x3fca3c, Func Offset: 0xcc
	// Line 3033, Address: 0x3fca40, Func Offset: 0xd0
	// Line 3031, Address: 0x3fca44, Func Offset: 0xd4
	// Line 3035, Address: 0x3fca48, Func Offset: 0xd8
	// Line 3039, Address: 0x3fca4c, Func Offset: 0xdc
	// Line 3044, Address: 0x3fca50, Func Offset: 0xe0
	// Line 3040, Address: 0x3fca54, Func Offset: 0xe4
	// Line 3046, Address: 0x3fca58, Func Offset: 0xe8
	// Line 3043, Address: 0x3fca5c, Func Offset: 0xec
	// Line 3029, Address: 0x3fca60, Func Offset: 0xf0
	// Line 3044, Address: 0x3fca64, Func Offset: 0xf4
	// Line 3046, Address: 0x3fca68, Func Offset: 0xf8
	// Line 3048, Address: 0x3fcac8, Func Offset: 0x158
	// Line 3046, Address: 0x3fcacc, Func Offset: 0x15c
	// Line 3053, Address: 0x3fcad0, Func Offset: 0x160
	// Line 3046, Address: 0x3fcad4, Func Offset: 0x164
	// Line 3048, Address: 0x3fcad8, Func Offset: 0x168
	// Line 3046, Address: 0x3fcae4, Func Offset: 0x174
	// Line 3048, Address: 0x3fcafc, Func Offset: 0x18c
	// Line 3047, Address: 0x3fcb00, Func Offset: 0x190
	// Line 3048, Address: 0x3fcb04, Func Offset: 0x194
	// Line 3049, Address: 0x3fcb08, Func Offset: 0x198
	// Line 3050, Address: 0x3fcb1c, Func Offset: 0x1ac
	// Line 3053, Address: 0x3fcb28, Func Offset: 0x1b8
	// Line 3055, Address: 0x3fcb30, Func Offset: 0x1c0
	// Line 3057, Address: 0x3fcb58, Func Offset: 0x1e8
	// Line 3061, Address: 0x3fcb64, Func Offset: 0x1f4
	// Line 3064, Address: 0x3fcb68, Func Offset: 0x1f8
	// Line 3062, Address: 0x3fcb6c, Func Offset: 0x1fc
	// Line 3064, Address: 0x3fcb70, Func Offset: 0x200
	// Line 3063, Address: 0x3fcb74, Func Offset: 0x204
	// Line 3065, Address: 0x3fcb80, Func Offset: 0x210
	// Line 3066, Address: 0x3fcb88, Func Offset: 0x218
	// Line 3063, Address: 0x3fcb90, Func Offset: 0x220
	// Line 3064, Address: 0x3fcbb4, Func Offset: 0x244
	// Line 3065, Address: 0x3fcbbc, Func Offset: 0x24c
	// Line 3066, Address: 0x3fcbc4, Func Offset: 0x254
	// Line 3067, Address: 0x3fcbcc, Func Offset: 0x25c
	// Line 3070, Address: 0x3fcbf0, Func Offset: 0x280
	// Line 3071, Address: 0x3fcc08, Func Offset: 0x298
	// Line 3072, Address: 0x3fcc18, Func Offset: 0x2a8
	// Line 3076, Address: 0x3fcc30, Func Offset: 0x2c0
	// Line 3078, Address: 0x3fcc38, Func Offset: 0x2c8
	// Line 3083, Address: 0x3fcc44, Func Offset: 0x2d4
	// Line 3086, Address: 0x3fcc54, Func Offset: 0x2e4
	// Line 3088, Address: 0x3fcc70, Func Offset: 0x300
	// Line 3089, Address: 0x3fcc78, Func Offset: 0x308
	// Line 3091, Address: 0x3fcc88, Func Offset: 0x318
	// Line 3096, Address: 0x3fcc8c, Func Offset: 0x31c
	// Line 3092, Address: 0x3fcc90, Func Offset: 0x320
	// Line 3093, Address: 0x3fcc98, Func Offset: 0x328
	// Line 3096, Address: 0x3fcca0, Func Offset: 0x330
	// Line 3100, Address: 0x3fccb0, Func Offset: 0x340
	// Line 3099, Address: 0x3fccb4, Func Offset: 0x344
	// Line 3100, Address: 0x3fccb8, Func Offset: 0x348
	// Line 3101, Address: 0x3fccc4, Func Offset: 0x354
	// Line 3104, Address: 0x3fcce0, Func Offset: 0x370
	// Line 3105, Address: 0x3fccf4, Func Offset: 0x384
	// Line 3108, Address: 0x3fccfc, Func Offset: 0x38c
	// Line 3110, Address: 0x3fcd00, Func Offset: 0x390
	// Line 3108, Address: 0x3fcd04, Func Offset: 0x394
	// Line 3110, Address: 0x3fcd08, Func Offset: 0x398
	// Line 3112, Address: 0x3fcd30, Func Offset: 0x3c0
	// Line 3114, Address: 0x3fcd38, Func Offset: 0x3c8
	// Line 3115, Address: 0x3fceb4, Func Offset: 0x544
	// Line 3119, Address: 0x3fcebc, Func Offset: 0x54c
	// Line 3124, Address: 0x3fcec0, Func Offset: 0x550
	// Line 3121, Address: 0x3fcecc, Func Offset: 0x55c
	// Line 3124, Address: 0x3fced0, Func Offset: 0x560
	// Line 3127, Address: 0x3fcedc, Func Offset: 0x56c
	// Line 3129, Address: 0x3fceec, Func Offset: 0x57c
	// Line 3130, Address: 0x3fcef0, Func Offset: 0x580
	// Line 3131, Address: 0x3fcef8, Func Offset: 0x588
	// Line 3132, Address: 0x3fcf08, Func Offset: 0x598
	// Line 3134, Address: 0x3fcf18, Func Offset: 0x5a8
	// Line 3136, Address: 0x3fcf1c, Func Offset: 0x5ac
	// Line 3137, Address: 0x3fcf28, Func Offset: 0x5b8
	// Line 3140, Address: 0x3fcf48, Func Offset: 0x5d8
	// Line 3145, Address: 0x3fcf5c, Func Offset: 0x5ec
	// Line 3146, Address: 0x3fcf70, Func Offset: 0x600
	// Line 3147, Address: 0x3fcf80, Func Offset: 0x610
	// Line 3148, Address: 0x3fcf88, Func Offset: 0x618
	// Func End, Address: 0x3fcfb0, Func Offset: 0x640
}

// emit__6xDecalFRCQ26xDecal12emit_contextRC7xMat4x3P8RpAtomicPC7xMat4x3b
// Start address: 0x3fcfb0
void emit(emit_context& ec, xMat4x3& mat, RpAtomic* model, xMat4x3* model_mat, uint8 moving_model)
{
	owner_group_type* owner_group;
	RpGeometry* geom;
	RpTriangle* tri;
	xVec3* vert;
	int32 tri_size;
	int32 vert_size;
	xMat4x3& mmat;
	xMat4x3 oldmmat;
	xMat4x3 imat;
	xVec3* decal_vert;
	uint8* temp_scratch;
	clip_decal_indexed_params* arg;
	float32* weight_buffer;
	float32 rx;
	float32 ry;
	uint8 mountable;
	decal_instance* decal;
	// Line 2837, Address: 0x3fcfb0, Func Offset: 0
	// Line 2839, Address: 0x3fcfe4, Func Offset: 0x34
	// Line 2842, Address: 0x3fd004, Func Offset: 0x54
	// Line 2843, Address: 0x3fd05c, Func Offset: 0xac
	// Line 2850, Address: 0x3fd090, Func Offset: 0xe0
	// Line 2852, Address: 0x3fd098, Func Offset: 0xe8
	// Line 2853, Address: 0x3fd09c, Func Offset: 0xec
	// Line 2854, Address: 0x3fd0a0, Func Offset: 0xf0
	// Line 2852, Address: 0x3fd0a4, Func Offset: 0xf4
	// Line 2855, Address: 0x3fd0a8, Func Offset: 0xf8
	// Line 2859, Address: 0x3fd0c0, Func Offset: 0x110
	// Line 2861, Address: 0x3fd0c4, Func Offset: 0x114
	// Line 2859, Address: 0x3fd0cc, Func Offset: 0x11c
	// Line 2861, Address: 0x3fd0e8, Func Offset: 0x138
	// Line 2862, Address: 0x3fd148, Func Offset: 0x198
	// Line 2861, Address: 0x3fd14c, Func Offset: 0x19c
	// Line 2862, Address: 0x3fd150, Func Offset: 0x1a0
	// Line 2861, Address: 0x3fd154, Func Offset: 0x1a4
	// Line 2862, Address: 0x3fd16c, Func Offset: 0x1bc
	// Line 2865, Address: 0x3fd174, Func Offset: 0x1c4
	// Line 2866, Address: 0x3fd184, Func Offset: 0x1d4
	// Line 2867, Address: 0x3fd190, Func Offset: 0x1e0
	// Line 2868, Address: 0x3fd1ac, Func Offset: 0x1fc
	// Line 2871, Address: 0x3fd1c8, Func Offset: 0x218
	// Line 2868, Address: 0x3fd1cc, Func Offset: 0x21c
	// Line 2871, Address: 0x3fd1d0, Func Offset: 0x220
	// Line 2868, Address: 0x3fd1d4, Func Offset: 0x224
	// Line 2871, Address: 0x3fd234, Func Offset: 0x284
	// Line 2889, Address: 0x3fd240, Func Offset: 0x290
	// Line 2876, Address: 0x3fd244, Func Offset: 0x294
	// Line 2878, Address: 0x3fd248, Func Offset: 0x298
	// Line 2876, Address: 0x3fd24c, Func Offset: 0x29c
	// Line 2882, Address: 0x3fd250, Func Offset: 0x2a0
	// Line 2880, Address: 0x3fd254, Func Offset: 0x2a4
	// Line 2878, Address: 0x3fd258, Func Offset: 0x2a8
	// Line 2889, Address: 0x3fd25c, Func Offset: 0x2ac
	// Line 2897, Address: 0x3fd264, Func Offset: 0x2b4
	// Line 2893, Address: 0x3fd268, Func Offset: 0x2b8
	// Line 2894, Address: 0x3fd26c, Func Offset: 0x2bc
	// Line 2897, Address: 0x3fd270, Func Offset: 0x2c0
	// Line 2895, Address: 0x3fd278, Func Offset: 0x2c8
	// Line 2898, Address: 0x3fd280, Func Offset: 0x2d0
	// Line 2896, Address: 0x3fd284, Func Offset: 0x2d4
	// Line 2897, Address: 0x3fd288, Func Offset: 0x2d8
	// Line 2898, Address: 0x3fd290, Func Offset: 0x2e0
	// Line 2899, Address: 0x3fd298, Func Offset: 0x2e8
	// Line 2898, Address: 0x3fd29c, Func Offset: 0x2ec
	// Line 2902, Address: 0x3fd2a4, Func Offset: 0x2f4
	// Line 2899, Address: 0x3fd2b0, Func Offset: 0x300
	// Line 2909, Address: 0x3fd2b4, Func Offset: 0x304
	// Line 2902, Address: 0x3fd2bc, Func Offset: 0x30c
	// Line 2899, Address: 0x3fd2c0, Func Offset: 0x310
	// Line 2909, Address: 0x3fd2c4, Func Offset: 0x314
	// Line 2902, Address: 0x3fd2c8, Func Offset: 0x318
	// Line 2899, Address: 0x3fd2cc, Func Offset: 0x31c
	// Line 2903, Address: 0x3fd2d0, Func Offset: 0x320
	// Line 2904, Address: 0x3fd2d4, Func Offset: 0x324
	// Line 2903, Address: 0x3fd2d8, Func Offset: 0x328
	// Line 2899, Address: 0x3fd2dc, Func Offset: 0x32c
	// Line 2903, Address: 0x3fd2e0, Func Offset: 0x330
	// Line 2904, Address: 0x3fd2ec, Func Offset: 0x33c
	// Line 2909, Address: 0x3fd2f4, Func Offset: 0x344
	// Line 2910, Address: 0x3fd308, Func Offset: 0x358
	// Line 2909, Address: 0x3fd310, Func Offset: 0x360
	// Line 2910, Address: 0x3fd314, Func Offset: 0x364
	// Line 2912, Address: 0x3fd32c, Func Offset: 0x37c
	// Line 2913, Address: 0x3fd33c, Func Offset: 0x38c
	// Line 2914, Address: 0x3fd34c, Func Offset: 0x39c
	// Line 2915, Address: 0x3fd35c, Func Offset: 0x3ac
	// Line 2918, Address: 0x3fd380, Func Offset: 0x3d0
	// Line 2919, Address: 0x3fd750, Func Offset: 0x7a0
	// Line 2920, Address: 0x3fd758, Func Offset: 0x7a8
	// Line 2923, Address: 0x3fd770, Func Offset: 0x7c0
	// Line 2924, Address: 0x3fd788, Func Offset: 0x7d8
	// Line 2925, Address: 0x3fd79c, Func Offset: 0x7ec
	// Line 2926, Address: 0x3fd7bc, Func Offset: 0x80c
	// Line 2928, Address: 0x3fd7d0, Func Offset: 0x820
	// Line 2931, Address: 0x3fd7e0, Func Offset: 0x830
	// Line 2934, Address: 0x3fd814, Func Offset: 0x864
	// Line 2935, Address: 0x3fd824, Func Offset: 0x874
	// Line 2937, Address: 0x3fd834, Func Offset: 0x884
	// Line 2942, Address: 0x3fd838, Func Offset: 0x888
	// Line 2937, Address: 0x3fd83c, Func Offset: 0x88c
	// Line 2938, Address: 0x3fd840, Func Offset: 0x890
	// Line 2939, Address: 0x3fd848, Func Offset: 0x898
	// Line 2942, Address: 0x3fd858, Func Offset: 0x8a8
	// Line 2943, Address: 0x3fd868, Func Offset: 0x8b8
	// Line 2946, Address: 0x3fd8a8, Func Offset: 0x8f8
	// Line 2948, Address: 0x3fd8b8, Func Offset: 0x908
	// Line 2949, Address: 0x3fd8cc, Func Offset: 0x91c
	// Line 2952, Address: 0x3fd8d4, Func Offset: 0x924
	// Line 2953, Address: 0x3fd8e8, Func Offset: 0x938
	// Line 2959, Address: 0x3fd8fc, Func Offset: 0x94c
	// Line 2962, Address: 0x3fd904, Func Offset: 0x954
	// Line 2964, Address: 0x3fd90c, Func Offset: 0x95c
	// Line 2966, Address: 0x3fd92c, Func Offset: 0x97c
	// Line 2968, Address: 0x3fd934, Func Offset: 0x984
	// Line 2969, Address: 0x3fdac0, Func Offset: 0xb10
	// Line 2972, Address: 0x3fdac8, Func Offset: 0xb18
	// Line 2974, Address: 0x3fdad0, Func Offset: 0xb20
	// Line 2975, Address: 0x3fdae8, Func Offset: 0xb38
	// Line 2978, Address: 0x3fe3c4, Func Offset: 0x1414
	// Line 2979, Address: 0x3fe400, Func Offset: 0x1450
	// Line 2980, Address: 0x3fe58c, Func Offset: 0x15dc
	// Line 2983, Address: 0x3fe594, Func Offset: 0x15e4
	// Line 2985, Address: 0x3fe5a0, Func Offset: 0x15f0
	// Line 2986, Address: 0x3fe5bc, Func Offset: 0x160c
	// Line 2989, Address: 0x3fe5c4, Func Offset: 0x1614
	// Line 2993, Address: 0x3fe5fc, Func Offset: 0x164c
	// Line 2995, Address: 0x3fe61c, Func Offset: 0x166c
	// Line 3000, Address: 0x3fe650, Func Offset: 0x16a0
	// Line 3001, Address: 0x3fe658, Func Offset: 0x16a8
	// Line 3006, Address: 0x3fe66c, Func Offset: 0x16bc
	// Line 3007, Address: 0x3fe680, Func Offset: 0x16d0
	// Line 3008, Address: 0x3fe694, Func Offset: 0x16e4
	// Line 3009, Address: 0x3fe6a4, Func Offset: 0x16f4
	// Line 3010, Address: 0x3fe6ac, Func Offset: 0x16fc
	// Line 3011, Address: 0x3fe6b4, Func Offset: 0x1704
	// Func End, Address: 0x3fe6e4, Func Offset: 0x1734
}

// sphere_emit__6xDecalFRCQ26xDecal12emit_contextRC5xVec3fi
// Start address: 0x3fe6f0
void sphere_emit(emit_context& ec, xVec3& center, float32 radius, int32 check_flags)
{
	xSphere o;
	xMat4x3 mat;
	xCollis coll;
	cb_decal_sphere_hits_ent cb;
	xBound bound;
	// Line 2760, Address: 0x3fe6f0, Func Offset: 0
	// Line 2762, Address: 0x3fe6f8, Func Offset: 0x8
	// Line 2760, Address: 0x3fe6fc, Func Offset: 0xc
	// Line 2762, Address: 0x3fe700, Func Offset: 0x10
	// Line 2760, Address: 0x3fe704, Func Offset: 0x14
	// Line 2762, Address: 0x3fe708, Func Offset: 0x18
	// Line 2760, Address: 0x3fe70c, Func Offset: 0x1c
	// Line 2762, Address: 0x3fe728, Func Offset: 0x38
	// Line 2771, Address: 0x3fe730, Func Offset: 0x40
	// Line 2762, Address: 0x3fe734, Func Offset: 0x44
	// Line 2763, Address: 0x3fe738, Func Offset: 0x48
	// Line 2762, Address: 0x3fe73c, Func Offset: 0x4c
	// Line 2766, Address: 0x3fe740, Func Offset: 0x50
	// Line 2762, Address: 0x3fe744, Func Offset: 0x54
	// Line 2766, Address: 0x3fe748, Func Offset: 0x58
	// Line 2762, Address: 0x3fe74c, Func Offset: 0x5c
	// Line 2771, Address: 0x3fe750, Func Offset: 0x60
	// Line 2789, Address: 0x3fe758, Func Offset: 0x68
	// Line 2804, Address: 0x3fe764, Func Offset: 0x74
	// Line 2819, Address: 0x3fe770, Func Offset: 0x80
	// Line 2775, Address: 0x3fe778, Func Offset: 0x88
	// Line 2819, Address: 0x3fe77c, Func Offset: 0x8c
	// Line 2775, Address: 0x3fe780, Func Offset: 0x90
	// Line 2819, Address: 0x3fe784, Func Offset: 0x94
	// Line 2776, Address: 0x3fe788, Func Offset: 0x98
	// Line 2819, Address: 0x3fe78c, Func Offset: 0x9c
	// Line 2778, Address: 0x3fe7a8, Func Offset: 0xb8
	// Line 2819, Address: 0x3fe7ac, Func Offset: 0xbc
	// Line 2780, Address: 0x3fe7b8, Func Offset: 0xc8
	// Line 2819, Address: 0x3fe7c4, Func Offset: 0xd4
	// Line 2782, Address: 0x3fe7d8, Func Offset: 0xe8
	// Line 2819, Address: 0x3fe7dc, Func Offset: 0xec
	// Line 2782, Address: 0x3fe7e4, Func Offset: 0xf4
	// Line 2819, Address: 0x3fe7ec, Func Offset: 0xfc
	// Line 2782, Address: 0x3fe7f0, Func Offset: 0x100
	// Line 2819, Address: 0x3fe7f4, Func Offset: 0x104
	// Line 2783, Address: 0x3fe818, Func Offset: 0x128
	// Line 2819, Address: 0x3fe81c, Func Offset: 0x12c
	// Line 2783, Address: 0x3fe824, Func Offset: 0x134
	// Line 2819, Address: 0x3fe828, Func Offset: 0x138
	// Line 2783, Address: 0x3fe834, Func Offset: 0x144
	// Line 2819, Address: 0x3fe838, Func Offset: 0x148
	// Line 2791, Address: 0x3fe85c, Func Offset: 0x16c
	// Line 2819, Address: 0x3fe860, Func Offset: 0x170
	// Line 2791, Address: 0x3fe864, Func Offset: 0x174
	// Line 2819, Address: 0x3fe868, Func Offset: 0x178
	// Line 2792, Address: 0x3fe86c, Func Offset: 0x17c
	// Line 2819, Address: 0x3fe870, Func Offset: 0x180
	// Line 2793, Address: 0x3fe89c, Func Offset: 0x1ac
	// Line 2819, Address: 0x3fe8a0, Func Offset: 0x1b0
	// Line 2795, Address: 0x3fe8a8, Func Offset: 0x1b8
	// Line 2819, Address: 0x3fe8b4, Func Offset: 0x1c4
	// Line 2797, Address: 0x3fe8c8, Func Offset: 0x1d8
	// Line 2819, Address: 0x3fe8cc, Func Offset: 0x1dc
	// Line 2797, Address: 0x3fe8d4, Func Offset: 0x1e4
	// Line 2819, Address: 0x3fe8dc, Func Offset: 0x1ec
	// Line 2797, Address: 0x3fe8e0, Func Offset: 0x1f0
	// Line 2819, Address: 0x3fe8e4, Func Offset: 0x1f4
	// Line 2798, Address: 0x3fe8f0, Func Offset: 0x200
	// Line 2819, Address: 0x3fe8f4, Func Offset: 0x204
	// Line 2808, Address: 0x3fe924, Func Offset: 0x234
	// Line 2819, Address: 0x3fe928, Func Offset: 0x238
	// Line 2808, Address: 0x3fe934, Func Offset: 0x244
	// Line 2819, Address: 0x3fe938, Func Offset: 0x248
	// Line 2809, Address: 0x3fe954, Func Offset: 0x264
	// Line 2819, Address: 0x3fe958, Func Offset: 0x268
	// Line 2814, Address: 0x3fe960, Func Offset: 0x270
	// Line 2819, Address: 0x3fe964, Func Offset: 0x274
	// Line 2816, Address: 0x3fe978, Func Offset: 0x288
	// Line 2819, Address: 0x3fe97c, Func Offset: 0x28c
	// Line 2811, Address: 0x3fe998, Func Offset: 0x2a8
	// Line 2819, Address: 0x3fe99c, Func Offset: 0x2ac
	// Line 2812, Address: 0x3fe9b0, Func Offset: 0x2c0
	// Line 2819, Address: 0x3fe9b4, Func Offset: 0x2c4
	// Func End, Address: 0x3fe9e8, Func Offset: 0x2f8
}

// emit__6xDecalFRCQ26xDecal12emit_contextRC7xMat4x3i
// Start address: 0x3fe9f0
void emit(emit_context& ec, xMat4x3& mat, int32 check_flags)
{
	xBox box;
	float32 rx;
	float32 ry;
	xSphere o;
	cb_decal_hits_ent cb;
	xBound bound;
	// Line 2717, Address: 0x3fe9f0, Func Offset: 0
	// Line 2721, Address: 0x3fe9f4, Func Offset: 0x4
	// Line 2717, Address: 0x3fe9fc, Func Offset: 0xc
	// Line 2721, Address: 0x3fea00, Func Offset: 0x10
	// Line 2717, Address: 0x3fea04, Func Offset: 0x14
	// Line 2721, Address: 0x3fea08, Func Offset: 0x18
	// Line 2717, Address: 0x3fea0c, Func Offset: 0x1c
	// Line 2723, Address: 0x3fea10, Func Offset: 0x20
	// Line 2717, Address: 0x3fea14, Func Offset: 0x24
	// Line 2725, Address: 0x3fea24, Func Offset: 0x34
	// Line 2721, Address: 0x3fea28, Func Offset: 0x38
	// Line 2722, Address: 0x3fea2c, Func Offset: 0x3c
	// Line 2721, Address: 0x3fea38, Func Offset: 0x48
	// Line 2723, Address: 0x3fea3c, Func Offset: 0x4c
	// Line 2722, Address: 0x3fea40, Func Offset: 0x50
	// Line 2723, Address: 0x3fea4c, Func Offset: 0x5c
	// Line 2725, Address: 0x3fea54, Func Offset: 0x64
	// Line 2728, Address: 0x3fea5c, Func Offset: 0x6c
	// Line 2734, Address: 0x3fea68, Func Offset: 0x78
	// Line 2735, Address: 0x3fea74, Func Offset: 0x84
	// Line 2730, Address: 0x3fea98, Func Offset: 0xa8
	// Line 2735, Address: 0x3fea9c, Func Offset: 0xac
	// Line 2730, Address: 0x3feaa0, Func Offset: 0xb0
	// Line 2735, Address: 0x3feaa4, Func Offset: 0xb4
	// Line 2730, Address: 0x3feab4, Func Offset: 0xc4
	// Line 2735, Address: 0x3feab8, Func Offset: 0xc8
	// Line 2730, Address: 0x3feac0, Func Offset: 0xd0
	// Line 2735, Address: 0x3feac4, Func Offset: 0xd4
	// Line 2730, Address: 0x3feacc, Func Offset: 0xdc
	// Line 2735, Address: 0x3fead0, Func Offset: 0xe0
	// Line 2730, Address: 0x3fead8, Func Offset: 0xe8
	// Line 2735, Address: 0x3feadc, Func Offset: 0xec
	// Line 2731, Address: 0x3feb08, Func Offset: 0x118
	// Line 2735, Address: 0x3feb0c, Func Offset: 0x11c
	// Line 2731, Address: 0x3feb20, Func Offset: 0x130
	// Line 2735, Address: 0x3feb24, Func Offset: 0x134
	// Line 2731, Address: 0x3feb28, Func Offset: 0x138
	// Line 2735, Address: 0x3feb2c, Func Offset: 0x13c
	// Line 2731, Address: 0x3feb34, Func Offset: 0x144
	// Line 2735, Address: 0x3feb38, Func Offset: 0x148
	// Line 2738, Address: 0x3feb4c, Func Offset: 0x15c
	// Line 2739, Address: 0x3feb58, Func Offset: 0x168
	// Line 2744, Address: 0x3feb64, Func Offset: 0x174
	// Line 2743, Address: 0x3feb68, Func Offset: 0x178
	// Line 2739, Address: 0x3feb6c, Func Offset: 0x17c
	// Line 2743, Address: 0x3feb70, Func Offset: 0x180
	// Line 2744, Address: 0x3feb74, Func Offset: 0x184
	// Line 2739, Address: 0x3feb78, Func Offset: 0x188
	// Line 2744, Address: 0x3feb80, Func Offset: 0x190
	// Line 2745, Address: 0x3feb8c, Func Offset: 0x19c
	// Line 2746, Address: 0x3feb94, Func Offset: 0x1a4
	// Line 2745, Address: 0x3feb98, Func Offset: 0x1a8
	// Line 2744, Address: 0x3feb9c, Func Offset: 0x1ac
	// Line 2745, Address: 0x3feba0, Func Offset: 0x1b0
	// Line 2746, Address: 0x3febb4, Func Offset: 0x1c4
	// Line 2745, Address: 0x3febb8, Func Offset: 0x1c8
	// Line 2746, Address: 0x3febbc, Func Offset: 0x1cc
	// Line 2745, Address: 0x3febc0, Func Offset: 0x1d0
	// Line 2746, Address: 0x3febfc, Func Offset: 0x20c
	// Line 2749, Address: 0x3fec04, Func Offset: 0x214
	// Line 2754, Address: 0x3fec10, Func Offset: 0x220
	// Line 2756, Address: 0x3fec1c, Func Offset: 0x22c
	// Line 2751, Address: 0x3fec2c, Func Offset: 0x23c
	// Line 2756, Address: 0x3fec30, Func Offset: 0x240
	// Line 2752, Address: 0x3fec44, Func Offset: 0x254
	// Line 2756, Address: 0x3fec48, Func Offset: 0x258
	// Line 2755, Address: 0x3fec60, Func Offset: 0x270
	// Line 2756, Address: 0x3fec64, Func Offset: 0x274
	// Func End, Address: 0x3fec94, Func Offset: 0x2a4
}

// render_all__6xDecalFv
// Start address: 0x3feca0
void render_all()
{
	int32 immediate_verts_used'924;
	int32 i;
	decal_instance* decal;
	decal_instance** it;
	decal_instance** end;
	uint32 blend_mode;
	RwTexture* texture;
	xMat4x3* driver;
	// Line 2636, Address: 0x3feca0, Func Offset: 0
	// Line 2639, Address: 0x3feccc, Func Offset: 0x2c
	// Line 2648, Address: 0x3fecd8, Func Offset: 0x38
	// Line 2653, Address: 0x3fed4c, Func Offset: 0xac
	// Line 2651, Address: 0x3fed54, Func Offset: 0xb4
	// Line 2657, Address: 0x3fed64, Func Offset: 0xc4
	// Line 2659, Address: 0x3fed8c, Func Offset: 0xec
	// Line 2660, Address: 0x3fed94, Func Offset: 0xf4
	// Line 2662, Address: 0x3feda0, Func Offset: 0x100
	// Line 2664, Address: 0x3fedb8, Func Offset: 0x118
	// Line 2667, Address: 0x3fedc4, Func Offset: 0x124
	// Line 2668, Address: 0x3fedd8, Func Offset: 0x138
	// Line 2669, Address: 0x3fede8, Func Offset: 0x148
	// Line 2671, Address: 0x3fee18, Func Offset: 0x178
	// Line 2672, Address: 0x3fef44, Func Offset: 0x2a4
	// Line 2678, Address: 0x3fef60, Func Offset: 0x2c0
	// Line 2675, Address: 0x3fef64, Func Offset: 0x2c4
	// Line 2678, Address: 0x3fef68, Func Offset: 0x2c8
	// Line 2675, Address: 0x3fef6c, Func Offset: 0x2cc
	// Line 2676, Address: 0x3fef74, Func Offset: 0x2d4
	// Line 2678, Address: 0x3fef78, Func Offset: 0x2d8
	// Line 2680, Address: 0x3fefa4, Func Offset: 0x304
	// Line 2681, Address: 0x3fefac, Func Offset: 0x30c
	// Line 2683, Address: 0x3fefc0, Func Offset: 0x320
	// Line 2686, Address: 0x3fefd4, Func Offset: 0x334
	// Line 2687, Address: 0x3ff000, Func Offset: 0x360
	// Line 2688, Address: 0x3ff00c, Func Offset: 0x36c
	// Line 2692, Address: 0x3ff018, Func Offset: 0x378
	// Line 2694, Address: 0x3ff034, Func Offset: 0x394
	// Line 2697, Address: 0x3ff040, Func Offset: 0x3a0
	// Line 2698, Address: 0x3ff058, Func Offset: 0x3b8
	// Line 2699, Address: 0x3ff06c, Func Offset: 0x3cc
	// Line 2702, Address: 0x3ff09c, Func Offset: 0x3fc
	// Line 2703, Address: 0x3ff128, Func Offset: 0x488
	// Line 2704, Address: 0x3ff148, Func Offset: 0x4a8
	// Line 2706, Address: 0x3ff174, Func Offset: 0x4d4
	// Line 2709, Address: 0x3ff1ac, Func Offset: 0x50c
	// Line 2641, Address: 0x3ff1b8, Func Offset: 0x518
	// Line 2642, Address: 0x3ff1bc, Func Offset: 0x51c
	// Line 2709, Address: 0x3ff1c0, Func Offset: 0x520
	// Line 2644, Address: 0x3ff208, Func Offset: 0x568
	// Line 2709, Address: 0x3ff20c, Func Offset: 0x56c
	// Line 2671, Address: 0x3ff248, Func Offset: 0x5a8
	// Line 2709, Address: 0x3ff24c, Func Offset: 0x5ac
	// Line 2686, Address: 0x3ff2ec, Func Offset: 0x64c
	// Line 2709, Address: 0x3ff2f0, Func Offset: 0x650
	// Line 2686, Address: 0x3ff35c, Func Offset: 0x6bc
	// Line 2709, Address: 0x3ff360, Func Offset: 0x6c0
	// Line 2686, Address: 0x3ff368, Func Offset: 0x6c8
	// Line 2709, Address: 0x3ff36c, Func Offset: 0x6cc
	// Line 2686, Address: 0x3ff3c0, Func Offset: 0x720
	// Line 2709, Address: 0x3ff3c4, Func Offset: 0x724
	// Line 2686, Address: 0x3ff3cc, Func Offset: 0x72c
	// Line 2709, Address: 0x3ff3d0, Func Offset: 0x730
	// Line 2686, Address: 0x3ff424, Func Offset: 0x784
	// Line 2709, Address: 0x3ff428, Func Offset: 0x788
	// Line 2686, Address: 0x3ff430, Func Offset: 0x790
	// Line 2709, Address: 0x3ff434, Func Offset: 0x794
	// Line 2686, Address: 0x3ff488, Func Offset: 0x7e8
	// Line 2709, Address: 0x3ff48c, Func Offset: 0x7ec
	// Line 2686, Address: 0x3ff494, Func Offset: 0x7f4
	// Line 2709, Address: 0x3ff498, Func Offset: 0x7f8
	// Line 2686, Address: 0x3ff4ec, Func Offset: 0x84c
	// Line 2709, Address: 0x3ff4f0, Func Offset: 0x850
	// Line 2686, Address: 0x3ff4f8, Func Offset: 0x858
	// Line 2709, Address: 0x3ff4fc, Func Offset: 0x85c
	// Line 2686, Address: 0x3ff550, Func Offset: 0x8b0
	// Line 2709, Address: 0x3ff554, Func Offset: 0x8b4
	// Line 2686, Address: 0x3ff55c, Func Offset: 0x8bc
	// Line 2709, Address: 0x3ff560, Func Offset: 0x8c0
	// Line 2686, Address: 0x3ff5b4, Func Offset: 0x914
	// Line 2709, Address: 0x3ff5b8, Func Offset: 0x918
	// Line 2686, Address: 0x3ff5c0, Func Offset: 0x920
	// Line 2709, Address: 0x3ff5c4, Func Offset: 0x924
	// Line 2686, Address: 0x3ff618, Func Offset: 0x978
	// Line 2709, Address: 0x3ff61c, Func Offset: 0x97c
	// Line 2686, Address: 0x3ff628, Func Offset: 0x988
	// Line 2709, Address: 0x3ff62c, Func Offset: 0x98c
	// Line 2686, Address: 0x3ff6c0, Func Offset: 0xa20
	// Line 2709, Address: 0x3ff6c4, Func Offset: 0xa24
	// Line 2686, Address: 0x3ff6d0, Func Offset: 0xa30
	// Line 2709, Address: 0x3ff6d4, Func Offset: 0xa34
	// Line 2686, Address: 0x3ff730, Func Offset: 0xa90
	// Line 2709, Address: 0x3ff734, Func Offset: 0xa94
	// Line 2702, Address: 0x3ff77c, Func Offset: 0xadc
	// Line 2709, Address: 0x3ff780, Func Offset: 0xae0
	// Line 2702, Address: 0x3ff7ec, Func Offset: 0xb4c
	// Line 2709, Address: 0x3ff7f0, Func Offset: 0xb50
	// Line 2702, Address: 0x3ff7f8, Func Offset: 0xb58
	// Line 2709, Address: 0x3ff7fc, Func Offset: 0xb5c
	// Line 2702, Address: 0x3ff850, Func Offset: 0xbb0
	// Line 2709, Address: 0x3ff854, Func Offset: 0xbb4
	// Line 2702, Address: 0x3ff85c, Func Offset: 0xbbc
	// Line 2709, Address: 0x3ff860, Func Offset: 0xbc0
	// Line 2702, Address: 0x3ff8b4, Func Offset: 0xc14
	// Line 2709, Address: 0x3ff8b8, Func Offset: 0xc18
	// Line 2702, Address: 0x3ff8c0, Func Offset: 0xc20
	// Line 2709, Address: 0x3ff8c4, Func Offset: 0xc24
	// Line 2702, Address: 0x3ff918, Func Offset: 0xc78
	// Line 2709, Address: 0x3ff91c, Func Offset: 0xc7c
	// Line 2702, Address: 0x3ff924, Func Offset: 0xc84
	// Line 2709, Address: 0x3ff928, Func Offset: 0xc88
	// Line 2702, Address: 0x3ff97c, Func Offset: 0xcdc
	// Line 2709, Address: 0x3ff980, Func Offset: 0xce0
	// Line 2702, Address: 0x3ff988, Func Offset: 0xce8
	// Line 2709, Address: 0x3ff98c, Func Offset: 0xcec
	// Line 2702, Address: 0x3ff9e0, Func Offset: 0xd40
	// Line 2709, Address: 0x3ff9e4, Func Offset: 0xd44
	// Line 2702, Address: 0x3ff9ec, Func Offset: 0xd4c
	// Line 2709, Address: 0x3ff9f0, Func Offset: 0xd50
	// Line 2702, Address: 0x3ffa44, Func Offset: 0xda4
	// Line 2709, Address: 0x3ffa48, Func Offset: 0xda8
	// Line 2702, Address: 0x3ffa50, Func Offset: 0xdb0
	// Line 2709, Address: 0x3ffa54, Func Offset: 0xdb4
	// Line 2702, Address: 0x3ffaa8, Func Offset: 0xe08
	// Line 2709, Address: 0x3ffaac, Func Offset: 0xe0c
	// Line 2702, Address: 0x3ffab8, Func Offset: 0xe18
	// Line 2709, Address: 0x3ffabc, Func Offset: 0xe1c
	// Line 2702, Address: 0x3ffb50, Func Offset: 0xeb0
	// Line 2709, Address: 0x3ffb54, Func Offset: 0xeb4
	// Line 2702, Address: 0x3ffb60, Func Offset: 0xec0
	// Line 2709, Address: 0x3ffb64, Func Offset: 0xec4
	// Line 2702, Address: 0x3ffbc0, Func Offset: 0xf20
	// Line 2709, Address: 0x3ffbc4, Func Offset: 0xf24
	// Line 2702, Address: 0x3ffbd8, Func Offset: 0xf38
	// Line 2709, Address: 0x3ffbdc, Func Offset: 0xf3c
	// Line 2702, Address: 0x3ffbf0, Func Offset: 0xf50
	// Line 2709, Address: 0x3ffbf8, Func Offset: 0xf58
	// Line 2702, Address: 0x3ffc00, Func Offset: 0xf60
	// Line 2709, Address: 0x3ffc04, Func Offset: 0xf64
	// Line 2702, Address: 0x3ffc24, Func Offset: 0xf84
	// Line 2709, Address: 0x3ffc28, Func Offset: 0xf88
	// Line 2702, Address: 0x3ffc2c, Func Offset: 0xf8c
	// Line 2709, Address: 0x3ffc30, Func Offset: 0xf90
	// Line 2702, Address: 0x3ffc34, Func Offset: 0xf94
	// Line 2709, Address: 0x3ffc38, Func Offset: 0xf98
	// Line 2702, Address: 0x3ffc74, Func Offset: 0xfd4
	// Line 2709, Address: 0x3ffc78, Func Offset: 0xfd8
	// Line 2702, Address: 0x3ffc84, Func Offset: 0xfe4
	// Line 2709, Address: 0x3ffc88, Func Offset: 0xfe8
	// Line 2702, Address: 0x3ffc8c, Func Offset: 0xfec
	// Line 2709, Address: 0x3ffc90, Func Offset: 0xff0
	// Line 2702, Address: 0x3ffcb4, Func Offset: 0x1014
	// Line 2709, Address: 0x3ffcb8, Func Offset: 0x1018
	// Line 2702, Address: 0x3ffcbc, Func Offset: 0x101c
	// Line 2709, Address: 0x3ffcc4, Func Offset: 0x1024
	// Line 2704, Address: 0x3ffd04, Func Offset: 0x1064
	// Line 2709, Address: 0x3ffd08, Func Offset: 0x1068
	// Line 2704, Address: 0x3ffd7c, Func Offset: 0x10dc
	// Line 2709, Address: 0x3ffd80, Func Offset: 0x10e0
	// Line 2704, Address: 0x3ffd88, Func Offset: 0x10e8
	// Line 2709, Address: 0x3ffd8c, Func Offset: 0x10ec
	// Line 2704, Address: 0x3ffde0, Func Offset: 0x1140
	// Line 2709, Address: 0x3ffde4, Func Offset: 0x1144
	// Line 2704, Address: 0x3ffdec, Func Offset: 0x114c
	// Line 2709, Address: 0x3ffdf0, Func Offset: 0x1150
	// Line 2704, Address: 0x3ffe44, Func Offset: 0x11a4
	// Line 2709, Address: 0x3ffe48, Func Offset: 0x11a8
	// Line 2704, Address: 0x3ffe50, Func Offset: 0x11b0
	// Line 2709, Address: 0x3ffe54, Func Offset: 0x11b4
	// Line 2704, Address: 0x3ffea8, Func Offset: 0x1208
	// Line 2709, Address: 0x3ffeac, Func Offset: 0x120c
	// Line 2704, Address: 0x3ffeb4, Func Offset: 0x1214
	// Line 2709, Address: 0x3ffeb8, Func Offset: 0x1218
	// Line 2704, Address: 0x3fff0c, Func Offset: 0x126c
	// Line 2709, Address: 0x3fff10, Func Offset: 0x1270
	// Line 2704, Address: 0x3fff18, Func Offset: 0x1278
	// Line 2709, Address: 0x3fff1c, Func Offset: 0x127c
	// Line 2704, Address: 0x3fff70, Func Offset: 0x12d0
	// Line 2709, Address: 0x3fff74, Func Offset: 0x12d4
	// Line 2704, Address: 0x3fff7c, Func Offset: 0x12dc
	// Line 2709, Address: 0x3fff80, Func Offset: 0x12e0
	// Line 2704, Address: 0x3fffd4, Func Offset: 0x1334
	// Line 2709, Address: 0x3fffd8, Func Offset: 0x1338
	// Line 2704, Address: 0x3fffe0, Func Offset: 0x1340
	// Line 2709, Address: 0x3fffe4, Func Offset: 0x1344
	// Line 2704, Address: 0x400038, Func Offset: 0x1398
	// Line 2709, Address: 0x40003c, Func Offset: 0x139c
	// Line 2704, Address: 0x400048, Func Offset: 0x13a8
	// Line 2709, Address: 0x40004c, Func Offset: 0x13ac
	// Line 2704, Address: 0x4000e4, Func Offset: 0x1444
	// Line 2709, Address: 0x4000e8, Func Offset: 0x1448
	// Line 2704, Address: 0x4000f4, Func Offset: 0x1454
	// Line 2709, Address: 0x4000f8, Func Offset: 0x1458
	// Line 2704, Address: 0x400158, Func Offset: 0x14b8
	// Line 2709, Address: 0x40015c, Func Offset: 0x14bc
	// Line 2706, Address: 0x40016c, Func Offset: 0x14cc
	// Line 2709, Address: 0x400174, Func Offset: 0x14d4
	// Func End, Address: 0x4001b0, Func Offset: 0x1510
}

// update__6xDecalFf
// Start address: 0x4001b0
void update(float32 dt)
{
	decal_instance* decal;
	decal_instance* end_decal;
	// Line 2600, Address: 0x4001b0, Func Offset: 0
	// Line 2604, Address: 0x4001cc, Func Offset: 0x1c
	// Line 2600, Address: 0x4001d0, Func Offset: 0x20
	// Line 2604, Address: 0x4001d4, Func Offset: 0x24
	// Line 2605, Address: 0x4001ec, Func Offset: 0x3c
	// Line 2607, Address: 0x4001f8, Func Offset: 0x48
	// Line 2609, Address: 0x400204, Func Offset: 0x54
	// Line 2613, Address: 0x400220, Func Offset: 0x70
	// Line 2614, Address: 0x40023c, Func Offset: 0x8c
	// Line 2615, Address: 0x400260, Func Offset: 0xb0
	// Line 2616, Address: 0x40026c, Func Offset: 0xbc
	// Line 2618, Address: 0x40027c, Func Offset: 0xcc
	// Line 2619, Address: 0x40028c, Func Offset: 0xdc
	// Line 2631, Address: 0x400298, Func Offset: 0xe8
	// Line 2622, Address: 0x4002b4, Func Offset: 0x104
	// Line 2631, Address: 0x4002b8, Func Offset: 0x108
	// Line 2622, Address: 0x4002d0, Func Offset: 0x120
	// Line 2631, Address: 0x4002d8, Func Offset: 0x128
	// Line 2622, Address: 0x4002ec, Func Offset: 0x13c
	// Line 2631, Address: 0x4002f0, Func Offset: 0x140
	// Line 2622, Address: 0x4002f4, Func Offset: 0x144
	// Line 2631, Address: 0x4002f8, Func Offset: 0x148
	// Line 2622, Address: 0x40031c, Func Offset: 0x16c
	// Line 2631, Address: 0x400320, Func Offset: 0x170
	// Line 2622, Address: 0x400328, Func Offset: 0x178
	// Line 2631, Address: 0x400330, Func Offset: 0x180
	// Line 2623, Address: 0x40034c, Func Offset: 0x19c
	// Line 2631, Address: 0x400350, Func Offset: 0x1a0
	// Line 2623, Address: 0x400354, Func Offset: 0x1a4
	// Line 2631, Address: 0x400358, Func Offset: 0x1a8
	// Line 2623, Address: 0x40035c, Func Offset: 0x1ac
	// Line 2631, Address: 0x400360, Func Offset: 0x1b0
	// Line 2623, Address: 0x400370, Func Offset: 0x1c0
	// Line 2631, Address: 0x40037c, Func Offset: 0x1cc
	// Line 2623, Address: 0x400394, Func Offset: 0x1e4
	// Line 2631, Address: 0x400398, Func Offset: 0x1e8
	// Line 2623, Address: 0x40039c, Func Offset: 0x1ec
	// Line 2631, Address: 0x4003a4, Func Offset: 0x1f4
	// Line 2623, Address: 0x4004b0, Func Offset: 0x300
	// Line 2631, Address: 0x4004b8, Func Offset: 0x308
	// Line 2632, Address: 0x4004cc, Func Offset: 0x31c
	// Line 2633, Address: 0x4004e0, Func Offset: 0x330
	// Func End, Address: 0x400500, Func Offset: 0x350
}

// reset__6xDecalFv
// Start address: 0x400500
void reset()
{
	decal_instance* decal;
	decal_instance* end_decal;
	immediate_mode_data* idata;
	immediate_mode_data* end_idata;
	// Line 2580, Address: 0x400500, Func Offset: 0
	// Line 2581, Address: 0x400518, Func Offset: 0x18
	// Line 2580, Address: 0x40051c, Func Offset: 0x1c
	// Line 2581, Address: 0x400520, Func Offset: 0x20
	// Line 2582, Address: 0x400538, Func Offset: 0x38
	// Line 2583, Address: 0x400540, Func Offset: 0x40
	// Line 2586, Address: 0x4005ec, Func Offset: 0xec
	// Line 2588, Address: 0x4005f0, Func Offset: 0xf0
	// Line 2589, Address: 0x4005f8, Func Offset: 0xf8
	// Line 2590, Address: 0x400618, Func Offset: 0x118
	// Line 2591, Address: 0x40061c, Func Offset: 0x11c
	// Line 2593, Address: 0x400620, Func Offset: 0x120
	// Line 2596, Address: 0x400634, Func Offset: 0x134
	// Line 2595, Address: 0x400638, Func Offset: 0x138
	// Line 2596, Address: 0x40063c, Func Offset: 0x13c
	// Line 2597, Address: 0x400640, Func Offset: 0x140
	// Func End, Address: 0x40065c, Func Offset: 0x15c
}

// scene_exit__6xDecalFv
// Start address: 0x400660
void scene_exit()
{
	decal_instance* decal;
	decal_instance* end_decal;
	// Line 2573, Address: 0x400660, Func Offset: 0
	// Line 2574, Address: 0x400678, Func Offset: 0x18
	// Line 2573, Address: 0x40067c, Func Offset: 0x1c
	// Line 2574, Address: 0x400680, Func Offset: 0x20
	// Line 2575, Address: 0x400698, Func Offset: 0x38
	// Line 2576, Address: 0x4006a0, Func Offset: 0x40
	// Line 2577, Address: 0x400748, Func Offset: 0xe8
	// Func End, Address: 0x400764, Func Offset: 0x104
}

// scene_enter__6xDecalFv
// Start address: 0x400770
void scene_enter()
{
	// Line 2560, Address: 0x400770, Func Offset: 0
	// Line 2561, Address: 0x400774, Func Offset: 0x4
	// Line 2560, Address: 0x400778, Func Offset: 0x8
	// Line 2561, Address: 0x40077c, Func Offset: 0xc
	// Line 2562, Address: 0x400788, Func Offset: 0x18
	// Line 2561, Address: 0x400790, Func Offset: 0x20
	// Line 2562, Address: 0x400794, Func Offset: 0x24
	// Line 2563, Address: 0x40079c, Func Offset: 0x2c
	// Line 2562, Address: 0x4007a4, Func Offset: 0x34
	// Line 2563, Address: 0x4007a8, Func Offset: 0x38
	// Line 2564, Address: 0x4007b0, Func Offset: 0x40
	// Line 2563, Address: 0x4007b4, Func Offset: 0x44
	// Line 2564, Address: 0x4007b8, Func Offset: 0x48
	// Line 2569, Address: 0x4007cc, Func Offset: 0x5c
	// Line 2570, Address: 0x4007d4, Func Offset: 0x64
	// Func End, Address: 0x4007e0, Func Offset: 0x70
}

// intersect_env__19@unnamed@xWad2_cpp@FRQ219@unnamed@xWad2_cpp@20intersect_env_params
// Start address: 0x4007e0
void intersect_env(intersect_env_params& arg)
{
	xEnv* env;
	RwLine line;
	float32 radius;
	xClumpCollV3dGradient grad;
	int32 i;
	// Line 2255, Address: 0x4007e0, Func Offset: 0
	// Line 2261, Address: 0x4007e8, Func Offset: 0x8
	// Line 2255, Address: 0x4007ec, Func Offset: 0xc
	// Line 2261, Address: 0x4007fc, Func Offset: 0x1c
	// Line 2255, Address: 0x400800, Func Offset: 0x20
	// Line 2256, Address: 0x400804, Func Offset: 0x24
	// Line 2261, Address: 0x400808, Func Offset: 0x28
	// Line 2256, Address: 0x40080c, Func Offset: 0x2c
	// Line 2261, Address: 0x400814, Func Offset: 0x34
	// Line 2264, Address: 0x40081c, Func Offset: 0x3c
	// Line 2265, Address: 0x400834, Func Offset: 0x54
	// Line 2264, Address: 0x400838, Func Offset: 0x58
	// Line 2265, Address: 0x400840, Func Offset: 0x60
	// Line 2267, Address: 0x4008e4, Func Offset: 0x104
	// Line 2265, Address: 0x4008ec, Func Offset: 0x10c
	// Line 2267, Address: 0x4008f8, Func Offset: 0x118
	// Line 2273, Address: 0x4008fc, Func Offset: 0x11c
	// Line 2271, Address: 0x400934, Func Offset: 0x154
	// Line 2273, Address: 0x400938, Func Offset: 0x158
	// Line 2274, Address: 0x400958, Func Offset: 0x178
	// Func End, Address: 0x400974, Func Offset: 0x194
}

// intersect_env_callback__19@unnamed@xWad2_cpp@FP21xClumpCollBSPTrianglePv
// Start address: 0x400980
int32 intersect_env_callback(xClumpCollBSPTriangle* tri, void* data)
{
	intersect_env_params& arg;
	int32 pflags;
	float32 c1;
	float32 c2;
	int32 out_intersect;
	// Line 2216, Address: 0x400980, Func Offset: 0
	// Line 2197, Address: 0x400984, Func Offset: 0x4
	// Line 2199, Address: 0x400998, Func Offset: 0x18
	// Line 2200, Address: 0x4009a8, Func Offset: 0x28
	// Line 2203, Address: 0x4009b4, Func Offset: 0x34
	// Line 2204, Address: 0x4009cc, Func Offset: 0x4c
	// Line 2206, Address: 0x4009e0, Func Offset: 0x60
	// Line 2207, Address: 0x400a00, Func Offset: 0x80
	// Line 2208, Address: 0x400a18, Func Offset: 0x98
	// Line 2211, Address: 0x400a24, Func Offset: 0xa4
	// Line 2212, Address: 0x400a44, Func Offset: 0xc4
	// Line 2216, Address: 0x400a64, Func Offset: 0xe4
	// Line 2217, Address: 0x400abc, Func Offset: 0x13c
	// Line 2218, Address: 0x400b14, Func Offset: 0x194
	// Line 2223, Address: 0x400b70, Func Offset: 0x1f0
	// Line 2218, Address: 0x400b74, Func Offset: 0x1f4
	// Line 2223, Address: 0x400b7c, Func Offset: 0x1fc
	// Line 2231, Address: 0x400b98, Func Offset: 0x218
	// Line 2235, Address: 0x400ba4, Func Offset: 0x224
	// Line 2236, Address: 0x400c4c, Func Offset: 0x2cc
	// Line 2235, Address: 0x400c50, Func Offset: 0x2d0
	// Line 2236, Address: 0x400c54, Func Offset: 0x2d4
	// Line 2237, Address: 0x400d04, Func Offset: 0x384
	// Line 2236, Address: 0x400d08, Func Offset: 0x388
	// Line 2237, Address: 0x400d0c, Func Offset: 0x38c
	// Line 2242, Address: 0x400dd8, Func Offset: 0x458
	// Line 2245, Address: 0x400de0, Func Offset: 0x460
	// Line 2246, Address: 0x400dec, Func Offset: 0x46c
	// Line 2247, Address: 0x400df8, Func Offset: 0x478
	// Line 2249, Address: 0x400e08, Func Offset: 0x488
	// Line 2250, Address: 0x400e0c, Func Offset: 0x48c
	// Func End, Address: 0x400e14, Func Offset: 0x494
}

// compare_decals__19@unnamed@xWad2_cpp@FPCvPCv
// Start address: 0x400e20
int32 compare_decals(void* e1, void* e2)
{
	decal_instance* d1;
	decal_instance* d2;
	// Line 2020, Address: 0x400e20, Func Offset: 0
	// Line 2021, Address: 0x400e24, Func Offset: 0x4
	// Line 2024, Address: 0x400e30, Func Offset: 0x10
	// Line 2029, Address: 0x400e40, Func Offset: 0x20
	// Line 2030, Address: 0x400e48, Func Offset: 0x28
	// Line 2024, Address: 0x400e6c, Func Offset: 0x4c
	// Line 2030, Address: 0x400e74, Func Offset: 0x54
	// Line 2032, Address: 0x400e7c, Func Offset: 0x5c
	// Line 2034, Address: 0x400ea8, Func Offset: 0x88
	// Func End, Address: 0x400eb0, Func Offset: 0x90
}

// create_decal__19@unnamed@xWad2_cpp@FRCQ26xDecal12emit_contextPC7xMat4x3PQ219@unnamed@xWad2_cpp@16owner_group_type
// Start address: 0x400eb0
decal_instance* create_decal(emit_context& ec, xMat4x3* driver, owner_group_type* owner_group)
{
	uint16 rwmodes[2][3];
	// Line 1924, Address: 0x400eb0, Func Offset: 0
	// Line 1925, Address: 0x400ec8, Func Offset: 0x18
	// Line 1926, Address: 0x400ed8, Func Offset: 0x28
	// Line 1927, Address: 0x400ee0, Func Offset: 0x30
	// Line 1930, Address: 0x400f3c, Func Offset: 0x8c
	// Line 1927, Address: 0x400f40, Func Offset: 0x90
	// Line 1930, Address: 0x400f44, Func Offset: 0x94
	// Line 1927, Address: 0x400f48, Func Offset: 0x98
	// Line 1929, Address: 0x400f6c, Func Offset: 0xbc
	// Line 1927, Address: 0x400f70, Func Offset: 0xc0
	// Line 1930, Address: 0x400f74, Func Offset: 0xc4
	// Line 1927, Address: 0x400f78, Func Offset: 0xc8
	// Line 1930, Address: 0x400f7c, Func Offset: 0xcc
	// Line 1927, Address: 0x400f84, Func Offset: 0xd4
	// Line 1930, Address: 0x400f88, Func Offset: 0xd8
	// Line 1927, Address: 0x400f8c, Func Offset: 0xdc
	// Line 1930, Address: 0x400fa0, Func Offset: 0xf0
	// Line 1927, Address: 0x400fa4, Func Offset: 0xf4
	// Line 1930, Address: 0x400fa8, Func Offset: 0xf8
	// Line 1928, Address: 0x400fac, Func Offset: 0xfc
	// Line 1929, Address: 0x400fb0, Func Offset: 0x100
	// Line 1930, Address: 0x400fb4, Func Offset: 0x104
	// Line 1932, Address: 0x400fc4, Func Offset: 0x114
	// Line 1931, Address: 0x400fc8, Func Offset: 0x118
	// Line 1932, Address: 0x400fcc, Func Offset: 0x11c
	// Line 1933, Address: 0x400fd0, Func Offset: 0x120
	// Line 1934, Address: 0x400fd8, Func Offset: 0x128
	// Line 1935, Address: 0x400fe0, Func Offset: 0x130
	// Line 1936, Address: 0x400fe4, Func Offset: 0x134
	// Line 1938, Address: 0x400fec, Func Offset: 0x13c
	// Line 1939, Address: 0x400ff0, Func Offset: 0x140
	// Line 1947, Address: 0x400ffc, Func Offset: 0x14c
	// Line 1949, Address: 0x401014, Func Offset: 0x164
	// Line 1951, Address: 0x401020, Func Offset: 0x170
	// Line 1952, Address: 0x401034, Func Offset: 0x184
	// Line 1953, Address: 0x401038, Func Offset: 0x188
	// Line 1952, Address: 0x40103c, Func Offset: 0x18c
	// Line 1953, Address: 0x401040, Func Offset: 0x190
	// Line 1955, Address: 0x40105c, Func Offset: 0x1ac
	// Line 1954, Address: 0x401060, Func Offset: 0x1b0
	// Line 1955, Address: 0x401064, Func Offset: 0x1b4
	// Line 1964, Address: 0x401070, Func Offset: 0x1c0
	// Line 1965, Address: 0x401078, Func Offset: 0x1c8
	// Line 1964, Address: 0x40107c, Func Offset: 0x1cc
	// Line 1965, Address: 0x401080, Func Offset: 0x1d0
	// Line 1967, Address: 0x401084, Func Offset: 0x1d4
	// Line 1964, Address: 0x401088, Func Offset: 0x1d8
	// Line 1965, Address: 0x401090, Func Offset: 0x1e0
	// Line 1964, Address: 0x401094, Func Offset: 0x1e4
	// Line 1965, Address: 0x401098, Func Offset: 0x1e8
	// Line 1964, Address: 0x40109c, Func Offset: 0x1ec
	// Line 1967, Address: 0x4010a0, Func Offset: 0x1f0
	// Line 1968, Address: 0x4010a8, Func Offset: 0x1f8
	// Line 1970, Address: 0x4010c0, Func Offset: 0x210
	// Line 1973, Address: 0x4010c8, Func Offset: 0x218
	// Line 1925, Address: 0x4010d8, Func Offset: 0x228
	// Line 1973, Address: 0x4010dc, Func Offset: 0x22c
	// Line 1925, Address: 0x4010e4, Func Offset: 0x234
	// Line 1973, Address: 0x4010e8, Func Offset: 0x238
	// Line 1925, Address: 0x4010ec, Func Offset: 0x23c
	// Line 1926, Address: 0x4010f8, Func Offset: 0x248
	// Line 1943, Address: 0x401100, Func Offset: 0x250
	// Line 1973, Address: 0x401104, Func Offset: 0x254
	// Line 1974, Address: 0x401114, Func Offset: 0x264
	// Func End, Address: 0x401128, Func Offset: 0x278
}

// refresh_decal__19@unnamed@xWad2_cpp@FRQ219@unnamed@xWad2_cpp@14decal_instance
// Start address: 0x401130
void refresh_decal(decal_instance& decal)
{
	int32 min_alpha;
	float32 ix;
	float32 iy;
	// Line 1860, Address: 0x401130, Func Offset: 0
	// Line 1861, Address: 0x401134, Func Offset: 0x4
	// Line 1860, Address: 0x401138, Func Offset: 0x8
	// Line 1861, Address: 0x401144, Func Offset: 0x14
	// Line 1873, Address: 0x401154, Func Offset: 0x24
	// Line 1875, Address: 0x40117c, Func Offset: 0x4c
	// Line 1877, Address: 0x401190, Func Offset: 0x60
	// Line 1879, Address: 0x4011a0, Func Offset: 0x70
	// Line 1881, Address: 0x4011b0, Func Offset: 0x80
	// Line 1882, Address: 0x40120c, Func Offset: 0xdc
	// Line 1881, Address: 0x401210, Func Offset: 0xe0
	// Line 1882, Address: 0x401214, Func Offset: 0xe4
	// Line 1883, Address: 0x40126c, Func Offset: 0x13c
	// Line 1882, Address: 0x401270, Func Offset: 0x140
	// Line 1883, Address: 0x401274, Func Offset: 0x144
	// Line 1884, Address: 0x4012cc, Func Offset: 0x19c
	// Line 1883, Address: 0x4012d0, Func Offset: 0x1a0
	// Line 1884, Address: 0x4012d4, Func Offset: 0x1a4
	// Line 1885, Address: 0x401330, Func Offset: 0x200
	// Line 1887, Address: 0x40133c, Func Offset: 0x20c
	// Line 1888, Address: 0x401344, Func Offset: 0x214
	// Line 1890, Address: 0x401354, Func Offset: 0x224
	// Line 1893, Address: 0x40135c, Func Offset: 0x22c
	// Line 1894, Address: 0x4013b8, Func Offset: 0x288
	// Line 1895, Address: 0x4013c4, Func Offset: 0x294
	// Line 1898, Address: 0x4013d8, Func Offset: 0x2a8
	// Line 1899, Address: 0x401430, Func Offset: 0x300
	// Line 1898, Address: 0x401434, Func Offset: 0x304
	// Line 1899, Address: 0x401438, Func Offset: 0x308
	// Line 1900, Address: 0x401490, Func Offset: 0x360
	// Line 1899, Address: 0x401494, Func Offset: 0x364
	// Line 1900, Address: 0x401498, Func Offset: 0x368
	// Line 1905, Address: 0x4014f4, Func Offset: 0x3c4
	// Line 1907, Address: 0x401508, Func Offset: 0x3d8
	// Line 1908, Address: 0x40153c, Func Offset: 0x40c
	// Line 1886, Address: 0x401554, Func Offset: 0x424
	// Line 1908, Address: 0x401564, Func Offset: 0x434
	// Line 1907, Address: 0x401568, Func Offset: 0x438
	// Line 1908, Address: 0x40157c, Func Offset: 0x44c
	// Line 1907, Address: 0x401584, Func Offset: 0x454
	// Line 1908, Address: 0x401598, Func Offset: 0x468
	// Line 1917, Address: 0x4015a0, Func Offset: 0x470
	// Line 1913, Address: 0x4015a4, Func Offset: 0x474
	// Line 1917, Address: 0x4015a8, Func Offset: 0x478
	// Line 1913, Address: 0x4015b0, Func Offset: 0x480
	// Line 1915, Address: 0x4015b8, Func Offset: 0x488
	// Line 1917, Address: 0x4015bc, Func Offset: 0x48c
	// Line 1915, Address: 0x4015c0, Func Offset: 0x490
	// Line 1916, Address: 0x4015c4, Func Offset: 0x494
	// Line 1917, Address: 0x4015c8, Func Offset: 0x498
	// Line 1916, Address: 0x4015d0, Func Offset: 0x4a0
	// Line 1917, Address: 0x4015d4, Func Offset: 0x4a4
	// Line 1920, Address: 0x4015e0, Func Offset: 0x4b0
	// Func End, Address: 0x4015f0, Func Offset: 0x4c0
}

// add_to_owner_group__19@unnamed@xWad2_cpp@FRQ219@unnamed@xWad2_cpp@14decal_instancePQ219@unnamed@xWad2_cpp@16owner_group_type
// Start address: 0x4015f0
void add_to_owner_group(decal_instance& decal, owner_group_type* owner_group)
{
	// Line 1730, Address: 0x4015f0, Func Offset: 0
	// Line 1731, Address: 0x401600, Func Offset: 0x10
	// Line 1742, Address: 0x401608, Func Offset: 0x18
	// Line 1744, Address: 0x401614, Func Offset: 0x24
	// Line 1746, Address: 0x401628, Func Offset: 0x38
	// Line 1755, Address: 0x401630, Func Offset: 0x40
	// Line 1756, Address: 0x401634, Func Offset: 0x44
	// Line 1758, Address: 0x40163c, Func Offset: 0x4c
	// Line 1759, Address: 0x401640, Func Offset: 0x50
	// Line 1760, Address: 0x401644, Func Offset: 0x54
	// Line 1763, Address: 0x401654, Func Offset: 0x64
	// Line 1764, Address: 0x40166c, Func Offset: 0x7c
	// Line 1765, Address: 0x4016a4, Func Offset: 0xb4
	// Line 1738, Address: 0x4016e0, Func Offset: 0xf0
	// Line 1765, Address: 0x4016e4, Func Offset: 0xf4
	// Line 1752, Address: 0x401704, Func Offset: 0x114
	// Line 1765, Address: 0x40170c, Func Offset: 0x11c
	// Func End, Address: 0x401720, Func Offset: 0x130
}

// remove_from_owner_group__19@unnamed@xWad2_cpp@FRQ219@unnamed@xWad2_cpp@14decal_instance
// Start address: 0x401720
void remove_from_owner_group(decal_instance& decal)
{
	owner_group_type* owner_group;
	// Line 1684, Address: 0x401720, Func Offset: 0
	// Line 1685, Address: 0x401728, Func Offset: 0x8
	// Line 1686, Address: 0x40172c, Func Offset: 0xc
	// Line 1688, Address: 0x401734, Func Offset: 0x14
	// Line 1705, Address: 0x401738, Func Offset: 0x18
	// Line 1708, Address: 0x401748, Func Offset: 0x28
	// Line 1711, Address: 0x401750, Func Offset: 0x30
	// Line 1712, Address: 0x40175c, Func Offset: 0x3c
	// Line 1715, Address: 0x401764, Func Offset: 0x44
	// Line 1717, Address: 0x40176c, Func Offset: 0x4c
	// Line 1719, Address: 0x401778, Func Offset: 0x58
	// Line 1709, Address: 0x401784, Func Offset: 0x64
	// Line 1719, Address: 0x40178c, Func Offset: 0x6c
	// Line 1713, Address: 0x401790, Func Offset: 0x70
	// Line 1719, Address: 0x401798, Func Offset: 0x78
	// Line 1718, Address: 0x40179c, Func Offset: 0x7c
	// Line 1719, Address: 0x4017a0, Func Offset: 0x80
	// Func End, Address: 0x4017bc, Func Offset: 0x9c
}

// obb_to_capsule__19@unnamed@xWad2_cpp@FR6xLine3RfRC4xBoxRC7xMat4x3
// Start address: 0x4017c0
void obb_to_capsule(xLine3& line, float32& radius, xBox& box, xMat4x3& mat)
{
	float32 dx;
	float32 dy;
	float32 dz;
	xVec3 diag;
	float32 rd1;
	// Line 1614, Address: 0x4017c0, Func Offset: 0
	// Line 1620, Address: 0x4017d0, Func Offset: 0x10
	// Line 1617, Address: 0x4017d4, Func Offset: 0x14
	// Line 1616, Address: 0x4017dc, Func Offset: 0x1c
	// Line 1617, Address: 0x4017e8, Func Offset: 0x28
	// Line 1620, Address: 0x4017f0, Func Offset: 0x30
	// Line 1616, Address: 0x4017f8, Func Offset: 0x38
	// Line 1620, Address: 0x4017fc, Func Offset: 0x3c
	// Line 1621, Address: 0x401800, Func Offset: 0x40
	// Line 1622, Address: 0x40180c, Func Offset: 0x4c
	// Line 1623, Address: 0x401810, Func Offset: 0x50
	// Line 1624, Address: 0x401860, Func Offset: 0xa0
	// Line 1632, Address: 0x401864, Func Offset: 0xa4
	// Line 1624, Address: 0x401868, Func Offset: 0xa8
	// Line 1632, Address: 0x40186c, Func Offset: 0xac
	// Line 1625, Address: 0x401870, Func Offset: 0xb0
	// Line 1626, Address: 0x401874, Func Offset: 0xb4
	// Line 1624, Address: 0x401878, Func Offset: 0xb8
	// Line 1625, Address: 0x401884, Func Offset: 0xc4
	// Line 1626, Address: 0x401894, Func Offset: 0xd4
	// Line 1632, Address: 0x4018a4, Func Offset: 0xe4
	// Line 1633, Address: 0x4018f4, Func Offset: 0x134
	// Line 1635, Address: 0x40193c, Func Offset: 0x17c
	// Line 1636, Address: 0x40198c, Func Offset: 0x1cc
	// Line 1637, Address: 0x4019ac, Func Offset: 0x1ec
	// Line 1636, Address: 0x4019b0, Func Offset: 0x1f0
	// Line 1637, Address: 0x4019b4, Func Offset: 0x1f4
	// Line 1638, Address: 0x4019c4, Func Offset: 0x204
	// Line 1636, Address: 0x4019c8, Func Offset: 0x208
	// Line 1638, Address: 0x4019d0, Func Offset: 0x210
	// Line 1639, Address: 0x401a04, Func Offset: 0x244
	// Func End, Address: 0x401a0c, Func Offset: 0x24c
}

// complete_decal_atomic__19@unnamed@xWad2_cpp@FP8RpAtomicPC5xVec2P8RwSphere
// Start address: 0x401a10
void complete_decal_atomic(RpAtomic* atomic, xVec2* uv, RwSphere* o)
{
	RpGeometry* geom;
	RpMorphTarget* mt;
	RwSphere bound;
	// Line 1554, Address: 0x401a10, Func Offset: 0
	// Line 1555, Address: 0x401a30, Func Offset: 0x20
	// Line 1563, Address: 0x401a34, Func Offset: 0x24
	// Line 1557, Address: 0x401a3c, Func Offset: 0x2c
	// Line 1563, Address: 0x401a40, Func Offset: 0x30
	// Line 1567, Address: 0x401a48, Func Offset: 0x38
	// Line 1568, Address: 0x401a50, Func Offset: 0x40
	// Line 1574, Address: 0x401a70, Func Offset: 0x60
	// Line 1579, Address: 0x401a74, Func Offset: 0x64
	// Line 1574, Address: 0x401a78, Func Offset: 0x68
	// Line 1579, Address: 0x401a90, Func Offset: 0x80
	// Line 1586, Address: 0x401aa0, Func Offset: 0x90
	// Line 1587, Address: 0x401aa8, Func Offset: 0x98
	// Line 1580, Address: 0x401ae0, Func Offset: 0xd0
	// Line 1587, Address: 0x401af0, Func Offset: 0xe0
	// Func End, Address: 0x401b14, Func Offset: 0x104
}

// create_decal_atomic__19@unnamed@xWad2_cpp@FRCQ219@unnamed@xWad2_cpp@14decal_instanceii
// Start address: 0x401b20
RpAtomic* create_decal_atomic(decal_instance& decal, int32 vert_size, int32 tri_size)
{
	uint32 geom_flags;
	RpMaterial* material;
	RpGeometry* geom;
	RpAtomic* atomic;
	RwFrame* frame;
	RpTriangle* tri;
	RpTriangle* end_tri;
	xColor_tag* color;
	xColor_tag* end_color;
	RwMatrixTag uvmat;
	// Line 1168, Address: 0x401b20, Func Offset: 0
	// Line 1170, Address: 0x401b24, Func Offset: 0x4
	// Line 1168, Address: 0x401b28, Func Offset: 0x8
	// Line 1171, Address: 0x401b48, Func Offset: 0x28
	// Line 1168, Address: 0x401b4c, Func Offset: 0x2c
	// Line 1170, Address: 0x401b50, Func Offset: 0x30
	// Line 1168, Address: 0x401b54, Func Offset: 0x34
	// Line 1171, Address: 0x401b5c, Func Offset: 0x3c
	// Line 1172, Address: 0x401b64, Func Offset: 0x44
	// Line 1174, Address: 0x401b6c, Func Offset: 0x4c
	// Line 1176, Address: 0x401b70, Func Offset: 0x50
	// Line 1177, Address: 0x401b7c, Func Offset: 0x5c
	// Line 1180, Address: 0x401b80, Func Offset: 0x60
	// Line 1181, Address: 0x401b88, Func Offset: 0x68
	// Line 1180, Address: 0x401b8c, Func Offset: 0x6c
	// Line 1181, Address: 0x401b90, Func Offset: 0x70
	// Line 1182, Address: 0x401b9c, Func Offset: 0x7c
	// Line 1183, Address: 0x401ba4, Func Offset: 0x84
	// Line 1184, Address: 0x401bac, Func Offset: 0x8c
	// Line 1194, Address: 0x401bcc, Func Offset: 0xac
	// Line 1195, Address: 0x401bd8, Func Offset: 0xb8
	// Line 1196, Address: 0x401be4, Func Offset: 0xc4
	// Line 1198, Address: 0x401bf4, Func Offset: 0xd4
	// Line 1202, Address: 0x401c04, Func Offset: 0xe4
	// Line 1204, Address: 0x401c10, Func Offset: 0xf0
	// Line 1205, Address: 0x401c18, Func Offset: 0xf8
	// Line 1190, Address: 0x401c84, Func Offset: 0x164
	// Line 1205, Address: 0x401c90, Func Offset: 0x170
	// Line 1209, Address: 0x401cb8, Func Offset: 0x198
	// Line 1211, Address: 0x401cc4, Func Offset: 0x1a4
	// Line 1218, Address: 0x401cd0, Func Offset: 0x1b0
	// Line 1220, Address: 0x401cdc, Func Offset: 0x1bc
	// Line 1221, Address: 0x401ce4, Func Offset: 0x1c4
	// Line 1213, Address: 0x401d1c, Func Offset: 0x1fc
	// Line 1221, Address: 0x401d20, Func Offset: 0x200
	// Line 1225, Address: 0x401d28, Func Offset: 0x208
	// Line 1226, Address: 0x401de8, Func Offset: 0x2c8
	// Line 1228, Address: 0x401df0, Func Offset: 0x2d0
	// Line 1240, Address: 0x401e00, Func Offset: 0x2e0
	// Line 1241, Address: 0x401e08, Func Offset: 0x2e8
	// Line 1243, Address: 0x401e10, Func Offset: 0x2f0
	// Line 1231, Address: 0x401e20, Func Offset: 0x300
	// Line 1243, Address: 0x401e24, Func Offset: 0x304
	// Line 1234, Address: 0x401e30, Func Offset: 0x310
	// Line 1243, Address: 0x401e34, Func Offset: 0x314
	// Line 1234, Address: 0x401e40, Func Offset: 0x320
	// Line 1243, Address: 0x401e44, Func Offset: 0x324
	// Line 1244, Address: 0x401e74, Func Offset: 0x354
	// Func End, Address: 0x401ea0, Func Offset: 0x380
}

// clip_decal_indexed__19@unnamed@xWad2_cpp@FRQ219@unnamed@xWad2_cpp@25clip_decal_indexed_params
// Start address: 0x401ea0
void clip_decal_indexed(clip_decal_indexed_params& arg)
{
	xVec3* iv;
	RpTriangle* it;
	RpTriangle* end_it;
	RpTriangle* ot;
	RpTriangle* end_ot;
	combo_vertex* ov;
	combo_vertex* end_ov;
	xVec2* ouv;
	clip_vertex* cv;
	uint16* used;
	float32 su;
	float32 sv;
	float32 du;
	float32 dv;
	float32 ux;
	float32 uy;
	int32 vi0;
	int32 vi1;
	int32 vi2;
	int32 out0;
	int32 out1;
	int32 out2;
	int32 out_union;
	int32 i;
	int32 vi;
	uint16& stored;
	xVec3& vxy;
	int32 cv_offset;
	int32 vsize;
	float32 _c;
	clip_vertex* s0;
	clip_vertex* s1;
	clip_vertex* ends1;
	clip_vertex* d;
	float32 s;
	float32 s;
	float32 _c;
	clip_vertex* s0;
	clip_vertex* s1;
	clip_vertex* ends1;
	clip_vertex* d;
	float32 s;
	float32 s;
	float32 _c;
	clip_vertex* s0;
	clip_vertex* s1;
	clip_vertex* ends1;
	clip_vertex* d;
	float32 s;
	float32 s;
	float32 _c;
	clip_vertex* s0;
	clip_vertex* s1;
	clip_vertex* ends1;
	clip_vertex* d;
	float32 s;
	float32 s;
	float32 _c;
	clip_vertex* s0;
	clip_vertex* s1;
	clip_vertex* ends1;
	clip_vertex* d;
	float32 s;
	float32 s;
	float32 _c;
	clip_vertex* s0;
	clip_vertex* s1;
	clip_vertex* ends1;
	clip_vertex* d;
	float32 s;
	float32 s;
	clip_vertex* rcv;
	clip_vertex* end_rcv;
	int32* poly_vert_index;
	int32* pvi;
	int32 vi;
	uint16& stored;
	uint16 fan_center;
	int32* end_pvi;
	// Line 881, Address: 0x401ea0, Func Offset: 0
	// Line 890, Address: 0x401ea4, Func Offset: 0x4
	// Line 881, Address: 0x401ea8, Func Offset: 0x8
	// Line 883, Address: 0x401ee0, Func Offset: 0x40
	// Line 884, Address: 0x401ee8, Func Offset: 0x48
	// Line 885, Address: 0x401ef0, Func Offset: 0x50
	// Line 883, Address: 0x401ef8, Func Offset: 0x58
	// Line 882, Address: 0x401efc, Func Offset: 0x5c
	// Line 883, Address: 0x401f00, Func Offset: 0x60
	// Line 886, Address: 0x401f04, Func Offset: 0x64
	// Line 883, Address: 0x401f08, Func Offset: 0x68
	// Line 884, Address: 0x401f0c, Func Offset: 0x6c
	// Line 887, Address: 0x401f10, Func Offset: 0x70
	// Line 884, Address: 0x401f14, Func Offset: 0x74
	// Line 888, Address: 0x401f18, Func Offset: 0x78
	// Line 890, Address: 0x401f1c, Func Offset: 0x7c
	// Line 884, Address: 0x401f20, Func Offset: 0x80
	// Line 885, Address: 0x401f28, Func Offset: 0x88
	// Line 890, Address: 0x401f38, Func Offset: 0x98
	// Line 893, Address: 0x401f44, Func Offset: 0xa4
	// Line 894, Address: 0x401f48, Func Offset: 0xa8
	// Line 893, Address: 0x401f50, Func Offset: 0xb0
	// Line 895, Address: 0x401f54, Func Offset: 0xb4
	// Line 896, Address: 0x401f5c, Func Offset: 0xbc
	// Line 894, Address: 0x401f60, Func Offset: 0xc0
	// Line 895, Address: 0x401f68, Func Offset: 0xc8
	// Line 896, Address: 0x401f70, Func Offset: 0xd0
	// Line 895, Address: 0x401f74, Func Offset: 0xd4
	// Line 898, Address: 0x401f7c, Func Offset: 0xdc
	// Line 986, Address: 0x401f88, Func Offset: 0xe8
	// Line 1073, Address: 0x401f8c, Func Offset: 0xec
	// Line 1024, Address: 0x401f90, Func Offset: 0xf0
	// Line 1081, Address: 0x401f94, Func Offset: 0xf4
	// Line 1024, Address: 0x401f98, Func Offset: 0xf8
	// Line 1081, Address: 0x401f9c, Func Offset: 0xfc
	// Line 992, Address: 0x401fa0, Func Offset: 0x100
	// Line 1019, Address: 0x401fa4, Func Offset: 0x104
	// Line 1073, Address: 0x401fa8, Func Offset: 0x108
	// Line 1019, Address: 0x401fac, Func Offset: 0x10c
	// Line 906, Address: 0x401fb0, Func Offset: 0x110
	// Line 907, Address: 0x401fcc, Func Offset: 0x12c
	// Line 912, Address: 0x401ff0, Func Offset: 0x150
	// Line 947, Address: 0x402038, Func Offset: 0x198
	// Line 912, Address: 0x40203c, Func Offset: 0x19c
	// Line 947, Address: 0x402040, Func Offset: 0x1a0
	// Line 912, Address: 0x402048, Func Offset: 0x1a8
	// Line 947, Address: 0x402054, Func Offset: 0x1b4
	// Line 960, Address: 0x402080, Func Offset: 0x1e0
	// Line 961, Address: 0x402088, Func Offset: 0x1e8
	// Line 975, Address: 0x402090, Func Offset: 0x1f0
	// Line 978, Address: 0x40209c, Func Offset: 0x1fc
	// Line 979, Address: 0x4020a0, Func Offset: 0x200
	// Line 981, Address: 0x4020ac, Func Offset: 0x20c
	// Line 982, Address: 0x4020b8, Func Offset: 0x218
	// Line 996, Address: 0x4020bc, Func Offset: 0x21c
	// Line 982, Address: 0x4020c8, Func Offset: 0x228
	// Line 996, Address: 0x4020cc, Func Offset: 0x22c
	// Line 1002, Address: 0x4020d4, Func Offset: 0x234
	// Line 999, Address: 0x4020d8, Func Offset: 0x238
	// Line 1000, Address: 0x4020dc, Func Offset: 0x23c
	// Line 1002, Address: 0x4020e0, Func Offset: 0x240
	// Line 1141, Address: 0x4020fc, Func Offset: 0x25c
	// Line 1143, Address: 0x40210c, Func Offset: 0x26c
	// Line 1144, Address: 0x402128, Func Offset: 0x288
	// Line 1145, Address: 0x402140, Func Offset: 0x2a0
	// Line 987, Address: 0x402164, Func Offset: 0x2c4
	// Line 1145, Address: 0x402168, Func Offset: 0x2c8
	// Line 992, Address: 0x40216c, Func Offset: 0x2cc
	// Line 1145, Address: 0x402170, Func Offset: 0x2d0
	// Line 991, Address: 0x402178, Func Offset: 0x2d8
	// Line 1145, Address: 0x40217c, Func Offset: 0x2dc
	// Line 991, Address: 0x402180, Func Offset: 0x2e0
	// Line 1145, Address: 0x402184, Func Offset: 0x2e4
	// Line 992, Address: 0x40218c, Func Offset: 0x2ec
	// Line 1145, Address: 0x402194, Func Offset: 0x2f4
	// Line 993, Address: 0x40219c, Func Offset: 0x2fc
	// Line 1145, Address: 0x4021a8, Func Offset: 0x308
	// Line 1004, Address: 0x4021b4, Func Offset: 0x314
	// Line 1145, Address: 0x4021b8, Func Offset: 0x318
	// Line 1024, Address: 0x4021c0, Func Offset: 0x320
	// Line 1145, Address: 0x4021c4, Func Offset: 0x324
	// Line 1007, Address: 0x4021c8, Func Offset: 0x328
	// Line 1145, Address: 0x4021cc, Func Offset: 0x32c
	// Line 1010, Address: 0x4021d0, Func Offset: 0x330
	// Line 1145, Address: 0x4021d4, Func Offset: 0x334
	// Line 1024, Address: 0x402248, Func Offset: 0x3a8
	// Line 1145, Address: 0x402258, Func Offset: 0x3b8
	// Line 1024, Address: 0x402268, Func Offset: 0x3c8
	// Line 1145, Address: 0x40226c, Func Offset: 0x3cc
	// Line 1024, Address: 0x402278, Func Offset: 0x3d8
	// Line 1145, Address: 0x40227c, Func Offset: 0x3dc
	// Line 1024, Address: 0x402284, Func Offset: 0x3e4
	// Line 1145, Address: 0x402288, Func Offset: 0x3e8
	// Line 1024, Address: 0x4022c0, Func Offset: 0x420
	// Line 1145, Address: 0x4022c8, Func Offset: 0x428
	// Line 1024, Address: 0x4022cc, Func Offset: 0x42c
	// Line 1145, Address: 0x4022d0, Func Offset: 0x430
	// Line 1024, Address: 0x4022d8, Func Offset: 0x438
	// Line 1145, Address: 0x4022e4, Func Offset: 0x444
	// Line 1024, Address: 0x4022f0, Func Offset: 0x450
	// Line 1145, Address: 0x4022fc, Func Offset: 0x45c
	// Line 1024, Address: 0x402308, Func Offset: 0x468
	// Line 1145, Address: 0x402314, Func Offset: 0x474
	// Line 1024, Address: 0x402344, Func Offset: 0x4a4
	// Line 1145, Address: 0x40234c, Func Offset: 0x4ac
	// Line 1024, Address: 0x40235c, Func Offset: 0x4bc
	// Line 1145, Address: 0x402364, Func Offset: 0x4c4
	// Line 1024, Address: 0x402380, Func Offset: 0x4e0
	// Line 1025, Address: 0x402384, Func Offset: 0x4e4
	// Line 1145, Address: 0x402388, Func Offset: 0x4e8
	// Line 1025, Address: 0x402398, Func Offset: 0x4f8
	// Line 1145, Address: 0x40239c, Func Offset: 0x4fc
	// Line 1025, Address: 0x4023a0, Func Offset: 0x500
	// Line 1145, Address: 0x4023a8, Func Offset: 0x508
	// Line 1025, Address: 0x4023c8, Func Offset: 0x528
	// Line 1145, Address: 0x4023cc, Func Offset: 0x52c
	// Line 1025, Address: 0x4023d8, Func Offset: 0x538
	// Line 1145, Address: 0x4023dc, Func Offset: 0x53c
	// Line 1025, Address: 0x4023e4, Func Offset: 0x544
	// Line 1145, Address: 0x4023e8, Func Offset: 0x548
	// Line 1025, Address: 0x402420, Func Offset: 0x580
	// Line 1145, Address: 0x402428, Func Offset: 0x588
	// Line 1025, Address: 0x40242c, Func Offset: 0x58c
	// Line 1145, Address: 0x402430, Func Offset: 0x590
	// Line 1025, Address: 0x402438, Func Offset: 0x598
	// Line 1145, Address: 0x402444, Func Offset: 0x5a4
	// Line 1025, Address: 0x402450, Func Offset: 0x5b0
	// Line 1145, Address: 0x40245c, Func Offset: 0x5bc
	// Line 1025, Address: 0x402468, Func Offset: 0x5c8
	// Line 1145, Address: 0x402474, Func Offset: 0x5d4
	// Line 1025, Address: 0x4024a4, Func Offset: 0x604
	// Line 1145, Address: 0x4024ac, Func Offset: 0x60c
	// Line 1025, Address: 0x4024bc, Func Offset: 0x61c
	// Line 1145, Address: 0x4024c4, Func Offset: 0x624
	// Line 1025, Address: 0x4024e0, Func Offset: 0x640
	// Line 1026, Address: 0x4024e4, Func Offset: 0x644
	// Line 1145, Address: 0x4024e8, Func Offset: 0x648
	// Line 1026, Address: 0x4024f8, Func Offset: 0x658
	// Line 1145, Address: 0x4024fc, Func Offset: 0x65c
	// Line 1026, Address: 0x402500, Func Offset: 0x660
	// Line 1145, Address: 0x402508, Func Offset: 0x668
	// Line 1026, Address: 0x402528, Func Offset: 0x688
	// Line 1145, Address: 0x40252c, Func Offset: 0x68c
	// Line 1026, Address: 0x402538, Func Offset: 0x698
	// Line 1145, Address: 0x40253c, Func Offset: 0x69c
	// Line 1026, Address: 0x402544, Func Offset: 0x6a4
	// Line 1145, Address: 0x402548, Func Offset: 0x6a8
	// Line 1026, Address: 0x402580, Func Offset: 0x6e0
	// Line 1145, Address: 0x402588, Func Offset: 0x6e8
	// Line 1026, Address: 0x40258c, Func Offset: 0x6ec
	// Line 1145, Address: 0x402590, Func Offset: 0x6f0
	// Line 1026, Address: 0x402598, Func Offset: 0x6f8
	// Line 1145, Address: 0x4025a4, Func Offset: 0x704
	// Line 1026, Address: 0x4025b0, Func Offset: 0x710
	// Line 1145, Address: 0x4025bc, Func Offset: 0x71c
	// Line 1026, Address: 0x4025c8, Func Offset: 0x728
	// Line 1145, Address: 0x4025d4, Func Offset: 0x734
	// Line 1026, Address: 0x402604, Func Offset: 0x764
	// Line 1145, Address: 0x40260c, Func Offset: 0x76c
	// Line 1026, Address: 0x40261c, Func Offset: 0x77c
	// Line 1145, Address: 0x402624, Func Offset: 0x784
	// Line 1026, Address: 0x402640, Func Offset: 0x7a0
	// Line 1027, Address: 0x402644, Func Offset: 0x7a4
	// Line 1145, Address: 0x402648, Func Offset: 0x7a8
	// Line 1027, Address: 0x402658, Func Offset: 0x7b8
	// Line 1145, Address: 0x40265c, Func Offset: 0x7bc
	// Line 1027, Address: 0x402660, Func Offset: 0x7c0
	// Line 1145, Address: 0x402668, Func Offset: 0x7c8
	// Line 1027, Address: 0x402688, Func Offset: 0x7e8
	// Line 1145, Address: 0x40268c, Func Offset: 0x7ec
	// Line 1027, Address: 0x402698, Func Offset: 0x7f8
	// Line 1145, Address: 0x40269c, Func Offset: 0x7fc
	// Line 1027, Address: 0x4026a4, Func Offset: 0x804
	// Line 1145, Address: 0x4026a8, Func Offset: 0x808
	// Line 1027, Address: 0x4026e0, Func Offset: 0x840
	// Line 1145, Address: 0x4026e8, Func Offset: 0x848
	// Line 1027, Address: 0x4026ec, Func Offset: 0x84c
	// Line 1145, Address: 0x4026f0, Func Offset: 0x850
	// Line 1027, Address: 0x4026f8, Func Offset: 0x858
	// Line 1145, Address: 0x402704, Func Offset: 0x864
	// Line 1027, Address: 0x402710, Func Offset: 0x870
	// Line 1145, Address: 0x40271c, Func Offset: 0x87c
	// Line 1027, Address: 0x402728, Func Offset: 0x888
	// Line 1145, Address: 0x402734, Func Offset: 0x894
	// Line 1027, Address: 0x402764, Func Offset: 0x8c4
	// Line 1145, Address: 0x40276c, Func Offset: 0x8cc
	// Line 1027, Address: 0x40277c, Func Offset: 0x8dc
	// Line 1145, Address: 0x402784, Func Offset: 0x8e4
	// Line 1027, Address: 0x4027a0, Func Offset: 0x900
	// Line 1028, Address: 0x4027a4, Func Offset: 0x904
	// Line 1145, Address: 0x4027a8, Func Offset: 0x908
	// Line 1028, Address: 0x4027b8, Func Offset: 0x918
	// Line 1145, Address: 0x4027bc, Func Offset: 0x91c
	// Line 1028, Address: 0x4027c0, Func Offset: 0x920
	// Line 1145, Address: 0x4027c8, Func Offset: 0x928
	// Line 1028, Address: 0x4027e8, Func Offset: 0x948
	// Line 1145, Address: 0x4027ec, Func Offset: 0x94c
	// Line 1028, Address: 0x4027f8, Func Offset: 0x958
	// Line 1145, Address: 0x4027fc, Func Offset: 0x95c
	// Line 1028, Address: 0x402804, Func Offset: 0x964
	// Line 1145, Address: 0x402808, Func Offset: 0x968
	// Line 1028, Address: 0x402840, Func Offset: 0x9a0
	// Line 1145, Address: 0x402848, Func Offset: 0x9a8
	// Line 1028, Address: 0x40284c, Func Offset: 0x9ac
	// Line 1145, Address: 0x402850, Func Offset: 0x9b0
	// Line 1028, Address: 0x402858, Func Offset: 0x9b8
	// Line 1145, Address: 0x402864, Func Offset: 0x9c4
	// Line 1028, Address: 0x402870, Func Offset: 0x9d0
	// Line 1145, Address: 0x40287c, Func Offset: 0x9dc
	// Line 1028, Address: 0x402888, Func Offset: 0x9e8
	// Line 1145, Address: 0x402894, Func Offset: 0x9f4
	// Line 1028, Address: 0x4028c4, Func Offset: 0xa24
	// Line 1145, Address: 0x4028cc, Func Offset: 0xa2c
	// Line 1028, Address: 0x4028dc, Func Offset: 0xa3c
	// Line 1145, Address: 0x4028e4, Func Offset: 0xa44
	// Line 1028, Address: 0x402900, Func Offset: 0xa60
	// Line 1029, Address: 0x402904, Func Offset: 0xa64
	// Line 1145, Address: 0x402908, Func Offset: 0xa68
	// Line 1029, Address: 0x402918, Func Offset: 0xa78
	// Line 1145, Address: 0x40291c, Func Offset: 0xa7c
	// Line 1029, Address: 0x402920, Func Offset: 0xa80
	// Line 1145, Address: 0x402928, Func Offset: 0xa88
	// Line 1029, Address: 0x402948, Func Offset: 0xaa8
	// Line 1145, Address: 0x40294c, Func Offset: 0xaac
	// Line 1029, Address: 0x402958, Func Offset: 0xab8
	// Line 1145, Address: 0x40295c, Func Offset: 0xabc
	// Line 1029, Address: 0x402964, Func Offset: 0xac4
	// Line 1145, Address: 0x402968, Func Offset: 0xac8
	// Line 1029, Address: 0x4029a0, Func Offset: 0xb00
	// Line 1145, Address: 0x4029a8, Func Offset: 0xb08
	// Line 1029, Address: 0x4029ac, Func Offset: 0xb0c
	// Line 1145, Address: 0x4029b0, Func Offset: 0xb10
	// Line 1029, Address: 0x4029b8, Func Offset: 0xb18
	// Line 1145, Address: 0x4029c4, Func Offset: 0xb24
	// Line 1029, Address: 0x4029d0, Func Offset: 0xb30
	// Line 1145, Address: 0x4029dc, Func Offset: 0xb3c
	// Line 1029, Address: 0x4029e8, Func Offset: 0xb48
	// Line 1145, Address: 0x4029f4, Func Offset: 0xb54
	// Line 1029, Address: 0x402a24, Func Offset: 0xb84
	// Line 1145, Address: 0x402a2c, Func Offset: 0xb8c
	// Line 1029, Address: 0x402a3c, Func Offset: 0xb9c
	// Line 1145, Address: 0x402a44, Func Offset: 0xba4
	// Line 1029, Address: 0x402a60, Func Offset: 0xbc0
	// Line 1036, Address: 0x402a64, Func Offset: 0xbc4
	// Line 1037, Address: 0x402a68, Func Offset: 0xbc8
	// Line 1145, Address: 0x402a6c, Func Offset: 0xbcc
	// Line 1037, Address: 0x402a70, Func Offset: 0xbd0
	// Line 1145, Address: 0x402a74, Func Offset: 0xbd4
	// Line 1036, Address: 0x402a78, Func Offset: 0xbd8
	// Line 1145, Address: 0x402a7c, Func Offset: 0xbdc
	// Line 1049, Address: 0x402ad0, Func Offset: 0xc30
	// Line 1145, Address: 0x402ad4, Func Offset: 0xc34
	// Line 1050, Address: 0x402adc, Func Offset: 0xc3c
	// Line 1145, Address: 0x402ae0, Func Offset: 0xc40
	// Line 1055, Address: 0x402af4, Func Offset: 0xc54
	// Line 1145, Address: 0x402afc, Func Offset: 0xc5c
	// Line 1070, Address: 0x402b0c, Func Offset: 0xc6c
	// Line 1145, Address: 0x402b10, Func Offset: 0xc70
	// Line 1071, Address: 0x402b20, Func Offset: 0xc80
	// Line 1145, Address: 0x402b24, Func Offset: 0xc84
	// Line 1073, Address: 0x402b4c, Func Offset: 0xcac
	// Line 1145, Address: 0x402b50, Func Offset: 0xcb0
	// Line 1073, Address: 0x402b54, Func Offset: 0xcb4
	// Line 1145, Address: 0x402b58, Func Offset: 0xcb8
	// Line 1073, Address: 0x402b5c, Func Offset: 0xcbc
	// Line 1145, Address: 0x402b64, Func Offset: 0xcc4
	// Line 1073, Address: 0x402b84, Func Offset: 0xce4
	// Line 1145, Address: 0x402bb0, Func Offset: 0xd10
	// Line 1073, Address: 0x402bb4, Func Offset: 0xd14
	// Line 1145, Address: 0x402bb8, Func Offset: 0xd18
	// Line 1073, Address: 0x402bc0, Func Offset: 0xd20
	// Line 1074, Address: 0x402bd4, Func Offset: 0xd34
	// Line 1145, Address: 0x402bdc, Func Offset: 0xd3c
	// Line 1081, Address: 0x402c10, Func Offset: 0xd70
	// Line 1145, Address: 0x402c14, Func Offset: 0xd74
	// Line 1081, Address: 0x402c18, Func Offset: 0xd78
	// Line 1145, Address: 0x402c20, Func Offset: 0xd80
	// Line 1081, Address: 0x402c28, Func Offset: 0xd88
	// Line 1145, Address: 0x402c2c, Func Offset: 0xd8c
	// Line 1081, Address: 0x402c30, Func Offset: 0xd90
	// Line 1145, Address: 0x402c34, Func Offset: 0xd94
	// Line 1081, Address: 0x402c38, Func Offset: 0xd98
	// Line 1145, Address: 0x402c40, Func Offset: 0xda0
	// Line 1081, Address: 0x402c48, Func Offset: 0xda8
	// Line 1145, Address: 0x402c4c, Func Offset: 0xdac
	// Line 1081, Address: 0x402c50, Func Offset: 0xdb0
	// Line 1145, Address: 0x402c54, Func Offset: 0xdb4
	// Line 1081, Address: 0x402c58, Func Offset: 0xdb8
	// Line 1145, Address: 0x402c5c, Func Offset: 0xdbc
	// Line 1081, Address: 0x402c60, Func Offset: 0xdc0
	// Line 1145, Address: 0x402c64, Func Offset: 0xdc4
	// Line 1081, Address: 0x402c68, Func Offset: 0xdc8
	// Line 1145, Address: 0x402ca4, Func Offset: 0xe04
	// Line 1081, Address: 0x402ca8, Func Offset: 0xe08
	// Line 1145, Address: 0x402cac, Func Offset: 0xe0c
	// Line 1081, Address: 0x402cb4, Func Offset: 0xe14
	// Line 1145, Address: 0x402cb8, Func Offset: 0xe18
	// Line 1081, Address: 0x402cc4, Func Offset: 0xe24
	// Line 1145, Address: 0x402cc8, Func Offset: 0xe28
	// Line 1081, Address: 0x402cd0, Func Offset: 0xe30
	// Line 1145, Address: 0x402ce4, Func Offset: 0xe44
	// Line 1096, Address: 0x402d00, Func Offset: 0xe60
	// Line 1145, Address: 0x402d04, Func Offset: 0xe64
	// Line 1100, Address: 0x402d08, Func Offset: 0xe68
	// Line 1145, Address: 0x402d0c, Func Offset: 0xe6c
	// Line 1100, Address: 0x402d14, Func Offset: 0xe74
	// Line 1145, Address: 0x402d1c, Func Offset: 0xe7c
	// Line 1101, Address: 0x402d24, Func Offset: 0xe84
	// Line 1145, Address: 0x402d30, Func Offset: 0xe90
	// Line 1131, Address: 0x402d44, Func Offset: 0xea4
	// Line 1145, Address: 0x402d48, Func Offset: 0xea8
	// Line 1130, Address: 0x402d4c, Func Offset: 0xeac
	// Line 1131, Address: 0x402d50, Func Offset: 0xeb0
	// Line 1145, Address: 0x402d54, Func Offset: 0xeb4
	// Line 1024, Address: 0x402ea4, Func Offset: 0x1004
	// Line 1145, Address: 0x402eb0, Func Offset: 0x1010
	// Line 1024, Address: 0x402ebc, Func Offset: 0x101c
	// Line 1145, Address: 0x402ec8, Func Offset: 0x1028
	// Line 1024, Address: 0x402ed4, Func Offset: 0x1034
	// Line 1145, Address: 0x402ee0, Func Offset: 0x1040
	// Line 1024, Address: 0x402f10, Func Offset: 0x1070
	// Line 1145, Address: 0x402f18, Func Offset: 0x1078
	// Line 1025, Address: 0x402f30, Func Offset: 0x1090
	// Line 1145, Address: 0x402f3c, Func Offset: 0x109c
	// Line 1025, Address: 0x402f48, Func Offset: 0x10a8
	// Line 1145, Address: 0x402f54, Func Offset: 0x10b4
	// Line 1025, Address: 0x402f60, Func Offset: 0x10c0
	// Line 1145, Address: 0x402f6c, Func Offset: 0x10cc
	// Line 1025, Address: 0x402f9c, Func Offset: 0x10fc
	// Line 1145, Address: 0x402fa4, Func Offset: 0x1104
	// Line 1026, Address: 0x402fb8, Func Offset: 0x1118
	// Line 1145, Address: 0x402fc4, Func Offset: 0x1124
	// Line 1026, Address: 0x402fd0, Func Offset: 0x1130
	// Line 1145, Address: 0x402fdc, Func Offset: 0x113c
	// Line 1026, Address: 0x402fe8, Func Offset: 0x1148
	// Line 1145, Address: 0x402ff4, Func Offset: 0x1154
	// Line 1026, Address: 0x403024, Func Offset: 0x1184
	// Line 1145, Address: 0x40302c, Func Offset: 0x118c
	// Line 1027, Address: 0x403040, Func Offset: 0x11a0
	// Line 1145, Address: 0x40304c, Func Offset: 0x11ac
	// Line 1027, Address: 0x403058, Func Offset: 0x11b8
	// Line 1145, Address: 0x403064, Func Offset: 0x11c4
	// Line 1027, Address: 0x403070, Func Offset: 0x11d0
	// Line 1145, Address: 0x40307c, Func Offset: 0x11dc
	// Line 1027, Address: 0x4030ac, Func Offset: 0x120c
	// Line 1145, Address: 0x4030b4, Func Offset: 0x1214
	// Line 1028, Address: 0x4030c8, Func Offset: 0x1228
	// Line 1145, Address: 0x4030d4, Func Offset: 0x1234
	// Line 1028, Address: 0x4030e0, Func Offset: 0x1240
	// Line 1145, Address: 0x4030ec, Func Offset: 0x124c
	// Line 1028, Address: 0x4030f8, Func Offset: 0x1258
	// Line 1145, Address: 0x403104, Func Offset: 0x1264
	// Line 1028, Address: 0x403134, Func Offset: 0x1294
	// Line 1145, Address: 0x40313c, Func Offset: 0x129c
	// Line 1029, Address: 0x403150, Func Offset: 0x12b0
	// Line 1145, Address: 0x40315c, Func Offset: 0x12bc
	// Line 1029, Address: 0x403168, Func Offset: 0x12c8
	// Line 1145, Address: 0x403174, Func Offset: 0x12d4
	// Line 1029, Address: 0x403180, Func Offset: 0x12e0
	// Line 1145, Address: 0x40318c, Func Offset: 0x12ec
	// Line 1029, Address: 0x4031bc, Func Offset: 0x131c
	// Line 1145, Address: 0x4031c4, Func Offset: 0x1324
	// Line 1061, Address: 0x4031f4, Func Offset: 0x1354
	// Line 1063, Address: 0x4031f8, Func Offset: 0x1358
	// Line 1081, Address: 0x403200, Func Offset: 0x1360
	// Line 1145, Address: 0x403204, Func Offset: 0x1364
	// Line 1081, Address: 0x40320c, Func Offset: 0x136c
	// Line 1145, Address: 0x403254, Func Offset: 0x13b4
	// Func End, Address: 0x40329c, Func Offset: 0x13fc
}

// clip_decal__19@unnamed@xWad2_cpp@FRQ219@unnamed@xWad2_cpp@17clip_decal_params
// Start address: 0x4032a0
void clip_decal(clip_decal_params& arg)
{
	xVec3* iv;
	xVec3* end_iv;
	xVec3* ov;
	xVec3* end_ov;
	xVec2* ouv;
	xVec3* cv;
	uint8* outcode;
	float32 su;
	float32 sv;
	float32 du;
	float32 dv;
	float32 ux;
	float32 uy;
	int32 out_union;
	int32 cv_offset;
	int32 vsize;
	float32 _c;
	xVec3* s0;
	xVec3* s1;
	xVec3* ends1;
	xVec3* d;
	float32 s;
	float32 s;
	float32 _c;
	xVec3* s0;
	xVec3* s1;
	xVec3* ends1;
	xVec3* d;
	float32 s;
	float32 s;
	float32 _c;
	xVec3* s0;
	xVec3* s1;
	xVec3* ends1;
	xVec3* d;
	float32 s;
	float32 s;
	float32 _c;
	xVec3* s0;
	xVec3* s1;
	xVec3* ends1;
	xVec3* d;
	float32 s;
	float32 s;
	float32 _c;
	xVec3* s0;
	xVec3* s1;
	xVec3* ends1;
	xVec3* d;
	float32 s;
	float32 s;
	float32 _c;
	xVec3* s0;
	xVec3* s1;
	xVec3* ends1;
	xVec3* d;
	float32 s;
	float32 s;
	xVec3* poly_vert;
	xVec2* poly_uv;
	xVec3* pv;
	xVec2* puv;
	xVec2* end_puv;
	xVec3* tri_vert1;
	xVec3* tri_vert2;
	xVec3* end_tri_vert2;
	xVec2* tri_uv1;
	xVec2* tri_uv2;
	// Line 637, Address: 0x4032a0, Func Offset: 0
	// Line 645, Address: 0x4032b8, Func Offset: 0x18
	// Line 638, Address: 0x4032bc, Func Offset: 0x1c
	// Line 646, Address: 0x4032c0, Func Offset: 0x20
	// Line 639, Address: 0x4032c4, Func Offset: 0x24
	// Line 646, Address: 0x4032c8, Func Offset: 0x28
	// Line 639, Address: 0x4032cc, Func Offset: 0x2c
	// Line 645, Address: 0x4032d0, Func Offset: 0x30
	// Line 638, Address: 0x4032d4, Func Offset: 0x34
	// Line 647, Address: 0x4032d8, Func Offset: 0x38
	// Line 640, Address: 0x4032dc, Func Offset: 0x3c
	// Line 647, Address: 0x4032e0, Func Offset: 0x40
	// Line 641, Address: 0x4032e4, Func Offset: 0x44
	// Line 638, Address: 0x4032e8, Func Offset: 0x48
	// Line 642, Address: 0x4032ec, Func Offset: 0x4c
	// Line 646, Address: 0x4032f0, Func Offset: 0x50
	// Line 638, Address: 0x4032f4, Func Offset: 0x54
	// Line 639, Address: 0x4032fc, Func Offset: 0x5c
	// Line 638, Address: 0x403300, Func Offset: 0x60
	// Line 639, Address: 0x403304, Func Offset: 0x64
	// Line 646, Address: 0x403308, Func Offset: 0x68
	// Line 639, Address: 0x40330c, Func Offset: 0x6c
	// Line 647, Address: 0x403318, Func Offset: 0x78
	// Line 648, Address: 0x403324, Func Offset: 0x84
	// Line 650, Address: 0x403328, Func Offset: 0x88
	// Line 723, Address: 0x403330, Func Offset: 0x90
	// Line 718, Address: 0x40333c, Func Offset: 0x9c
	// Line 723, Address: 0x403340, Func Offset: 0xa0
	// Line 721, Address: 0x403344, Func Offset: 0xa4
	// Line 684, Address: 0x403348, Func Offset: 0xa8
	// Line 685, Address: 0x40334c, Func Offset: 0xac
	// Line 686, Address: 0x403350, Func Offset: 0xb0
	// Line 685, Address: 0x403354, Func Offset: 0xb4
	// Line 686, Address: 0x403358, Func Offset: 0xb8
	// Line 688, Address: 0x40335c, Func Offset: 0xbc
	// Line 719, Address: 0x403364, Func Offset: 0xc4
	// Line 723, Address: 0x403368, Func Offset: 0xc8
	// Line 719, Address: 0x40336c, Func Offset: 0xcc
	// Line 715, Address: 0x403370, Func Offset: 0xd0
	// Line 719, Address: 0x403374, Func Offset: 0xd4
	// Line 718, Address: 0x403378, Func Offset: 0xd8
	// Line 719, Address: 0x40337c, Func Offset: 0xdc
	// Line 720, Address: 0x403388, Func Offset: 0xe8
	// Line 721, Address: 0x4033a0, Func Offset: 0x100
	// Line 723, Address: 0x4033b8, Func Offset: 0x118
	// Line 724, Address: 0x4034b0, Func Offset: 0x210
	// Line 725, Address: 0x4035d8, Func Offset: 0x338
	// Line 726, Address: 0x403700, Func Offset: 0x460
	// Line 727, Address: 0x403828, Func Offset: 0x588
	// Line 728, Address: 0x403950, Func Offset: 0x6b0
	// Line 730, Address: 0x403a78, Func Offset: 0x7d8
	// Line 735, Address: 0x403a80, Func Offset: 0x7e0
	// Line 731, Address: 0x403a84, Func Offset: 0x7e4
	// Line 730, Address: 0x403a88, Func Offset: 0x7e8
	// Line 731, Address: 0x403a8c, Func Offset: 0x7ec
	// Line 730, Address: 0x403a94, Func Offset: 0x7f4
	// Line 731, Address: 0x403a98, Func Offset: 0x7f8
	// Line 735, Address: 0x403a9c, Func Offset: 0x7fc
	// Line 749, Address: 0x403abc, Func Offset: 0x81c
	// Line 748, Address: 0x403ac0, Func Offset: 0x820
	// Line 749, Address: 0x403ac4, Func Offset: 0x824
	// Line 750, Address: 0x403ac8, Func Offset: 0x828
	// Line 752, Address: 0x403ad0, Func Offset: 0x830
	// Line 753, Address: 0x403ae4, Func Offset: 0x844
	// Line 754, Address: 0x403af8, Func Offset: 0x858
	// Line 701, Address: 0x403b1c, Func Offset: 0x87c
	// Line 754, Address: 0x403b20, Func Offset: 0x880
	// Line 701, Address: 0x403b30, Func Offset: 0x890
	// Line 754, Address: 0x403b38, Func Offset: 0x898
	// Line 702, Address: 0x403b40, Func Offset: 0x8a0
	// Line 754, Address: 0x403b4c, Func Offset: 0x8ac
	// Line 705, Address: 0x403b5c, Func Offset: 0x8bc
	// Line 754, Address: 0x403b60, Func Offset: 0x8c0
	// Line 705, Address: 0x403b70, Func Offset: 0x8d0
	// Line 754, Address: 0x403b78, Func Offset: 0x8d8
	// Line 706, Address: 0x403b80, Func Offset: 0x8e0
	// Line 754, Address: 0x403b8c, Func Offset: 0x8ec
	// Line 709, Address: 0x403b9c, Func Offset: 0x8fc
	// Line 754, Address: 0x403ba0, Func Offset: 0x900
	// Line 709, Address: 0x403bb4, Func Offset: 0x914
	// Line 754, Address: 0x403bbc, Func Offset: 0x91c
	// Line 710, Address: 0x403bc4, Func Offset: 0x924
	// Line 754, Address: 0x403bcc, Func Offset: 0x92c
	// Line 710, Address: 0x403bd0, Func Offset: 0x930
	// Line 754, Address: 0x403bd4, Func Offset: 0x934
	// Line 776, Address: 0x403bdc, Func Offset: 0x93c
	// Line 778, Address: 0x403be0, Func Offset: 0x940
	// Line 780, Address: 0x403bec, Func Offset: 0x94c
	// Line 782, Address: 0x403bf8, Func Offset: 0x958
	// Line 783, Address: 0x403c1c, Func Offset: 0x97c
	// Line 723, Address: 0x403c24, Func Offset: 0x984
	// Line 783, Address: 0x403c30, Func Offset: 0x990
	// Line 723, Address: 0x403c3c, Func Offset: 0x99c
	// Line 783, Address: 0x403c48, Func Offset: 0x9a8
	// Line 723, Address: 0x403c54, Func Offset: 0x9b4
	// Line 783, Address: 0x403c60, Func Offset: 0x9c0
	// Line 724, Address: 0x403c70, Func Offset: 0x9d0
	// Line 783, Address: 0x403c7c, Func Offset: 0x9dc
	// Line 724, Address: 0x403c88, Func Offset: 0x9e8
	// Line 783, Address: 0x403c94, Func Offset: 0x9f4
	// Line 724, Address: 0x403ca0, Func Offset: 0xa00
	// Line 783, Address: 0x403cac, Func Offset: 0xa0c
	// Line 725, Address: 0x403cb8, Func Offset: 0xa18
	// Line 783, Address: 0x403cc4, Func Offset: 0xa24
	// Line 725, Address: 0x403cd0, Func Offset: 0xa30
	// Line 783, Address: 0x403cdc, Func Offset: 0xa3c
	// Line 725, Address: 0x403ce8, Func Offset: 0xa48
	// Line 783, Address: 0x403cf4, Func Offset: 0xa54
	// Line 726, Address: 0x403d00, Func Offset: 0xa60
	// Line 783, Address: 0x403d0c, Func Offset: 0xa6c
	// Line 726, Address: 0x403d18, Func Offset: 0xa78
	// Line 783, Address: 0x403d24, Func Offset: 0xa84
	// Line 726, Address: 0x403d30, Func Offset: 0xa90
	// Line 783, Address: 0x403d3c, Func Offset: 0xa9c
	// Line 727, Address: 0x403d48, Func Offset: 0xaa8
	// Line 783, Address: 0x403d54, Func Offset: 0xab4
	// Line 727, Address: 0x403d60, Func Offset: 0xac0
	// Line 783, Address: 0x403d6c, Func Offset: 0xacc
	// Line 727, Address: 0x403d78, Func Offset: 0xad8
	// Line 783, Address: 0x403d84, Func Offset: 0xae4
	// Line 728, Address: 0x403d90, Func Offset: 0xaf0
	// Line 783, Address: 0x403d9c, Func Offset: 0xafc
	// Line 728, Address: 0x403da8, Func Offset: 0xb08
	// Line 783, Address: 0x403db4, Func Offset: 0xb14
	// Line 728, Address: 0x403dc0, Func Offset: 0xb20
	// Line 783, Address: 0x403dcc, Func Offset: 0xb2c
	// Line 758, Address: 0x403dd8, Func Offset: 0xb38
	// Line 783, Address: 0x403ddc, Func Offset: 0xb3c
	// Line 758, Address: 0x403de0, Func Offset: 0xb40
	// Line 783, Address: 0x403dec, Func Offset: 0xb4c
	// Line 760, Address: 0x403df0, Func Offset: 0xb50
	// Line 783, Address: 0x403df4, Func Offset: 0xb54
	// Func End, Address: 0x403ebc, Func Offset: 0xc1c
}

// transform_combo_vertices__19@unnamed@xWad2_cpp@FP5xVec3PCQ219@unnamed@xWad2_cpp@12combo_vertexiPC5xVec3
// Start address: 0x403ec0
void transform_combo_vertices(xVec3* vert, combo_vertex* cv, int32 vert_size, xVec3* src_vert)
{
	xVec3* end_vert;
	xVec3& s0;
	xVec3& s1;
	float32 o;
	xVec3& s1;
	xVec3& s2;
	float32 o;
	// Line 531, Address: 0x403ec0, Func Offset: 0
	// Line 532, Address: 0x403ed0, Func Offset: 0x10
	// Line 552, Address: 0x403ed8, Func Offset: 0x18
	// Line 539, Address: 0x403edc, Func Offset: 0x1c
	// Line 552, Address: 0x403ee0, Func Offset: 0x20
	// Line 535, Address: 0x403ee4, Func Offset: 0x24
	// Line 534, Address: 0x403ee8, Func Offset: 0x28
	// Line 535, Address: 0x403efc, Func Offset: 0x3c
	// Line 539, Address: 0x403f04, Func Offset: 0x44
	// Line 541, Address: 0x403f0c, Func Offset: 0x4c
	// Line 543, Address: 0x403f14, Func Offset: 0x54
	// Line 544, Address: 0x403f18, Func Offset: 0x58
	// Line 545, Address: 0x403f1c, Func Offset: 0x5c
	// Line 541, Address: 0x403f20, Func Offset: 0x60
	// Line 543, Address: 0x403f30, Func Offset: 0x70
	// Line 544, Address: 0x403f34, Func Offset: 0x74
	// Line 542, Address: 0x403f38, Func Offset: 0x78
	// Line 543, Address: 0x403f3c, Func Offset: 0x7c
	// Line 544, Address: 0x403f44, Func Offset: 0x84
	// Line 545, Address: 0x403f48, Func Offset: 0x88
	// Line 544, Address: 0x403f4c, Func Offset: 0x8c
	// Line 543, Address: 0x403f50, Func Offset: 0x90
	// Line 544, Address: 0x403f54, Func Offset: 0x94
	// Line 545, Address: 0x403f58, Func Offset: 0x98
	// Line 546, Address: 0x403f60, Func Offset: 0xa0
	// Line 550, Address: 0x403f68, Func Offset: 0xa8
	// Line 551, Address: 0x403f6c, Func Offset: 0xac
	// Line 553, Address: 0x403f78, Func Offset: 0xb8
	// Line 554, Address: 0x403f7c, Func Offset: 0xbc
	// Line 555, Address: 0x403f80, Func Offset: 0xc0
	// Line 550, Address: 0x403f84, Func Offset: 0xc4
	// Line 551, Address: 0x403f8c, Func Offset: 0xcc
	// Line 550, Address: 0x403f94, Func Offset: 0xd4
	// Line 551, Address: 0x403f98, Func Offset: 0xd8
	// Line 550, Address: 0x403f9c, Func Offset: 0xdc
	// Line 551, Address: 0x403fa0, Func Offset: 0xe0
	// Line 552, Address: 0x403fa4, Func Offset: 0xe4
	// Line 553, Address: 0x403fa8, Func Offset: 0xe8
	// Line 552, Address: 0x403fac, Func Offset: 0xec
	// Line 553, Address: 0x403fb0, Func Offset: 0xf0
	// Line 554, Address: 0x403fbc, Func Offset: 0xfc
	// Line 555, Address: 0x403fc4, Func Offset: 0x104
	// Line 553, Address: 0x403fc8, Func Offset: 0x108
	// Line 555, Address: 0x403fcc, Func Offset: 0x10c
	// Line 553, Address: 0x403fd0, Func Offset: 0x110
	// Line 554, Address: 0x403fd4, Func Offset: 0x114
	// Line 555, Address: 0x403fe0, Func Offset: 0x120
	// Line 554, Address: 0x403fec, Func Offset: 0x12c
	// Line 555, Address: 0x403ff0, Func Offset: 0x130
	// Line 557, Address: 0x403ff4, Func Offset: 0x134
	// Line 558, Address: 0x404008, Func Offset: 0x148
	// Line 538, Address: 0x404024, Func Offset: 0x164
	// Line 558, Address: 0x404030, Func Offset: 0x170
	// Func End, Address: 0x404038, Func Offset: 0x178
}

