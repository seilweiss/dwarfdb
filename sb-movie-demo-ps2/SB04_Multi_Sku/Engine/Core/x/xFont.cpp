



void xFontInitModelCache();
void xFontPrintTopText();
void PrintWIPText();
void render_fill_rect(basic_rect_0& bounds, xColor_tag color);
tag_type* find_format_tag(substr& s, int32& index);
void register_tags(tag_type* t, uint32 size);
void parse_tag_counter(jot& j, split_tag& ti);
void parse_tag_timer(jot& j, split_tag& ti);
void parse_tag_pop(split_tag& ti);
void parse_tag_insert_hash(jot& j, split_tag& ti);
void parse_tag_insert(jot& j, split_tag& ti);
void reset_tag_tex();
void parse_tag_tex(jot& a, xtextbox& tb, split_tag& ti);
void render_tag_tex(jot& j, xtextbox& tb, float32 x, float32 y);
void reset_tag_model();
void parse_tag_model(jot& a, xtextbox& tb, split_tag& ti);
void render_tag_model(jot& j, xtextbox& tb, float32 x, float32 y);
void parse_tag_page_break(jot& a);
void parse_tag_word_break(jot& a);
void parse_tag_tab(jot& a);
void parse_tag_nbsp(jot& a, xtextbox& tb);
void parse_tag_newline(jot& a, xtextbox& tb);
void parse_tag_open_curly(jot& a, xtextbox& tb, split_tag& ti);
void reset_tag_yjustify(jot& a);
void parse_tag_yjustify(jot& a, split_tag& ti);
void update_tag_reset_yjustify(xtextbox& tb, xtextbox& ctb);
void update_tag_yjustify(jot& j, xtextbox& tb);
void reset_tag_xjustify(jot& a);
void parse_tag_xjustify(jot& a, split_tag& ti);
void update_tag_reset_xjustify(xtextbox& tb, xtextbox& ctb);
void update_tag_xjustify(jot& j, xtextbox& tb);
void reset_tag_wrap(jot& a);
void parse_tag_wrap(jot& a, split_tag& ti);
void update_tag_reset_wrap(xtextbox& tb, xtextbox& ctb);
void update_tag_wrap(jot& j, xtextbox& tb);
void reset_tag_font(jot& a);
void parse_tag_font(jot& a, split_tag& ti);
void update_tag_reset_font(xtextbox& tb, xtextbox& ctb);
void update_tag_font(jot& j, xtextbox& tb);
void reset_tag_color(jot& a);
void parse_tag_color(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_color(xtextbox& tb, xtextbox& ctb);
void update_tag_color(jot& j, xtextbox& tb);
void reset_tag_all(jot& j);
void update_tag_reset_all(xtextbox& tb, xtextbox& ctb);
void reset_tag_yspace(jot& a);
void parse_tag_yspace(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_yspace(xtextbox& tb, xtextbox& ctb);
void update_tag_yspace(jot& j, xtextbox& tb);
void reset_tag_xspace(jot& a);
void parse_tag_xspace(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_xspace(xtextbox& tb, xtextbox& ctb);
void update_tag_xspace(jot& j, xtextbox& tb);
void reset_tag_tab_stop(jot& a);
void parse_tag_tab_stop(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_tab_stop(xtextbox& tb, xtextbox& ctb);
void update_tag_tab_stop(jot& j, xtextbox& tb);
void reset_tag_right_indent(jot& a);
void parse_tag_right_indent(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_right_indent(xtextbox& tb, xtextbox& ctb);
void update_tag_right_indent(jot& j, xtextbox& tb);
void reset_tag_left_indent(jot& a);
void parse_tag_left_indent(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_left_indent(xtextbox& tb, xtextbox& ctb);
void update_tag_left_indent(jot& j, xtextbox& tb);
void reset_tag_height(jot& a);
void parse_tag_height(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_height(xtextbox& tb, xtextbox& ctb);
void update_tag_height(jot& j, xtextbox& tb);
void reset_tag_width(jot& a);
void parse_tag_width(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_width(xtextbox& tb, xtextbox& ctb);
void update_tag_width(jot& j, xtextbox& tb);
void reset_tag_sblue(jot& a);
void parse_tag_sblue(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_sblue(xtextbox& tb, xtextbox& ctb);
void update_tag_sblue(jot& j, xtextbox& tb);
void reset_tag_sgreen(jot& a);
void parse_tag_sgreen(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_sgreen(xtextbox& tb, xtextbox& ctb);
void update_tag_sgreen(jot& j, xtextbox& tb);
void reset_tag_sred(jot& a);
void parse_tag_sred(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_sred(xtextbox& tb, xtextbox& ctb);
void update_tag_sred(jot& j, xtextbox& tb);
void reset_tag_salpha(jot& a);
void parse_tag_salpha(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_salpha(xtextbox& tb, xtextbox& ctb);
void update_tag_salpha(jot& j, xtextbox& tb);
void reset_tag_blue(jot& a);
void parse_tag_blue(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_blue(xtextbox& tb, xtextbox& ctb);
void update_tag_blue(jot& j, xtextbox& tb);
void reset_tag_green(jot& a);
void parse_tag_green(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_green(xtextbox& tb, xtextbox& ctb);
void update_tag_green(jot& j, xtextbox& tb);
void reset_tag_red(jot& a);
void parse_tag_red(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_red(xtextbox& tb, xtextbox& ctb);
void update_tag_red(jot& j, xtextbox& tb);
void reset_tag_alpha(jot& a);
void parse_tag_alpha(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_alpha(xtextbox& tb, xtextbox& ctb);
void update_tag_alpha(jot& j, xtextbox& tb);
uint8 changed(xtextbox& ctb);
float32 yextent(float32 max, int32& size, int32 begin_jot, int32 end_jot);
void render(xtextbox& ctb, int32 begin_jot, int32 end_jot);
void calc(xtextbox& ctb, uint32 start_text);
uint8 fit_line(uint8 isLastLine);
void bound_line(jot_line& line);
void merge_line(jot_line& line);
void trim_line(jot_line& line);
void refresh_end(xtextbox& tb);
void clear();
void refresh(xtextbox& tb, uint8 force);
void clear_layout_cache();
uint32 read_list(tag_entry& e, int32* v, uint32 vsize);
uint32 read_list(tag_entry& e, float32* v, uint32 vsize);
tag_entry* find_entry(tag_entry_list& el, substr& name);
tag_entry_list read_tag(substr& s);
float32 yextent(float32 max, int32& size, layout& l, int32 begin_jot, int32 end_jot);
void render(layout& l, int32 begin_jot, int32 end_jot);
layout& temp_layout(uint8 cache);
void set_text(int8** texts, uint32* text_sizes, uint32 size);
void set_text(int8** texts, uint32 size);
void set_text(int8* text);
void text_render(jot& j, xtextbox& tb, float32 x, float32 y);
void load_model_args(model_args& ma, substr& s);
void load_tex_args(tex_args& ta, substr& s);
int8* parse_next_text_jot(jot& a, xtextbox& tb, int8* text, uint32 text_size);
int8* parse_next_tag_jot(jot& a, xtextbox& tb, xtextbox& ctb, int8* text, uint32 text_size);
uint32 parse_split_tag(split_tag& ti);
void irender(int8* text, uint32 text_size, float32 x, float32 y);
void irender(int8* text, float32 x, float32 y);
void stop_render();
void start_render();
basic_rect_0 bounds(int8* text, uint32 text_size, float32 max_width, uint32& size);
basic_rect_0 bounds(int8* text);
void restore_render_state();
void set_render_state(RwRaster* raster);
void init();
xModelInstance* load_model(uint32 id);
void init_model_cache();
void tex_render_shadowed(basic_rect_0& src, basic_rect_0& dst, basic_rect_0& clip, xColor_tag color, xColor_tag shadowcolor, float32 shadowOffsetX, float32 shadowOffsetY, float32 fshear);
void tex_render(basic_rect_0& src, basic_rect_0& dst, basic_rect_0& clip, xColor_tag color);
uint8 init_font_data(font_data& fd);
uint8 reset_font_spacing(font_asset& a);
basic_rect_1 find_bounds(xColor_tag* bits, basic_rect_1& r, int32 pitch);

// xFontInitModelCache__Fv
// Start address: 0x3de860
void xFontInitModelCache()
{
	model_cache_entry& e;
	// Line 3092, Address: 0x3de860, Func Offset: 0
	// Line 3095, Address: 0x3de8dc, Func Offset: 0x7c
	// Func End, Address: 0x3de8e4, Func Offset: 0x84
}

// xFontPrintTopText__Fv
// Start address: 0x3de8f0
void xFontPrintTopText()
{
	// Line 3079, Address: 0x3de8f0, Func Offset: 0
	// Line 3080, Address: 0x3de908, Func Offset: 0x18
	// Line 3082, Address: 0x3de91c, Func Offset: 0x2c
	// Line 3083, Address: 0x3de928, Func Offset: 0x38
	// Line 3084, Address: 0x3ded98, Func Offset: 0x4a8
	// Line 3083, Address: 0x3dedb4, Func Offset: 0x4c4
	// Line 3084, Address: 0x3dedbc, Func Offset: 0x4cc
	// Func End, Address: 0x3dedd8, Func Offset: 0x4e8
}

// PrintWIPText__Fv
// Start address: 0x3dede0
void PrintWIPText()
{
	float32 fadePer;
	basic_rect_0 bounds;
	xtextbox tb;
	int8 @17822;
	float32 wipTimer;
	int8* TXT_WIP;
	// Line 2996, Address: 0x3dede0, Func Offset: 0
	// Line 2998, Address: 0x3dede4, Func Offset: 0x4
	// Line 2996, Address: 0x3dede8, Func Offset: 0x8
	// Line 2998, Address: 0x3dee0c, Func Offset: 0x2c
	// Line 3003, Address: 0x3dee14, Func Offset: 0x34
	// Line 3027, Address: 0x3dee18, Func Offset: 0x38
	// Line 3003, Address: 0x3dee1c, Func Offset: 0x3c
	// Line 3027, Address: 0x3dee20, Func Offset: 0x40
	// Line 3003, Address: 0x3dee28, Func Offset: 0x48
	// Line 3027, Address: 0x3dee2c, Func Offset: 0x4c
	// Line 3030, Address: 0x3dee3c, Func Offset: 0x5c
	// Line 3036, Address: 0x3dee54, Func Offset: 0x74
	// Line 3032, Address: 0x3dee5c, Func Offset: 0x7c
	// Line 3033, Address: 0x3dee64, Func Offset: 0x84
	// Line 3036, Address: 0x3dee68, Func Offset: 0x88
	// Line 3033, Address: 0x3dee6c, Func Offset: 0x8c
	// Line 3036, Address: 0x3dee78, Func Offset: 0x98
	// Line 3037, Address: 0x3dee80, Func Offset: 0xa0
	// Line 3038, Address: 0x3dee9c, Func Offset: 0xbc
	// Line 3039, Address: 0x3deeb4, Func Offset: 0xd4
	// Line 3042, Address: 0x3deef4, Func Offset: 0x114
	// Line 3043, Address: 0x3def34, Func Offset: 0x154
	// Line 3045, Address: 0x3def78, Func Offset: 0x198
	// Line 3046, Address: 0x3defd0, Func Offset: 0x1f0
	// Line 3049, Address: 0x3defe0, Func Offset: 0x200
	// Line 3050, Address: 0x3df01c, Func Offset: 0x23c
	// Line 3051, Address: 0x3df020, Func Offset: 0x240
	// Line 3050, Address: 0x3df024, Func Offset: 0x244
	// Line 3051, Address: 0x3df028, Func Offset: 0x248
	// Line 3054, Address: 0x3df02c, Func Offset: 0x24c
	// Line 3051, Address: 0x3df030, Func Offset: 0x250
	// Line 3054, Address: 0x3df034, Func Offset: 0x254
	// Line 3053, Address: 0x3df038, Func Offset: 0x258
	// Line 3054, Address: 0x3df040, Func Offset: 0x260
	// Line 3053, Address: 0x3df044, Func Offset: 0x264
	// Line 3054, Address: 0x3df048, Func Offset: 0x268
	// Line 3053, Address: 0x3df04c, Func Offset: 0x26c
	// Line 3055, Address: 0x3df050, Func Offset: 0x270
	// Line 3054, Address: 0x3df054, Func Offset: 0x274
	// Line 3050, Address: 0x3df064, Func Offset: 0x284
	// Line 3052, Address: 0x3df07c, Func Offset: 0x29c
	// Line 3053, Address: 0x3df084, Func Offset: 0x2a4
	// Line 3055, Address: 0x3df088, Func Offset: 0x2a8
	// Line 3053, Address: 0x3df08c, Func Offset: 0x2ac
	// Line 3055, Address: 0x3df090, Func Offset: 0x2b0
	// Line 3053, Address: 0x3df094, Func Offset: 0x2b4
	// Line 3054, Address: 0x3df09c, Func Offset: 0x2bc
	// Line 3055, Address: 0x3df0b0, Func Offset: 0x2d0
	// Line 3057, Address: 0x3df0d0, Func Offset: 0x2f0
	// Line 2999, Address: 0x3df0dc, Func Offset: 0x2fc
	// Line 3057, Address: 0x3df0e0, Func Offset: 0x300
	// Line 3028, Address: 0x3df0f0, Func Offset: 0x310
	// Line 3057, Address: 0x3df0fc, Func Offset: 0x31c
	// Line 3028, Address: 0x3df104, Func Offset: 0x324
	// Line 3046, Address: 0x3df11c, Func Offset: 0x33c
	// Line 3057, Address: 0x3df120, Func Offset: 0x340
	// Line 3046, Address: 0x3df12c, Func Offset: 0x34c
	// Line 3057, Address: 0x3df130, Func Offset: 0x350
	// Line 3046, Address: 0x3df134, Func Offset: 0x354
	// Line 3057, Address: 0x3df138, Func Offset: 0x358
	// Line 3046, Address: 0x3df250, Func Offset: 0x470
	// Line 3057, Address: 0x3df254, Func Offset: 0x474
	// Line 3046, Address: 0x3df378, Func Offset: 0x598
	// Line 3057, Address: 0x3df37c, Func Offset: 0x59c
	// Line 3046, Address: 0x3df39c, Func Offset: 0x5bc
	// Line 3057, Address: 0x3df3a0, Func Offset: 0x5c0
	// Line 3046, Address: 0x3df434, Func Offset: 0x654
	// Line 3057, Address: 0x3df438, Func Offset: 0x658
	// Line 3046, Address: 0x3df43c, Func Offset: 0x65c
	// Line 3057, Address: 0x3df444, Func Offset: 0x664
	// Line 3046, Address: 0x3df450, Func Offset: 0x670
	// Line 3057, Address: 0x3df454, Func Offset: 0x674
	// Line 3049, Address: 0x3df46c, Func Offset: 0x68c
	// Line 3057, Address: 0x3df474, Func Offset: 0x694
	// Func End, Address: 0x3df4a4, Func Offset: 0x6c4
}

// render_fill_rect__FRC13basic_rect<f>10xColor_tag
// Start address: 0x3df4b0
void render_fill_rect(basic_rect_0& bounds, xColor_tag color)
{
	float32 rcz;
	float32 nsz;
	RwSky2DVertex vert[4];
	basic_rect_0 r;
	// Line 2951, Address: 0x3df4b0, Func Offset: 0
	// Line 2952, Address: 0x3df4b4, Func Offset: 0x4
	// Line 2951, Address: 0x3df4b8, Func Offset: 0x8
	// Line 2952, Address: 0x3df4bc, Func Offset: 0xc
	// Line 2951, Address: 0x3df4c0, Func Offset: 0x10
	// Line 2952, Address: 0x3df4c4, Func Offset: 0x14
	// Line 2951, Address: 0x3df4c8, Func Offset: 0x18
	// Line 2952, Address: 0x3df4e8, Func Offset: 0x38
	// Line 2951, Address: 0x3df4ec, Func Offset: 0x3c
	// Line 2952, Address: 0x3df4f0, Func Offset: 0x40
	// Line 2954, Address: 0x3df528, Func Offset: 0x78
	// Line 2956, Address: 0x3df538, Func Offset: 0x88
	// Line 2954, Address: 0x3df53c, Func Offset: 0x8c
	// Line 2955, Address: 0x3df540, Func Offset: 0x90
	// Line 2954, Address: 0x3df548, Func Offset: 0x98
	// Line 2956, Address: 0x3df554, Func Offset: 0xa4
	// Line 2958, Address: 0x3df55c, Func Offset: 0xac
	// Line 2959, Address: 0x3df560, Func Offset: 0xb0
	// Line 2958, Address: 0x3df564, Func Offset: 0xb4
	// Line 2959, Address: 0x3df57c, Func Offset: 0xcc
	// Line 2960, Address: 0x3df5f0, Func Offset: 0x140
	// Line 2959, Address: 0x3df5f4, Func Offset: 0x144
	// Line 2960, Address: 0x3df5fc, Func Offset: 0x14c
	// Line 2959, Address: 0x3df604, Func Offset: 0x154
	// Line 2960, Address: 0x3df614, Func Offset: 0x164
	// Line 2959, Address: 0x3df618, Func Offset: 0x168
	// Line 2960, Address: 0x3df624, Func Offset: 0x174
	// Line 2961, Address: 0x3df96c, Func Offset: 0x4bc
	// Line 2960, Address: 0x3df978, Func Offset: 0x4c8
	// Line 2961, Address: 0x3df97c, Func Offset: 0x4cc
	// Line 2962, Address: 0x3df98c, Func Offset: 0x4dc
	// Line 2961, Address: 0x3df990, Func Offset: 0x4e0
	// Line 2962, Address: 0x3df994, Func Offset: 0x4e4
	// Line 2963, Address: 0x3dfa40, Func Offset: 0x590
	// Func End, Address: 0x3dfa64, Func Offset: 0x5b4
}

// find_format_tag__8xtextboxFRC6substrRi
// Start address: 0x3dfa70
tag_type* xtextbox::find_format_tag(substr& s, int32& index)
{
	int32 start;
	int32 end;
	tag_type& t;
	int32 c;
	// Line 2909, Address: 0x3dfa70, Func Offset: 0
	// Line 2910, Address: 0x3dfa94, Func Offset: 0x24
	// Line 2911, Address: 0x3dfa98, Func Offset: 0x28
	// Line 2920, Address: 0x3dfaa0, Func Offset: 0x30
	// Line 2921, Address: 0x3dfaa4, Func Offset: 0x34
	// Line 2913, Address: 0x3dfac0, Func Offset: 0x50
	// Line 2921, Address: 0x3dfac4, Func Offset: 0x54
	// Line 2915, Address: 0x3dfac8, Func Offset: 0x58
	// Line 2921, Address: 0x3dfacc, Func Offset: 0x5c
	// Line 2914, Address: 0x3dfad4, Func Offset: 0x64
	// Line 2921, Address: 0x3dfad8, Func Offset: 0x68
	// Line 2914, Address: 0x3dfadc, Func Offset: 0x6c
	// Line 2921, Address: 0x3dfae0, Func Offset: 0x70
	// Line 2919, Address: 0x3dfb04, Func Offset: 0x94
	// Line 2921, Address: 0x3dfb08, Func Offset: 0x98
	// Line 2916, Address: 0x3dfb18, Func Offset: 0xa8
	// Line 2918, Address: 0x3dfb20, Func Offset: 0xb0
	// Line 2922, Address: 0x3dfb24, Func Offset: 0xb4
	// Func End, Address: 0x3dfb44, Func Offset: 0xd4
}

// register_tags__8xtextboxFPCQ28xtextbox8tag_typeUi
// Start address: 0x3dfb50
void register_tags(tag_type* t, uint32 size)
{
	tag_type* s1;
	tag_type* s2;
	tag_type* end1;
	tag_type* end2;
	tag_type* d;
	int32 c;
	// Line 2885, Address: 0x3dfb50, Func Offset: 0
	// Line 2892, Address: 0x3dfb54, Func Offset: 0x4
	// Line 2885, Address: 0x3dfb58, Func Offset: 0x8
	// Line 2892, Address: 0x3dfb5c, Func Offset: 0xc
	// Line 2885, Address: 0x3dfb60, Func Offset: 0x10
	// Line 2892, Address: 0x3dfb64, Func Offset: 0x14
	// Line 2885, Address: 0x3dfb68, Func Offset: 0x18
	// Line 2892, Address: 0x3dfb70, Func Offset: 0x20
	// Line 2885, Address: 0x3dfb74, Func Offset: 0x24
	// Line 2893, Address: 0x3dfb78, Func Offset: 0x28
	// Line 2885, Address: 0x3dfb7c, Func Offset: 0x2c
	// Line 2893, Address: 0x3dfb80, Func Offset: 0x30
	// Line 2892, Address: 0x3dfb84, Func Offset: 0x34
	// Line 2893, Address: 0x3dfb9c, Func Offset: 0x4c
	// Line 2894, Address: 0x3dfbac, Func Offset: 0x5c
	// Line 2902, Address: 0x3dfbb0, Func Offset: 0x60
	// Line 2899, Address: 0x3dfc40, Func Offset: 0xf0
	// Line 2902, Address: 0x3dfc48, Func Offset: 0xf8
	// Line 2903, Address: 0x3dfc8c, Func Offset: 0x13c
	// Line 2904, Address: 0x3dfcc8, Func Offset: 0x178
	// Line 2905, Address: 0x3dfd10, Func Offset: 0x1c0
	// Line 2906, Address: 0x3dfd38, Func Offset: 0x1e8
	// Func End, Address: 0x3dfd58, Func Offset: 0x208
}

// parse_tag_counter__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3dfd60
void parse_tag_counter(jot& j, split_tag& ti)
{
	uint32 id;
	_xCounter* counter;
	int8* buffer;
	// Line 2770, Address: 0x3dfd60, Func Offset: 0
	// Line 2772, Address: 0x3dfd64, Func Offset: 0x4
	// Line 2770, Address: 0x3dfd68, Func Offset: 0x8
	// Line 2772, Address: 0x3dfd6c, Func Offset: 0xc
	// Line 2770, Address: 0x3dfd70, Func Offset: 0x10
	// Line 2772, Address: 0x3dfd74, Func Offset: 0x14
	// Line 2770, Address: 0x3dfd78, Func Offset: 0x18
	// Line 2772, Address: 0x3dfd7c, Func Offset: 0x1c
	// Line 2771, Address: 0x3dfd80, Func Offset: 0x20
	// Line 2772, Address: 0x3dfd88, Func Offset: 0x28
	// Line 2773, Address: 0x3dfd8c, Func Offset: 0x2c
	// Line 2772, Address: 0x3dfd90, Func Offset: 0x30
	// Line 2773, Address: 0x3dfdb4, Func Offset: 0x54
	// Line 2775, Address: 0x3dfddc, Func Offset: 0x7c
	// Line 2776, Address: 0x3dfde4, Func Offset: 0x84
	// Line 2777, Address: 0x3dfdec, Func Offset: 0x8c
	// Line 2780, Address: 0x3dfe04, Func Offset: 0xa4
	// Line 2781, Address: 0x3dfe08, Func Offset: 0xa8
	// Line 2782, Address: 0x3dfe1c, Func Offset: 0xbc
	// Line 2783, Address: 0x3dfe28, Func Offset: 0xc8
	// Func End, Address: 0x3dfe3c, Func Offset: 0xdc
}

// parse_tag_timer__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3dfe40
void parse_tag_timer(jot& j, split_tag& ti)
{
	uint32 id;
	xTimer* ta;
	int8 buffer[64];
	uint32 sec;
	uint32 mn;
	// Line 2741, Address: 0x3dfe40, Func Offset: 0
	// Line 2743, Address: 0x3dfe44, Func Offset: 0x4
	// Line 2741, Address: 0x3dfe48, Func Offset: 0x8
	// Line 2743, Address: 0x3dfe4c, Func Offset: 0xc
	// Line 2741, Address: 0x3dfe50, Func Offset: 0x10
	// Line 2743, Address: 0x3dfe54, Func Offset: 0x14
	// Line 2742, Address: 0x3dfe58, Func Offset: 0x18
	// Line 2743, Address: 0x3dfe5c, Func Offset: 0x1c
	// Line 2744, Address: 0x3dfe68, Func Offset: 0x28
	// Line 2743, Address: 0x3dfe6c, Func Offset: 0x2c
	// Line 2744, Address: 0x3dfe90, Func Offset: 0x50
	// Line 2746, Address: 0x3dfeb8, Func Offset: 0x78
	// Line 2747, Address: 0x3dfec4, Func Offset: 0x84
	// Line 2748, Address: 0x3dfed4, Func Offset: 0x94
	// Line 2749, Address: 0x3dfedc, Func Offset: 0x9c
	// Line 2751, Address: 0x3dfee4, Func Offset: 0xa4
	// Line 2757, Address: 0x3dfee8, Func Offset: 0xa8
	// Line 2751, Address: 0x3dfef0, Func Offset: 0xb0
	// Line 2757, Address: 0x3dff24, Func Offset: 0xe4
	// Line 2758, Address: 0x3dff5c, Func Offset: 0x11c
	// Line 2757, Address: 0x3dff60, Func Offset: 0x120
	// Line 2758, Address: 0x3dff64, Func Offset: 0x124
	// Line 2759, Address: 0x3dff74, Func Offset: 0x134
	// Line 2760, Address: 0x3dff7c, Func Offset: 0x13c
	// Line 2765, Address: 0x3dff94, Func Offset: 0x154
	// Line 2766, Address: 0x3dffac, Func Offset: 0x16c
	// Line 2767, Address: 0x3dffb0, Func Offset: 0x170
	// Line 2762, Address: 0x3dffb8, Func Offset: 0x178
	// Line 2767, Address: 0x3dffbc, Func Offset: 0x17c
	// Func End, Address: 0x3dffe4, Func Offset: 0x1a4
}

// parse_tag_pop__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3dfff0
void parse_tag_pop(split_tag& ti)
{
	// Line 2719, Address: 0x3dfff0, Func Offset: 0
	// Line 2738, Address: 0x3e0018, Func Offset: 0x28
	// Func End, Address: 0x3e0020, Func Offset: 0x30
}

// parse_tag_insert_hash__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e0020
void parse_tag_insert_hash(jot& j, split_tag& ti)
{
	uint32 len;
	int8* text;
	// Line 2702, Address: 0x3e0020, Func Offset: 0
	// Line 2704, Address: 0x3e0024, Func Offset: 0x4
	// Line 2702, Address: 0x3e0028, Func Offset: 0x8
	// Line 2704, Address: 0x3e002c, Func Offset: 0xc
	// Line 2702, Address: 0x3e0030, Func Offset: 0x10
	// Line 2704, Address: 0x3e0034, Func Offset: 0x14
	// Line 2703, Address: 0x3e0038, Func Offset: 0x18
	// Line 2704, Address: 0x3e003c, Func Offset: 0x1c
	// Line 2705, Address: 0x3e0048, Func Offset: 0x28
	// Line 2704, Address: 0x3e004c, Func Offset: 0x2c
	// Line 2705, Address: 0x3e0070, Func Offset: 0x50
	// Line 2707, Address: 0x3e0098, Func Offset: 0x78
	// Line 2708, Address: 0x3e00a8, Func Offset: 0x88
	// Line 2710, Address: 0x3e00b8, Func Offset: 0x98
	// Line 2711, Address: 0x3e00c4, Func Offset: 0xa4
	// Line 2712, Address: 0x3e00cc, Func Offset: 0xac
	// Line 2714, Address: 0x3e00d0, Func Offset: 0xb0
	// Line 2713, Address: 0x3e00d4, Func Offset: 0xb4
	// Line 2714, Address: 0x3e00d8, Func Offset: 0xb8
	// Line 2713, Address: 0x3e00dc, Func Offset: 0xbc
	// Line 2714, Address: 0x3e00e0, Func Offset: 0xc0
	// Line 2715, Address: 0x3e00f0, Func Offset: 0xd0
	// Func End, Address: 0x3e0100, Func Offset: 0xe0
}

// parse_tag_insert__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e0100
void parse_tag_insert(jot& j, split_tag& ti)
{
	uint32 id;
	uint32 len;
	int8* text;
	// Line 2687, Address: 0x3e0100, Func Offset: 0
	// Line 2689, Address: 0x3e0104, Func Offset: 0x4
	// Line 2687, Address: 0x3e0108, Func Offset: 0x8
	// Line 2689, Address: 0x3e010c, Func Offset: 0xc
	// Line 2687, Address: 0x3e0110, Func Offset: 0x10
	// Line 2689, Address: 0x3e0114, Func Offset: 0x14
	// Line 2688, Address: 0x3e0118, Func Offset: 0x18
	// Line 2689, Address: 0x3e011c, Func Offset: 0x1c
	// Line 2690, Address: 0x3e0128, Func Offset: 0x28
	// Line 2689, Address: 0x3e012c, Func Offset: 0x2c
	// Line 2690, Address: 0x3e0150, Func Offset: 0x50
	// Line 2692, Address: 0x3e0178, Func Offset: 0x78
	// Line 2693, Address: 0x3e0184, Func Offset: 0x84
	// Line 2695, Address: 0x3e0194, Func Offset: 0x94
	// Line 2696, Address: 0x3e01a0, Func Offset: 0xa0
	// Line 2697, Address: 0x3e01a8, Func Offset: 0xa8
	// Line 2699, Address: 0x3e01ac, Func Offset: 0xac
	// Line 2698, Address: 0x3e01b0, Func Offset: 0xb0
	// Line 2699, Address: 0x3e01b4, Func Offset: 0xb4
	// Line 2698, Address: 0x3e01b8, Func Offset: 0xb8
	// Line 2699, Address: 0x3e01bc, Func Offset: 0xbc
	// Line 2700, Address: 0x3e01cc, Func Offset: 0xcc
	// Func End, Address: 0x3e01dc, Func Offset: 0xdc
}

// reset_tag_tex__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e01e0
void reset_tag_tex()
{
	// Line 2682, Address: 0x3e01e0, Func Offset: 0
	// Line 2683, Address: 0x3e0280, Func Offset: 0xa0
	// Func End, Address: 0x3e0288, Func Offset: 0xa8
}

// parse_tag_tex__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e0290
void parse_tag_tex(jot& a, xtextbox& tb, split_tag& ti)
{
	tex_tag_context& ttc;
	callback cb;
	// Line 2624, Address: 0x3e0290, Func Offset: 0
	// Line 2627, Address: 0x3e02a8, Func Offset: 0x18
	// Line 2628, Address: 0x3e02c0, Func Offset: 0x30
	// Line 2630, Address: 0x3e02c8, Func Offset: 0x38
	// Line 2632, Address: 0x3e02cc, Func Offset: 0x3c
	// Line 2633, Address: 0x3e02d0, Func Offset: 0x40
	// Line 2634, Address: 0x3e02e0, Func Offset: 0x50
	// Line 2636, Address: 0x3e02f0, Func Offset: 0x60
	// Line 2631, Address: 0x3e02f8, Func Offset: 0x68
	// Line 2632, Address: 0x3e02fc, Func Offset: 0x6c
	// Line 2637, Address: 0x3e0300, Func Offset: 0x70
	// Line 2632, Address: 0x3e0304, Func Offset: 0x74
	// Line 2641, Address: 0x3e0308, Func Offset: 0x78
	// Line 2633, Address: 0x3e030c, Func Offset: 0x7c
	// Line 2634, Address: 0x3e032c, Func Offset: 0x9c
	// Line 2636, Address: 0x3e034c, Func Offset: 0xbc
	// Line 2637, Address: 0x3e0360, Func Offset: 0xd0
	// Line 2641, Address: 0x3e0378, Func Offset: 0xe8
	// Line 2644, Address: 0x3e03a4, Func Offset: 0x114
	// Line 2645, Address: 0x3e03ac, Func Offset: 0x11c
	// Line 2647, Address: 0x3e03b4, Func Offset: 0x124
	// Line 2648, Address: 0x3e0418, Func Offset: 0x188
	// Line 2650, Address: 0x3e0420, Func Offset: 0x190
	// Line 2651, Address: 0x3e047c, Func Offset: 0x1ec
	// Line 2650, Address: 0x3e0480, Func Offset: 0x1f0
	// Line 2651, Address: 0x3e0488, Func Offset: 0x1f8
	// Line 2653, Address: 0x3e0490, Func Offset: 0x200
	// Line 2655, Address: 0x3e0498, Func Offset: 0x208
	// Line 2656, Address: 0x3e04f8, Func Offset: 0x268
	// Line 2655, Address: 0x3e04fc, Func Offset: 0x26c
	// Line 2656, Address: 0x3e0500, Func Offset: 0x270
	// Line 2658, Address: 0x3e0508, Func Offset: 0x278
	// Line 2660, Address: 0x3e0510, Func Offset: 0x280
	// Line 2661, Address: 0x3e055c, Func Offset: 0x2cc
	// Line 2660, Address: 0x3e0560, Func Offset: 0x2d0
	// Line 2661, Address: 0x3e056c, Func Offset: 0x2dc
	// Line 2660, Address: 0x3e0570, Func Offset: 0x2e0
	// Line 2661, Address: 0x3e0574, Func Offset: 0x2e4
	// Line 2660, Address: 0x3e0578, Func Offset: 0x2e8
	// Line 2661, Address: 0x3e057c, Func Offset: 0x2ec
	// Line 2663, Address: 0x3e0584, Func Offset: 0x2f4
	// Line 2665, Address: 0x3e058c, Func Offset: 0x2fc
	// Line 2666, Address: 0x3e05d8, Func Offset: 0x348
	// Line 2665, Address: 0x3e05dc, Func Offset: 0x34c
	// Line 2666, Address: 0x3e05e8, Func Offset: 0x358
	// Line 2665, Address: 0x3e05f0, Func Offset: 0x360
	// Line 2666, Address: 0x3e05f4, Func Offset: 0x364
	// Line 2665, Address: 0x3e05f8, Func Offset: 0x368
	// Line 2666, Address: 0x3e05fc, Func Offset: 0x36c
	// Line 2668, Address: 0x3e0604, Func Offset: 0x374
	// Line 2670, Address: 0x3e060c, Func Offset: 0x37c
	// Line 2673, Address: 0x3e0614, Func Offset: 0x384
	// Line 2678, Address: 0x3e0618, Func Offset: 0x388
	// Line 2677, Address: 0x3e061c, Func Offset: 0x38c
	// Line 2678, Address: 0x3e0620, Func Offset: 0x390
	// Line 2673, Address: 0x3e0624, Func Offset: 0x394
	// Line 2674, Address: 0x3e0650, Func Offset: 0x3c0
	// Line 2676, Address: 0x3e0680, Func Offset: 0x3f0
	// Line 2677, Address: 0x3e0684, Func Offset: 0x3f4
	// Line 2678, Address: 0x3e0688, Func Offset: 0x3f8
	// Line 2679, Address: 0x3e068c, Func Offset: 0x3fc
	// Func End, Address: 0x3e06a0, Func Offset: 0x410
}

// render_tag_tex__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x3e06a0
void render_tag_tex(jot& j, xtextbox& tb, float32 x, float32 y)
{
	tex_tag_context& ttc;
	basic_rect_0 dst;
	// Line 2616, Address: 0x3e06a0, Func Offset: 0
	// Line 2619, Address: 0x3e06a4, Func Offset: 0x4
	// Line 2616, Address: 0x3e06a8, Func Offset: 0x8
	// Line 2619, Address: 0x3e06bc, Func Offset: 0x1c
	// Line 2618, Address: 0x3e06c0, Func Offset: 0x20
	// Line 2616, Address: 0x3e06c4, Func Offset: 0x24
	// Line 2619, Address: 0x3e06cc, Func Offset: 0x2c
	// Line 2620, Address: 0x3e072c, Func Offset: 0x8c
	// Line 2621, Address: 0x3e0730, Func Offset: 0x90
	// Line 2620, Address: 0x3e0734, Func Offset: 0x94
	// Line 2621, Address: 0x3e0740, Func Offset: 0xa0
	// Line 2620, Address: 0x3e0744, Func Offset: 0xa4
	// Line 2621, Address: 0x3e0748, Func Offset: 0xa8
	// Line 2620, Address: 0x3e0750, Func Offset: 0xb0
	// Line 2621, Address: 0x3e0764, Func Offset: 0xc4
	// Line 2622, Address: 0x3e076c, Func Offset: 0xcc
	// Func End, Address: 0x3e078c, Func Offset: 0xec
}

// reset_tag_model__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e0790
void reset_tag_model()
{
	// Line 2594, Address: 0x3e0790, Func Offset: 0
	// Line 2595, Address: 0x3e0820, Func Offset: 0x90
	// Func End, Address: 0x3e0828, Func Offset: 0x98
}

// parse_tag_model__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e0830
void parse_tag_model(jot& a, xtextbox& tb, split_tag& ti)
{
	model_tag_context& mtc;
	callback cb;
	// Line 2557, Address: 0x3e0830, Func Offset: 0
	// Line 2560, Address: 0x3e084c, Func Offset: 0x1c
	// Line 2561, Address: 0x3e0868, Func Offset: 0x38
	// Line 2563, Address: 0x3e0870, Func Offset: 0x40
	// Line 2565, Address: 0x3e0874, Func Offset: 0x44
	// Line 2567, Address: 0x3e088c, Func Offset: 0x5c
	// Line 2564, Address: 0x3e089c, Func Offset: 0x6c
	// Line 2565, Address: 0x3e08a0, Func Offset: 0x70
	// Line 2567, Address: 0x3e08dc, Func Offset: 0xac
	// Line 2568, Address: 0x3e08fc, Func Offset: 0xcc
	// Line 2572, Address: 0x3e0918, Func Offset: 0xe8
	// Line 2573, Address: 0x3e0920, Func Offset: 0xf0
	// Line 2575, Address: 0x3e0924, Func Offset: 0xf4
	// Line 2570, Address: 0x3e092c, Func Offset: 0xfc
	// Line 2572, Address: 0x3e094c, Func Offset: 0x11c
	// Line 2573, Address: 0x3e0960, Func Offset: 0x130
	// Line 2575, Address: 0x3e0978, Func Offset: 0x148
	// Line 2579, Address: 0x3e0998, Func Offset: 0x168
	// Line 2580, Address: 0x3e09cc, Func Offset: 0x19c
	// Line 2581, Address: 0x3e09fc, Func Offset: 0x1cc
	// Line 2583, Address: 0x3e0a04, Func Offset: 0x1d4
	// Line 2584, Address: 0x3e0a3c, Func Offset: 0x20c
	// Line 2588, Address: 0x3e0a6c, Func Offset: 0x23c
	// Line 2589, Address: 0x3e0a70, Func Offset: 0x240
	// Line 2590, Address: 0x3e0a78, Func Offset: 0x248
	// Line 2591, Address: 0x3e0a80, Func Offset: 0x250
	// Func End, Address: 0x3e0ab4, Func Offset: 0x284
}

// render_tag_model__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x3e0ac0
void render_tag_model(jot& j, xtextbox& tb, float32 x, float32 y)
{
	model_tag_context& mtc;
	basic_rect_0 dst;
	xVec3 from;
	xVec3 to;
	xMat4x3 frame;
	float32 ir;
	float32 scale;
	// Line 2518, Address: 0x3e0ac0, Func Offset: 0
	// Line 2525, Address: 0x3e0ac4, Func Offset: 0x4
	// Line 2518, Address: 0x3e0ac8, Func Offset: 0x8
	// Line 2526, Address: 0x3e0acc, Func Offset: 0xc
	// Line 2518, Address: 0x3e0ad0, Func Offset: 0x10
	// Line 2526, Address: 0x3e0ad4, Func Offset: 0x14
	// Line 2518, Address: 0x3e0ad8, Func Offset: 0x18
	// Line 2527, Address: 0x3e0adc, Func Offset: 0x1c
	// Line 2525, Address: 0x3e0ae0, Func Offset: 0x20
	// Line 2520, Address: 0x3e0ae4, Func Offset: 0x24
	// Line 2527, Address: 0x3e0aec, Func Offset: 0x2c
	// Line 2526, Address: 0x3e0af0, Func Offset: 0x30
	// Line 2530, Address: 0x3e0af4, Func Offset: 0x34
	// Line 2526, Address: 0x3e0af8, Func Offset: 0x38
	// Line 2530, Address: 0x3e0afc, Func Offset: 0x3c
	// Line 2525, Address: 0x3e0b00, Func Offset: 0x40
	// Line 2526, Address: 0x3e0b10, Func Offset: 0x50
	// Line 2525, Address: 0x3e0b18, Func Offset: 0x58
	// Line 2526, Address: 0x3e0b20, Func Offset: 0x60
	// Line 2525, Address: 0x3e0b34, Func Offset: 0x74
	// Line 2527, Address: 0x3e0b3c, Func Offset: 0x7c
	// Line 2525, Address: 0x3e0b48, Func Offset: 0x88
	// Line 2527, Address: 0x3e0b50, Func Offset: 0x90
	// Line 2530, Address: 0x3e0b8c, Func Offset: 0xcc
	// Line 2531, Address: 0x3e0b98, Func Offset: 0xd8
	// Line 2532, Address: 0x3e0bc8, Func Offset: 0x108
	// Line 2536, Address: 0x3e0bcc, Func Offset: 0x10c
	// Line 2532, Address: 0x3e0bd0, Func Offset: 0x110
	// Line 2533, Address: 0x3e0bd8, Func Offset: 0x118
	// Line 2532, Address: 0x3e0bdc, Func Offset: 0x11c
	// Line 2533, Address: 0x3e0be0, Func Offset: 0x120
	// Line 2534, Address: 0x3e0c48, Func Offset: 0x188
	// Line 2535, Address: 0x3e0c58, Func Offset: 0x198
	// Line 2534, Address: 0x3e0c5c, Func Offset: 0x19c
	// Line 2535, Address: 0x3e0c64, Func Offset: 0x1a4
	// Line 2536, Address: 0x3e0c68, Func Offset: 0x1a8
	// Line 2537, Address: 0x3e0c8c, Func Offset: 0x1cc
	// Line 2539, Address: 0x3e0ca0, Func Offset: 0x1e0
	// Line 2544, Address: 0x3e0cc8, Func Offset: 0x208
	// Line 2539, Address: 0x3e0ccc, Func Offset: 0x20c
	// Line 2544, Address: 0x3e0cd0, Func Offset: 0x210
	// Line 2545, Address: 0x3e0cdc, Func Offset: 0x21c
	// Line 2546, Address: 0x3e0cec, Func Offset: 0x22c
	// Line 2549, Address: 0x3e0cfc, Func Offset: 0x23c
	// Line 2552, Address: 0x3e0d10, Func Offset: 0x250
	// Line 2553, Address: 0x3e0d20, Func Offset: 0x260
	// Line 2554, Address: 0x3e0d30, Func Offset: 0x270
	// Line 2555, Address: 0x3e0d40, Func Offset: 0x280
	// Func End, Address: 0x3e0d54, Func Offset: 0x294
}

// parse_tag_page_break__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e0d60
void parse_tag_page_break(jot& a)
{
	// Line 2508, Address: 0x3e0d60, Func Offset: 0
	// Func End, Address: 0x3e0d7c, Func Offset: 0x1c
}

// parse_tag_word_break__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e0d80
void parse_tag_word_break(jot& a)
{
	// Line 2506, Address: 0x3e0d80, Func Offset: 0
	// Func End, Address: 0x3e0d9c, Func Offset: 0x1c
}

// parse_tag_tab__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e0da0
void parse_tag_tab(jot& a)
{
	// Line 2504, Address: 0x3e0da0, Func Offset: 0
	// Func End, Address: 0x3e0dbc, Func Offset: 0x1c
}

// parse_tag_nbsp__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e0dc0
void parse_tag_nbsp(jot& a, xtextbox& tb)
{
	// Line 2495, Address: 0x3e0dc0, Func Offset: 0
	// Line 2496, Address: 0x3e0dc4, Func Offset: 0x4
	// Line 2497, Address: 0x3e0dc8, Func Offset: 0x8
	// Line 2499, Address: 0x3e0dd0, Func Offset: 0x10
	// Line 2497, Address: 0x3e0dd4, Func Offset: 0x14
	// Line 2498, Address: 0x3e0dd8, Func Offset: 0x18
	// Line 2499, Address: 0x3e0de0, Func Offset: 0x20
	// Line 2500, Address: 0x3e0de4, Func Offset: 0x24
	// Line 2497, Address: 0x3e0dec, Func Offset: 0x2c
	// Line 2498, Address: 0x3e0df8, Func Offset: 0x38
	// Line 2500, Address: 0x3e0e08, Func Offset: 0x48
	// Line 2501, Address: 0x3e0e30, Func Offset: 0x70
	// Line 2500, Address: 0x3e0e34, Func Offset: 0x74
	// Line 2501, Address: 0x3e0e48, Func Offset: 0x88
	// Line 2500, Address: 0x3e0e4c, Func Offset: 0x8c
	// Line 2501, Address: 0x3e0e50, Func Offset: 0x90
	// Line 2500, Address: 0x3e0e54, Func Offset: 0x94
	// Line 2501, Address: 0x3e0e58, Func Offset: 0x98
	// Line 2502, Address: 0x3e0ea0, Func Offset: 0xe0
	// Line 2501, Address: 0x3e0eac, Func Offset: 0xec
	// Line 2502, Address: 0x3e0eb0, Func Offset: 0xf0
	// Line 2501, Address: 0x3e0ee0, Func Offset: 0x120
	// Line 2502, Address: 0x3e0eec, Func Offset: 0x12c
	// Line 2501, Address: 0x3e0f00, Func Offset: 0x140
	// Line 2502, Address: 0x3e0f08, Func Offset: 0x148
	// Func End, Address: 0x3e0f1c, Func Offset: 0x15c
}

// parse_tag_newline__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e0f20
void parse_tag_newline(jot& a, xtextbox& tb)
{
	// Line 2489, Address: 0x3e0f20, Func Offset: 0
	// Line 2490, Address: 0x3e0f24, Func Offset: 0x4
	// Line 2492, Address: 0x3e0f2c, Func Offset: 0xc
	// Line 2491, Address: 0x3e0f30, Func Offset: 0x10
	// Line 2492, Address: 0x3e0f34, Func Offset: 0x14
	// Line 2491, Address: 0x3e0f3c, Func Offset: 0x1c
	// Line 2490, Address: 0x3e0f40, Func Offset: 0x20
	// Line 2492, Address: 0x3e0f44, Func Offset: 0x24
	// Line 2491, Address: 0x3e0f48, Func Offset: 0x28
	// Line 2492, Address: 0x3e0f4c, Func Offset: 0x2c
	// Line 2490, Address: 0x3e0f50, Func Offset: 0x30
	// Line 2492, Address: 0x3e0f5c, Func Offset: 0x3c
	// Line 2491, Address: 0x3e0f60, Func Offset: 0x40
	// Line 2492, Address: 0x3e0f64, Func Offset: 0x44
	// Line 2491, Address: 0x3e0f68, Func Offset: 0x48
	// Line 2492, Address: 0x3e0f74, Func Offset: 0x54
	// Line 2493, Address: 0x3e0fac, Func Offset: 0x8c
	// Line 2492, Address: 0x3e0fb8, Func Offset: 0x98
	// Line 2493, Address: 0x3e0fbc, Func Offset: 0x9c
	// Line 2492, Address: 0x3e0fec, Func Offset: 0xcc
	// Line 2493, Address: 0x3e0ff8, Func Offset: 0xd8
	// Line 2492, Address: 0x3e100c, Func Offset: 0xec
	// Line 2493, Address: 0x3e1014, Func Offset: 0xf4
	// Func End, Address: 0x3e1028, Func Offset: 0x108
}

// parse_tag_open_curly__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1030
void parse_tag_open_curly(jot& a, xtextbox& tb, split_tag& ti)
{
	int8 c;
	// Line 2478, Address: 0x3e1030, Func Offset: 0
	// Line 2479, Address: 0x3e1034, Func Offset: 0x4
	// Line 2483, Address: 0x3e1038, Func Offset: 0x8
	// Line 2480, Address: 0x3e1040, Func Offset: 0x10
	// Line 2483, Address: 0x3e1044, Func Offset: 0x14
	// Line 2479, Address: 0x3e104c, Func Offset: 0x1c
	// Line 2483, Address: 0x3e1050, Func Offset: 0x20
	// Line 2480, Address: 0x3e1054, Func Offset: 0x24
	// Line 2483, Address: 0x3e1058, Func Offset: 0x28
	// Line 2481, Address: 0x3e105c, Func Offset: 0x2c
	// Line 2483, Address: 0x3e1060, Func Offset: 0x30
	// Line 2481, Address: 0x3e1064, Func Offset: 0x34
	// Line 2483, Address: 0x3e1068, Func Offset: 0x38
	// Line 2482, Address: 0x3e106c, Func Offset: 0x3c
	// Line 2483, Address: 0x3e1070, Func Offset: 0x40
	// Line 2485, Address: 0x3e109c, Func Offset: 0x6c
	// Line 2483, Address: 0x3e10a0, Func Offset: 0x70
	// Line 2485, Address: 0x3e10b0, Func Offset: 0x80
	// Line 2487, Address: 0x3e10b4, Func Offset: 0x84
	// Line 2483, Address: 0x3e10c0, Func Offset: 0x90
	// Line 2487, Address: 0x3e10c4, Func Offset: 0x94
	// Line 2483, Address: 0x3e10f4, Func Offset: 0xc4
	// Line 2487, Address: 0x3e1100, Func Offset: 0xd0
	// Line 2483, Address: 0x3e1114, Func Offset: 0xe4
	// Line 2487, Address: 0x3e111c, Func Offset: 0xec
	// Func End, Address: 0x3e1130, Func Offset: 0x100
}

// reset_tag_yjustify__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1130
void reset_tag_yjustify(jot& a)
{
	callback cb;
	// Line 2474, Address: 0x3e1130, Func Offset: 0
	// Line 2475, Address: 0x3e1138, Func Offset: 0x8
	// Func End, Address: 0x3e1140, Func Offset: 0x10
}

// parse_tag_yjustify__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1140
void parse_tag_yjustify(jot& a, split_tag& ti)
{
	uint32& flags;
	callback cb;
	// Line 2458, Address: 0x3e1140, Func Offset: 0
	// Line 2460, Address: 0x3e1144, Func Offset: 0x4
	// Line 2458, Address: 0x3e1148, Func Offset: 0x8
	// Line 2460, Address: 0x3e115c, Func Offset: 0x1c
	// Line 2462, Address: 0x3e1178, Func Offset: 0x38
	// Line 2461, Address: 0x3e117c, Func Offset: 0x3c
	// Line 2462, Address: 0x3e1180, Func Offset: 0x40
	// Line 2463, Address: 0x3e11d8, Func Offset: 0x98
	// Line 2469, Address: 0x3e11dc, Func Offset: 0x9c
	// Line 2470, Address: 0x3e11e4, Func Offset: 0xa4
	// Line 2464, Address: 0x3e11fc, Func Offset: 0xbc
	// Line 2470, Address: 0x3e1204, Func Offset: 0xc4
	// Line 2464, Address: 0x3e1218, Func Offset: 0xd8
	// Line 2470, Address: 0x3e121c, Func Offset: 0xdc
	// Line 2464, Address: 0x3e1228, Func Offset: 0xe8
	// Line 2470, Address: 0x3e122c, Func Offset: 0xec
	// Line 2465, Address: 0x3e1248, Func Offset: 0x108
	// Line 2470, Address: 0x3e1254, Func Offset: 0x114
	// Line 2466, Address: 0x3e1264, Func Offset: 0x124
	// Line 2470, Address: 0x3e126c, Func Offset: 0x12c
	// Line 2466, Address: 0x3e1288, Func Offset: 0x148
	// Line 2470, Address: 0x3e128c, Func Offset: 0x14c
	// Line 2466, Address: 0x3e1298, Func Offset: 0x158
	// Line 2470, Address: 0x3e129c, Func Offset: 0x15c
	// Line 2467, Address: 0x3e12b0, Func Offset: 0x170
	// Line 2470, Address: 0x3e12bc, Func Offset: 0x17c
	// Func End, Address: 0x3e12d4, Func Offset: 0x194
}

// update_tag_reset_yjustify__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e12e0
void update_tag_reset_yjustify(xtextbox& tb, xtextbox& ctb)
{
	// Line 2456, Address: 0x3e12e0, Func Offset: 0
	// Func End, Address: 0x3e1300, Func Offset: 0x20
}

// update_tag_yjustify__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1300
void update_tag_yjustify(jot& j, xtextbox& tb)
{
	// Line 2454, Address: 0x3e1300, Func Offset: 0
	// Func End, Address: 0x3e1320, Func Offset: 0x20
}

// reset_tag_xjustify__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1320
void reset_tag_xjustify(jot& a)
{
	callback cb;
	// Line 2450, Address: 0x3e1320, Func Offset: 0
	// Line 2451, Address: 0x3e1328, Func Offset: 0x8
	// Func End, Address: 0x3e1330, Func Offset: 0x10
}

// parse_tag_xjustify__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1330
void parse_tag_xjustify(jot& a, split_tag& ti)
{
	uint32& flags;
	callback cb;
	// Line 2434, Address: 0x3e1330, Func Offset: 0
	// Line 2436, Address: 0x3e1334, Func Offset: 0x4
	// Line 2434, Address: 0x3e1338, Func Offset: 0x8
	// Line 2436, Address: 0x3e134c, Func Offset: 0x1c
	// Line 2438, Address: 0x3e1368, Func Offset: 0x38
	// Line 2437, Address: 0x3e136c, Func Offset: 0x3c
	// Line 2438, Address: 0x3e1370, Func Offset: 0x40
	// Line 2439, Address: 0x3e13c8, Func Offset: 0x98
	// Line 2445, Address: 0x3e13cc, Func Offset: 0x9c
	// Line 2446, Address: 0x3e13d4, Func Offset: 0xa4
	// Line 2440, Address: 0x3e13ec, Func Offset: 0xbc
	// Line 2446, Address: 0x3e13f4, Func Offset: 0xc4
	// Line 2440, Address: 0x3e1408, Func Offset: 0xd8
	// Line 2446, Address: 0x3e140c, Func Offset: 0xdc
	// Line 2440, Address: 0x3e1418, Func Offset: 0xe8
	// Line 2446, Address: 0x3e141c, Func Offset: 0xec
	// Line 2441, Address: 0x3e1438, Func Offset: 0x108
	// Line 2446, Address: 0x3e1444, Func Offset: 0x114
	// Line 2442, Address: 0x3e1454, Func Offset: 0x124
	// Line 2446, Address: 0x3e145c, Func Offset: 0x12c
	// Line 2442, Address: 0x3e1478, Func Offset: 0x148
	// Line 2446, Address: 0x3e147c, Func Offset: 0x14c
	// Line 2442, Address: 0x3e1488, Func Offset: 0x158
	// Line 2446, Address: 0x3e148c, Func Offset: 0x15c
	// Line 2443, Address: 0x3e14a0, Func Offset: 0x170
	// Line 2446, Address: 0x3e14ac, Func Offset: 0x17c
	// Func End, Address: 0x3e14c4, Func Offset: 0x194
}

// update_tag_reset_xjustify__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e14d0
void update_tag_reset_xjustify(xtextbox& tb, xtextbox& ctb)
{
	// Line 2432, Address: 0x3e14d0, Func Offset: 0
	// Func End, Address: 0x3e14f0, Func Offset: 0x20
}

// update_tag_xjustify__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e14f0
void update_tag_xjustify(jot& j, xtextbox& tb)
{
	// Line 2430, Address: 0x3e14f0, Func Offset: 0
	// Func End, Address: 0x3e1510, Func Offset: 0x20
}

// reset_tag_wrap__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1510
void reset_tag_wrap(jot& a)
{
	callback cb;
	// Line 2426, Address: 0x3e1510, Func Offset: 0
	// Line 2427, Address: 0x3e1518, Func Offset: 0x8
	// Func End, Address: 0x3e1520, Func Offset: 0x10
}

// parse_tag_wrap__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1520
void parse_tag_wrap(jot& a, split_tag& ti)
{
	uint32& flags;
	callback cb;
	// Line 2412, Address: 0x3e1520, Func Offset: 0
	// Line 2414, Address: 0x3e1524, Func Offset: 0x4
	// Line 2412, Address: 0x3e1528, Func Offset: 0x8
	// Line 2414, Address: 0x3e153c, Func Offset: 0x1c
	// Line 2417, Address: 0x3e1568, Func Offset: 0x48
	// Line 2421, Address: 0x3e1588, Func Offset: 0x68
	// Line 2422, Address: 0x3e1590, Func Offset: 0x70
	// Line 2418, Address: 0x3e15b4, Func Offset: 0x94
	// Line 2422, Address: 0x3e15c0, Func Offset: 0xa0
	// Line 2419, Address: 0x3e15dc, Func Offset: 0xbc
	// Line 2422, Address: 0x3e15e8, Func Offset: 0xc8
	// Func End, Address: 0x3e1600, Func Offset: 0xe0
}

// update_tag_reset_wrap__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1600
void update_tag_reset_wrap(xtextbox& tb, xtextbox& ctb)
{
	// Line 2410, Address: 0x3e1600, Func Offset: 0
	// Func End, Address: 0x3e1620, Func Offset: 0x20
}

// update_tag_wrap__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1620
void update_tag_wrap(jot& j, xtextbox& tb)
{
	// Line 2408, Address: 0x3e1620, Func Offset: 0
	// Func End, Address: 0x3e1640, Func Offset: 0x20
}

// reset_tag_font__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1640
void reset_tag_font(jot& a)
{
	callback cb;
	// Line 2404, Address: 0x3e1640, Func Offset: 0
	// Line 2405, Address: 0x3e1648, Func Offset: 0x8
	// Func End, Address: 0x3e1650, Func Offset: 0x10
}

// parse_tag_font__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1650
void parse_tag_font(jot& a, split_tag& ti)
{
	uint32& id;
	callback cb;
	// Line 2392, Address: 0x3e1650, Func Offset: 0
	// Line 2394, Address: 0x3e1654, Func Offset: 0x4
	// Line 2392, Address: 0x3e1658, Func Offset: 0x8
	// Line 2394, Address: 0x3e1664, Func Offset: 0x14
	// Line 2397, Address: 0x3e168c, Func Offset: 0x3c
	// Line 2398, Address: 0x3e169c, Func Offset: 0x4c
	// Line 2399, Address: 0x3e16b8, Func Offset: 0x68
	// Line 2400, Address: 0x3e16c4, Func Offset: 0x74
	// Func End, Address: 0x3e16d8, Func Offset: 0x88
}

// update_tag_reset_font__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e16e0
void update_tag_reset_font(xtextbox& tb, xtextbox& ctb)
{
	// Line 2390, Address: 0x3e16e0, Func Offset: 0
	// Func End, Address: 0x3e16ec, Func Offset: 0xc
}

// update_tag_font__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e16f0
void update_tag_font(jot& j, xtextbox& tb)
{
	// Line 2388, Address: 0x3e16f0, Func Offset: 0
	// Func End, Address: 0x3e16fc, Func Offset: 0xc
}

// reset_tag_color__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1700
void reset_tag_color(jot& a)
{
	callback cb;
	// Line 2384, Address: 0x3e1700, Func Offset: 0
	// Line 2385, Address: 0x3e1708, Func Offset: 0x8
	// Func End, Address: 0x3e1710, Func Offset: 0x10
}

// parse_tag_color__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1710
void parse_tag_color(jot& a, xtextbox& tb, split_tag& ti)
{
	xColor_tag& color;
	uint32 v;
	uint32 temp;
	callback cb;
	// Line 2342, Address: 0x3e1710, Func Offset: 0
	// Line 2345, Address: 0x3e1714, Func Offset: 0x4
	// Line 2342, Address: 0x3e1718, Func Offset: 0x8
	// Line 2345, Address: 0x3e1734, Func Offset: 0x24
	// Line 2347, Address: 0x3e174c, Func Offset: 0x3c
	// Line 2348, Address: 0x3e1758, Func Offset: 0x48
	// Line 2349, Address: 0x3e177c, Func Offset: 0x6c
	// Line 2352, Address: 0x3e17ac, Func Offset: 0x9c
	// Line 2353, Address: 0x3e17b0, Func Offset: 0xa0
	// Line 2352, Address: 0x3e17b4, Func Offset: 0xa4
	// Line 2354, Address: 0x3e17b8, Func Offset: 0xa8
	// Line 2353, Address: 0x3e17bc, Func Offset: 0xac
	// Line 2354, Address: 0x3e17c0, Func Offset: 0xb0
	// Line 2356, Address: 0x3e17c4, Func Offset: 0xb4
	// Line 2360, Address: 0x3e17cc, Func Offset: 0xbc
	// Line 2361, Address: 0x3e17dc, Func Offset: 0xcc
	// Line 2362, Address: 0x3e17f0, Func Offset: 0xe0
	// Line 2363, Address: 0x3e1800, Func Offset: 0xf0
	// Line 2364, Address: 0x3e1814, Func Offset: 0x104
	// Line 2365, Address: 0x3e1824, Func Offset: 0x114
	// Line 2366, Address: 0x3e1838, Func Offset: 0x128
	// Line 2367, Address: 0x3e1844, Func Offset: 0x134
	// Line 2369, Address: 0x3e1854, Func Offset: 0x144
	// Line 2371, Address: 0x3e185c, Func Offset: 0x14c
	// Line 2373, Address: 0x3e1864, Func Offset: 0x154
	// Line 2371, Address: 0x3e1868, Func Offset: 0x158
	// Line 2373, Address: 0x3e186c, Func Offset: 0x15c
	// Line 2371, Address: 0x3e1870, Func Offset: 0x160
	// Line 2372, Address: 0x3e1874, Func Offset: 0x164
	// Line 2373, Address: 0x3e187c, Func Offset: 0x16c
	// Line 2372, Address: 0x3e1880, Func Offset: 0x170
	// Line 2374, Address: 0x3e1884, Func Offset: 0x174
	// Line 2371, Address: 0x3e1888, Func Offset: 0x178
	// Line 2374, Address: 0x3e188c, Func Offset: 0x17c
	// Line 2372, Address: 0x3e1890, Func Offset: 0x180
	// Line 2371, Address: 0x3e1894, Func Offset: 0x184
	// Line 2374, Address: 0x3e1898, Func Offset: 0x188
	// Line 2371, Address: 0x3e18a4, Func Offset: 0x194
	// Line 2372, Address: 0x3e18a8, Func Offset: 0x198
	// Line 2371, Address: 0x3e18ac, Func Offset: 0x19c
	// Line 2372, Address: 0x3e18b4, Func Offset: 0x1a4
	// Line 2373, Address: 0x3e18b8, Func Offset: 0x1a8
	// Line 2372, Address: 0x3e18c0, Func Offset: 0x1b0
	// Line 2373, Address: 0x3e18c8, Func Offset: 0x1b8
	// Line 2374, Address: 0x3e18cc, Func Offset: 0x1bc
	// Line 2373, Address: 0x3e18d0, Func Offset: 0x1c0
	// Line 2374, Address: 0x3e18d8, Func Offset: 0x1c8
	// Line 2379, Address: 0x3e18e4, Func Offset: 0x1d4
	// Line 2380, Address: 0x3e18f0, Func Offset: 0x1e0
	// Func End, Address: 0x3e190c, Func Offset: 0x1fc
}

// update_tag_reset_color__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1910
void update_tag_reset_color(xtextbox& tb, xtextbox& ctb)
{
	// Line 2340, Address: 0x3e1910, Func Offset: 0
	// Func End, Address: 0x3e1934, Func Offset: 0x24
}

// update_tag_color__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1940
void update_tag_color(jot& j, xtextbox& tb)
{
	// Line 2335, Address: 0x3e1940, Func Offset: 0
	// Line 2336, Address: 0x3e1944, Func Offset: 0x4
	// Line 2337, Address: 0x3e1948, Func Offset: 0x8
	// Line 2335, Address: 0x3e194c, Func Offset: 0xc
	// Line 2336, Address: 0x3e1950, Func Offset: 0x10
	// Line 2338, Address: 0x3e1954, Func Offset: 0x14
	// Func End, Address: 0x3e195c, Func Offset: 0x1c
}

// reset_tag_all__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1960
void reset_tag_all(jot& j)
{
	callback cb;
	// Line 2330, Address: 0x3e1960, Func Offset: 0
	// Line 2331, Address: 0x3e1968, Func Offset: 0x8
	// Func End, Address: 0x3e1970, Func Offset: 0x10
}

// update_tag_reset_all__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1970
void update_tag_reset_all(xtextbox& tb, xtextbox& ctb)
{
	// Line 2326, Address: 0x3e1970, Func Offset: 0
	// Func End, Address: 0x3e1a5c, Func Offset: 0xec
}

// reset_tag_yspace__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1a60
void reset_tag_yspace(jot& a)
{
	callback cb;
	// Line 2319, Address: 0x3e1a60, Func Offset: 0
	// Func End, Address: 0x3e1a70, Func Offset: 0x10
}

// parse_tag_yspace__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1a70
void parse_tag_yspace(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2319, Address: 0x3e1a70, Func Offset: 0
	// Func End, Address: 0x3e1b88, Func Offset: 0x118
}

// update_tag_reset_yspace__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1b90
void update_tag_reset_yspace(xtextbox& tb, xtextbox& ctb)
{
	// Line 2319, Address: 0x3e1b90, Func Offset: 0
	// Func End, Address: 0x3e1b9c, Func Offset: 0xc
}

// update_tag_yspace__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1ba0
void update_tag_yspace(jot& j, xtextbox& tb)
{
	// Line 2319, Address: 0x3e1ba0, Func Offset: 0
	// Func End, Address: 0x3e1bac, Func Offset: 0xc
}

// reset_tag_xspace__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1bb0
void reset_tag_xspace(jot& a)
{
	callback cb;
	// Line 2318, Address: 0x3e1bb0, Func Offset: 0
	// Func End, Address: 0x3e1bc0, Func Offset: 0x10
}

// parse_tag_xspace__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1bc0
void parse_tag_xspace(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2318, Address: 0x3e1bc0, Func Offset: 0
	// Func End, Address: 0x3e1cd8, Func Offset: 0x118
}

// update_tag_reset_xspace__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1ce0
void update_tag_reset_xspace(xtextbox& tb, xtextbox& ctb)
{
	// Line 2318, Address: 0x3e1ce0, Func Offset: 0
	// Func End, Address: 0x3e1cec, Func Offset: 0xc
}

// update_tag_xspace__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1cf0
void update_tag_xspace(jot& j, xtextbox& tb)
{
	// Line 2318, Address: 0x3e1cf0, Func Offset: 0
	// Func End, Address: 0x3e1cfc, Func Offset: 0xc
}

// reset_tag_tab_stop__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1d00
void reset_tag_tab_stop(jot& a)
{
	callback cb;
	// Line 2317, Address: 0x3e1d00, Func Offset: 0
	// Func End, Address: 0x3e1d10, Func Offset: 0x10
}

// parse_tag_tab_stop__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1d10
void parse_tag_tab_stop(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2317, Address: 0x3e1d10, Func Offset: 0
	// Func End, Address: 0x3e1e24, Func Offset: 0x114
}

// update_tag_reset_tab_stop__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1e30
void update_tag_reset_tab_stop(xtextbox& tb, xtextbox& ctb)
{
	// Line 2317, Address: 0x3e1e30, Func Offset: 0
	// Func End, Address: 0x3e1e3c, Func Offset: 0xc
}

// update_tag_tab_stop__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1e40
void update_tag_tab_stop(jot& j, xtextbox& tb)
{
	// Line 2317, Address: 0x3e1e40, Func Offset: 0
	// Func End, Address: 0x3e1e4c, Func Offset: 0xc
}

// reset_tag_right_indent__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1e50
void reset_tag_right_indent(jot& a)
{
	callback cb;
	// Line 2316, Address: 0x3e1e50, Func Offset: 0
	// Func End, Address: 0x3e1e60, Func Offset: 0x10
}

// parse_tag_right_indent__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1e60
void parse_tag_right_indent(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2316, Address: 0x3e1e60, Func Offset: 0
	// Func End, Address: 0x3e1f78, Func Offset: 0x118
}

// update_tag_reset_right_indent__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1f80
void update_tag_reset_right_indent(xtextbox& tb, xtextbox& ctb)
{
	// Line 2316, Address: 0x3e1f80, Func Offset: 0
	// Func End, Address: 0x3e1f8c, Func Offset: 0xc
}

// update_tag_right_indent__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e1f90
void update_tag_right_indent(jot& j, xtextbox& tb)
{
	// Line 2316, Address: 0x3e1f90, Func Offset: 0
	// Func End, Address: 0x3e1f9c, Func Offset: 0xc
}

// reset_tag_left_indent__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1fa0
void reset_tag_left_indent(jot& a)
{
	callback cb;
	// Line 2315, Address: 0x3e1fa0, Func Offset: 0
	// Func End, Address: 0x3e1fb0, Func Offset: 0x10
}

// parse_tag_left_indent__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e1fb0
void parse_tag_left_indent(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2315, Address: 0x3e1fb0, Func Offset: 0
	// Func End, Address: 0x3e20c8, Func Offset: 0x118
}

// update_tag_reset_left_indent__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e20d0
void update_tag_reset_left_indent(xtextbox& tb, xtextbox& ctb)
{
	// Line 2315, Address: 0x3e20d0, Func Offset: 0
	// Func End, Address: 0x3e20dc, Func Offset: 0xc
}

// update_tag_left_indent__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e20e0
void update_tag_left_indent(jot& j, xtextbox& tb)
{
	// Line 2315, Address: 0x3e20e0, Func Offset: 0
	// Func End, Address: 0x3e20ec, Func Offset: 0xc
}

// reset_tag_height__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e20f0
void reset_tag_height(jot& a)
{
	callback cb;
	// Line 2314, Address: 0x3e20f0, Func Offset: 0
	// Func End, Address: 0x3e2100, Func Offset: 0x10
}

// parse_tag_height__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2100
void parse_tag_height(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2314, Address: 0x3e2100, Func Offset: 0
	// Func End, Address: 0x3e2214, Func Offset: 0x114
}

// update_tag_reset_height__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2220
void update_tag_reset_height(xtextbox& tb, xtextbox& ctb)
{
	// Line 2314, Address: 0x3e2220, Func Offset: 0
	// Func End, Address: 0x3e222c, Func Offset: 0xc
}

// update_tag_height__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2230
void update_tag_height(jot& j, xtextbox& tb)
{
	// Line 2314, Address: 0x3e2230, Func Offset: 0
	// Func End, Address: 0x3e223c, Func Offset: 0xc
}

// reset_tag_width__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2240
void reset_tag_width(jot& a)
{
	callback cb;
	// Line 2313, Address: 0x3e2240, Func Offset: 0
	// Func End, Address: 0x3e2250, Func Offset: 0x10
}

// parse_tag_width__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2250
void parse_tag_width(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2313, Address: 0x3e2250, Func Offset: 0
	// Func End, Address: 0x3e2364, Func Offset: 0x114
}

// update_tag_reset_width__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2370
void update_tag_reset_width(xtextbox& tb, xtextbox& ctb)
{
	// Line 2313, Address: 0x3e2370, Func Offset: 0
	// Func End, Address: 0x3e237c, Func Offset: 0xc
}

// update_tag_width__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2380
void update_tag_width(jot& j, xtextbox& tb)
{
	// Line 2313, Address: 0x3e2380, Func Offset: 0
	// Func End, Address: 0x3e238c, Func Offset: 0xc
}

// reset_tag_sblue__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2390
void reset_tag_sblue(jot& a)
{
	callback cb;
	// Line 2312, Address: 0x3e2390, Func Offset: 0
	// Func End, Address: 0x3e23a0, Func Offset: 0x10
}

// parse_tag_sblue__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e23a0
void parse_tag_sblue(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2312, Address: 0x3e23a0, Func Offset: 0
	// Func End, Address: 0x3e2538, Func Offset: 0x198
}

// update_tag_reset_sblue__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2540
void update_tag_reset_sblue(xtextbox& tb, xtextbox& ctb)
{
	// Line 2312, Address: 0x3e2540, Func Offset: 0
	// Func End, Address: 0x3e254c, Func Offset: 0xc
}

// update_tag_sblue__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2550
void update_tag_sblue(jot& j, xtextbox& tb)
{
	// Line 2312, Address: 0x3e2550, Func Offset: 0
	// Func End, Address: 0x3e25bc, Func Offset: 0x6c
}

// reset_tag_sgreen__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e25c0
void reset_tag_sgreen(jot& a)
{
	callback cb;
	// Line 2311, Address: 0x3e25c0, Func Offset: 0
	// Func End, Address: 0x3e25d0, Func Offset: 0x10
}

// parse_tag_sgreen__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e25d0
void parse_tag_sgreen(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2311, Address: 0x3e25d0, Func Offset: 0
	// Func End, Address: 0x3e2768, Func Offset: 0x198
}

// update_tag_reset_sgreen__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2770
void update_tag_reset_sgreen(xtextbox& tb, xtextbox& ctb)
{
	// Line 2311, Address: 0x3e2770, Func Offset: 0
	// Func End, Address: 0x3e277c, Func Offset: 0xc
}

// update_tag_sgreen__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2780
void update_tag_sgreen(jot& j, xtextbox& tb)
{
	// Line 2311, Address: 0x3e2780, Func Offset: 0
	// Func End, Address: 0x3e27ec, Func Offset: 0x6c
}

// reset_tag_sred__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e27f0
void reset_tag_sred(jot& a)
{
	callback cb;
	// Line 2310, Address: 0x3e27f0, Func Offset: 0
	// Func End, Address: 0x3e2800, Func Offset: 0x10
}

// parse_tag_sred__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2800
void parse_tag_sred(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2310, Address: 0x3e2800, Func Offset: 0
	// Func End, Address: 0x3e2998, Func Offset: 0x198
}

// update_tag_reset_sred__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e29a0
void update_tag_reset_sred(xtextbox& tb, xtextbox& ctb)
{
	// Line 2310, Address: 0x3e29a0, Func Offset: 0
	// Func End, Address: 0x3e29ac, Func Offset: 0xc
}

// update_tag_sred__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e29b0
void update_tag_sred(jot& j, xtextbox& tb)
{
	// Line 2310, Address: 0x3e29b0, Func Offset: 0
	// Func End, Address: 0x3e2a1c, Func Offset: 0x6c
}

// reset_tag_salpha__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2a20
void reset_tag_salpha(jot& a)
{
	callback cb;
	// Line 2309, Address: 0x3e2a20, Func Offset: 0
	// Func End, Address: 0x3e2a30, Func Offset: 0x10
}

// parse_tag_salpha__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2a30
void parse_tag_salpha(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2309, Address: 0x3e2a30, Func Offset: 0
	// Func End, Address: 0x3e2bc8, Func Offset: 0x198
}

// update_tag_reset_salpha__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2bd0
void update_tag_reset_salpha(xtextbox& tb, xtextbox& ctb)
{
	// Line 2309, Address: 0x3e2bd0, Func Offset: 0
	// Func End, Address: 0x3e2bdc, Func Offset: 0xc
}

// update_tag_salpha__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2be0
void update_tag_salpha(jot& j, xtextbox& tb)
{
	// Line 2309, Address: 0x3e2be0, Func Offset: 0
	// Func End, Address: 0x3e2c4c, Func Offset: 0x6c
}

// reset_tag_blue__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2c50
void reset_tag_blue(jot& a)
{
	callback cb;
	// Line 2308, Address: 0x3e2c50, Func Offset: 0
	// Func End, Address: 0x3e2c60, Func Offset: 0x10
}

// parse_tag_blue__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2c60
void parse_tag_blue(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2308, Address: 0x3e2c60, Func Offset: 0
	// Func End, Address: 0x3e2df8, Func Offset: 0x198
}

// update_tag_reset_blue__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2e00
void update_tag_reset_blue(xtextbox& tb, xtextbox& ctb)
{
	// Line 2308, Address: 0x3e2e00, Func Offset: 0
	// Func End, Address: 0x3e2e0c, Func Offset: 0xc
}

// update_tag_blue__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e2e10
void update_tag_blue(jot& j, xtextbox& tb)
{
	// Line 2308, Address: 0x3e2e10, Func Offset: 0
	// Func End, Address: 0x3e2e7c, Func Offset: 0x6c
}

// reset_tag_green__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2e80
void reset_tag_green(jot& a)
{
	callback cb;
	// Line 2307, Address: 0x3e2e80, Func Offset: 0
	// Func End, Address: 0x3e2e90, Func Offset: 0x10
}

// parse_tag_green__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e2e90
void parse_tag_green(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2307, Address: 0x3e2e90, Func Offset: 0
	// Func End, Address: 0x3e3028, Func Offset: 0x198
}

// update_tag_reset_green__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e3030
void update_tag_reset_green(xtextbox& tb, xtextbox& ctb)
{
	// Line 2307, Address: 0x3e3030, Func Offset: 0
	// Func End, Address: 0x3e303c, Func Offset: 0xc
}

// update_tag_green__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e3040
void update_tag_green(jot& j, xtextbox& tb)
{
	// Line 2307, Address: 0x3e3040, Func Offset: 0
	// Func End, Address: 0x3e30ac, Func Offset: 0x6c
}

// reset_tag_red__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e30b0
void reset_tag_red(jot& a)
{
	callback cb;
	// Line 2306, Address: 0x3e30b0, Func Offset: 0
	// Func End, Address: 0x3e30c0, Func Offset: 0x10
}

// parse_tag_red__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e30c0
void parse_tag_red(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2306, Address: 0x3e30c0, Func Offset: 0
	// Func End, Address: 0x3e3258, Func Offset: 0x198
}

// update_tag_reset_red__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e3260
void update_tag_reset_red(xtextbox& tb, xtextbox& ctb)
{
	// Line 2306, Address: 0x3e3260, Func Offset: 0
	// Func End, Address: 0x3e326c, Func Offset: 0xc
}

// update_tag_red__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e3270
void update_tag_red(jot& j, xtextbox& tb)
{
	// Line 2306, Address: 0x3e3270, Func Offset: 0
	// Func End, Address: 0x3e32dc, Func Offset: 0x6c
}

// reset_tag_alpha__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e32e0
void reset_tag_alpha(jot& a)
{
	callback cb;
	// Line 2305, Address: 0x3e32e0, Func Offset: 0
	// Func End, Address: 0x3e32f0, Func Offset: 0x10
}

// parse_tag_alpha__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x3e32f0
void parse_tag_alpha(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 2305, Address: 0x3e32f0, Func Offset: 0
	// Func End, Address: 0x3e3488, Func Offset: 0x198
}

// update_tag_reset_alpha__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e3490
void update_tag_reset_alpha(xtextbox& tb, xtextbox& ctb)
{
	// Line 2305, Address: 0x3e3490, Func Offset: 0
	// Func End, Address: 0x3e349c, Func Offset: 0xc
}

// update_tag_alpha__19@unnamed@xWad2_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x3e34a0
void update_tag_alpha(jot& j, xtextbox& tb)
{
	// Line 2305, Address: 0x3e34a0, Func Offset: 0
	// Func End, Address: 0x3e350c, Func Offset: 0x6c
}

// changed__Q28xtextbox6layoutFRC8xtextbox
// Start address: 0x3e3510
uint8 layout::changed(xtextbox& ctb)
{
	uint32 flags1;
	uint32 flags2;
	int32 i;
	jot& j;
	uint32 oldval;
	uint32 val;
	// Line 2230, Address: 0x3e3510, Func Offset: 0
	// Line 2233, Address: 0x3e3514, Func Offset: 0x4
	// Line 2230, Address: 0x3e3518, Func Offset: 0x8
	// Line 2231, Address: 0x3e3544, Func Offset: 0x34
	// Line 2233, Address: 0x3e3548, Func Offset: 0x38
	// Line 2232, Address: 0x3e354c, Func Offset: 0x3c
	// Line 2231, Address: 0x3e3550, Func Offset: 0x40
	// Line 2233, Address: 0x3e3554, Func Offset: 0x44
	// Line 2244, Address: 0x3e35d8, Func Offset: 0xc8
	// Line 2253, Address: 0x3e35e8, Func Offset: 0xd8
	// Line 2241, Address: 0x3e35f0, Func Offset: 0xe0
	// Line 2253, Address: 0x3e3600, Func Offset: 0xf0
	// Line 2247, Address: 0x3e3618, Func Offset: 0x108
	// Line 2253, Address: 0x3e361c, Func Offset: 0x10c
	// Line 2247, Address: 0x3e3620, Func Offset: 0x110
	// Line 2253, Address: 0x3e3624, Func Offset: 0x114
	// Line 2248, Address: 0x3e363c, Func Offset: 0x12c
	// Line 2249, Address: 0x3e3640, Func Offset: 0x130
	// Line 2253, Address: 0x3e3644, Func Offset: 0x134
	// Line 2249, Address: 0x3e3650, Func Offset: 0x140
	// Line 2253, Address: 0x3e3660, Func Offset: 0x150
	// Line 2249, Address: 0x3e3670, Func Offset: 0x160
	// Line 2253, Address: 0x3e3680, Func Offset: 0x170
	// Line 2249, Address: 0x3e368c, Func Offset: 0x17c
	// Line 2253, Address: 0x3e3694, Func Offset: 0x184
	// Line 2249, Address: 0x3e36a4, Func Offset: 0x194
	// Line 2253, Address: 0x3e36a8, Func Offset: 0x198
	// Line 2249, Address: 0x3e36b4, Func Offset: 0x1a4
	// Line 2253, Address: 0x3e36c8, Func Offset: 0x1b8
	// Line 2251, Address: 0x3e36f0, Func Offset: 0x1e0
	// Line 2254, Address: 0x3e36f4, Func Offset: 0x1e4
	// Func End, Address: 0x3e3720, Func Offset: 0x210
}

// yextent__Q28xtextbox6layoutCFfRiii
// Start address: 0x3e3720
float32 layout::yextent(float32 max, int32& size, int32 begin_jot, int32 end_jot)
{
	int32 begin_line;
	float32 top;
	int32 i;
	jot_line& line;
	jot_line& line;
	// Line 2196, Address: 0x3e3720, Func Offset: 0
	// Line 2197, Address: 0x3e3728, Func Offset: 0x8
	// Line 2198, Address: 0x3e3738, Func Offset: 0x18
	// Line 2201, Address: 0x3e3744, Func Offset: 0x24
	// Line 2204, Address: 0x3e3758, Func Offset: 0x38
	// Line 2205, Address: 0x3e3770, Func Offset: 0x50
	// Line 2207, Address: 0x3e3784, Func Offset: 0x64
	// Line 2198, Address: 0x3e3798, Func Offset: 0x78
	// Line 2212, Address: 0x3e37a8, Func Offset: 0x88
	// Line 2210, Address: 0x3e37ac, Func Offset: 0x8c
	// Line 2211, Address: 0x3e37b4, Func Offset: 0x94
	// Line 2215, Address: 0x3e37b8, Func Offset: 0x98
	// Line 2217, Address: 0x3e37c0, Func Offset: 0xa0
	// Line 2218, Address: 0x3e37d8, Func Offset: 0xb8
	// Line 2219, Address: 0x3e37e8, Func Offset: 0xc8
	// Line 2221, Address: 0x3e37f8, Func Offset: 0xd8
	// Line 2223, Address: 0x3e3804, Func Offset: 0xe4
	// Line 2224, Address: 0x3e3810, Func Offset: 0xf0
	// Line 2225, Address: 0x3e3820, Func Offset: 0x100
	// Line 2226, Address: 0x3e3828, Func Offset: 0x108
	// Line 2225, Address: 0x3e382c, Func Offset: 0x10c
	// Line 2226, Address: 0x3e3830, Func Offset: 0x110
	// Line 2225, Address: 0x3e3834, Func Offset: 0x114
	// Line 2226, Address: 0x3e3838, Func Offset: 0x118
	// Line 2223, Address: 0x3e3844, Func Offset: 0x124
	// Line 2227, Address: 0x3e3848, Func Offset: 0x128
	// Func End, Address: 0x3e3850, Func Offset: 0x130
}

// render__Q28xtextbox6layoutFRC8xtextboxii
// Start address: 0x3e3850
void layout::render(xtextbox& ctb, int32 begin_jot, int32 end_jot)
{
	int32 begin_line;
	int32 i;
	jot& j;
	float32 top;
	uint32 li;
	int32 line_last;
	float32 x;
	float32 y;
	int32 i;
	jot_line& line;
	uint32 xj;
	uint32 yj;
	jot& j;
	// Line 2126, Address: 0x3e3850, Func Offset: 0
	// Line 2127, Address: 0x3e3894, Func Offset: 0x44
	// Line 2128, Address: 0x3e389c, Func Offset: 0x4c
	// Line 2129, Address: 0x3e38ac, Func Offset: 0x5c
	// Line 2130, Address: 0x3e38c8, Func Offset: 0x78
	// Line 2131, Address: 0x3e3904, Func Offset: 0xb4
	// Line 2130, Address: 0x3e3908, Func Offset: 0xb8
	// Line 2131, Address: 0x3e390c, Func Offset: 0xbc
	// Line 2130, Address: 0x3e3910, Func Offset: 0xc0
	// Line 2131, Address: 0x3e3914, Func Offset: 0xc4
	// Line 2130, Address: 0x3e3918, Func Offset: 0xc8
	// Line 2131, Address: 0x3e391c, Func Offset: 0xcc
	// Line 2130, Address: 0x3e3920, Func Offset: 0xd0
	// Line 2131, Address: 0x3e3924, Func Offset: 0xd4
	// Line 2130, Address: 0x3e3928, Func Offset: 0xd8
	// Line 2131, Address: 0x3e3964, Func Offset: 0x114
	// Line 2130, Address: 0x3e396c, Func Offset: 0x11c
	// Line 2131, Address: 0x3e3970, Func Offset: 0x120
	// Line 2130, Address: 0x3e3974, Func Offset: 0x124
	// Line 2131, Address: 0x3e3978, Func Offset: 0x128
	// Line 2130, Address: 0x3e397c, Func Offset: 0x12c
	// Line 2131, Address: 0x3e3984, Func Offset: 0x134
	// Line 2130, Address: 0x3e3988, Func Offset: 0x138
	// Line 2131, Address: 0x3e39d8, Func Offset: 0x188
	// Line 2135, Address: 0x3e39fc, Func Offset: 0x1ac
	// Line 2138, Address: 0x3e3a10, Func Offset: 0x1c0
	// Line 2139, Address: 0x3e3a20, Func Offset: 0x1d0
	// Line 2140, Address: 0x3e3ae0, Func Offset: 0x290
	// Line 2142, Address: 0x3e3ae8, Func Offset: 0x298
	// Line 2144, Address: 0x3e3afc, Func Offset: 0x2ac
	// Line 2139, Address: 0x3e3b14, Func Offset: 0x2c4
	// Line 2144, Address: 0x3e3b18, Func Offset: 0x2c8
	// Line 2147, Address: 0x3e3b28, Func Offset: 0x2d8
	// Line 2149, Address: 0x3e3b34, Func Offset: 0x2e4
	// Line 2150, Address: 0x3e3b38, Func Offset: 0x2e8
	// Line 2151, Address: 0x3e3b4c, Func Offset: 0x2fc
	// Line 2152, Address: 0x3e3b54, Func Offset: 0x304
	// Line 2155, Address: 0x3e3b68, Func Offset: 0x318
	// Line 2159, Address: 0x3e3b70, Func Offset: 0x320
	// Line 2155, Address: 0x3e3b74, Func Offset: 0x324
	// Line 2156, Address: 0x3e3b78, Func Offset: 0x328
	// Line 2158, Address: 0x3e3b7c, Func Offset: 0x32c
	// Line 2157, Address: 0x3e3b80, Func Offset: 0x330
	// Line 2159, Address: 0x3e3b84, Func Offset: 0x334
	// Line 2161, Address: 0x3e3ba4, Func Offset: 0x354
	// Line 2163, Address: 0x3e3bb4, Func Offset: 0x364
	// Line 2168, Address: 0x3e3bb8, Func Offset: 0x368
	// Line 2166, Address: 0x3e3bbc, Func Offset: 0x36c
	// Line 2168, Address: 0x3e3bc0, Func Offset: 0x370
	// Line 2165, Address: 0x3e3bc4, Func Offset: 0x374
	// Line 2168, Address: 0x3e3bc8, Func Offset: 0x378
	// Line 2167, Address: 0x3e3bcc, Func Offset: 0x37c
	// Line 2168, Address: 0x3e3bd4, Func Offset: 0x384
	// Line 2167, Address: 0x3e3be0, Func Offset: 0x390
	// Line 2169, Address: 0x3e3be4, Func Offset: 0x394
	// Line 2171, Address: 0x3e3c1c, Func Offset: 0x3cc
	// Line 2169, Address: 0x3e3c20, Func Offset: 0x3d0
	// Line 2170, Address: 0x3e3c24, Func Offset: 0x3d4
	// Line 2171, Address: 0x3e3c28, Func Offset: 0x3d8
	// Line 2173, Address: 0x3e3c30, Func Offset: 0x3e0
	// Line 2174, Address: 0x3e3c3c, Func Offset: 0x3ec
	// Line 2175, Address: 0x3e3c50, Func Offset: 0x400
	// Line 2176, Address: 0x3e3c54, Func Offset: 0x404
	// Line 2178, Address: 0x3e3c60, Func Offset: 0x410
	// Line 2179, Address: 0x3e3c74, Func Offset: 0x424
	// Line 2180, Address: 0x3e3cf0, Func Offset: 0x4a0
	// Line 2182, Address: 0x3e3d08, Func Offset: 0x4b8
	// Line 2183, Address: 0x3e3d0c, Func Offset: 0x4bc
	// Line 2184, Address: 0x3e3d18, Func Offset: 0x4c8
	// Line 2185, Address: 0x3e3d20, Func Offset: 0x4d0
	// Line 2186, Address: 0x3e3d30, Func Offset: 0x4e0
	// Line 2187, Address: 0x3e3d5c, Func Offset: 0x50c
	// Line 2188, Address: 0x3e3d74, Func Offset: 0x524
	// Line 2190, Address: 0x3e3d8c, Func Offset: 0x53c
	// Line 2191, Address: 0x3e3e4c, Func Offset: 0x5fc
	// Line 2172, Address: 0x3e3e58, Func Offset: 0x608
	// Line 2191, Address: 0x3e3e5c, Func Offset: 0x60c
	// Line 2172, Address: 0x3e3e60, Func Offset: 0x610
	// Line 2191, Address: 0x3e3e78, Func Offset: 0x628
	// Line 2177, Address: 0x3e3e90, Func Offset: 0x640
	// Line 2191, Address: 0x3e3eb4, Func Offset: 0x664
	// Line 2177, Address: 0x3e3ebc, Func Offset: 0x66c
	// Line 2191, Address: 0x3e3ee0, Func Offset: 0x690
	// Line 2177, Address: 0x3e3ee4, Func Offset: 0x694
	// Line 2191, Address: 0x3e3ee8, Func Offset: 0x698
	// Line 2177, Address: 0x3e3eec, Func Offset: 0x69c
	// Line 2191, Address: 0x3e3f10, Func Offset: 0x6c0
	// Line 2190, Address: 0x3e3f1c, Func Offset: 0x6cc
	// Line 2191, Address: 0x3e3f20, Func Offset: 0x6d0
	// Func End, Address: 0x3e3f6c, Func Offset: 0x71c
}

// calc__Q28xtextbox6layoutFRC8xtextboxUi
// Start address: 0x3e3f70
void layout::calc(xtextbox& ctb, uint32 start_text)
{
	jot_line& first_line;
	_class_24 text_stack[16];
	uint32 text_stack_size;
	uint32 text_index;
	int8* s;
	int8* end;
	jot& a;
	jot_line& line;
	jot_line& last_line;
	uint32 i;
	// Line 1996, Address: 0x3e3f70, Func Offset: 0
	// Line 1997, Address: 0x3e3fa0, Func Offset: 0x30
	// Line 1999, Address: 0x3e3fa8, Func Offset: 0x38
	// Line 2001, Address: 0x3e3fb4, Func Offset: 0x44
	// Line 2003, Address: 0x3e40c4, Func Offset: 0x154
	// Line 2001, Address: 0x3e40c8, Func Offset: 0x158
	// Line 2003, Address: 0x3e40cc, Func Offset: 0x15c
	// Line 2004, Address: 0x3e40dc, Func Offset: 0x16c
	// Line 2005, Address: 0x3e40e0, Func Offset: 0x170
	// Line 2006, Address: 0x3e40e4, Func Offset: 0x174
	// Line 2007, Address: 0x3e40e8, Func Offset: 0x178
	// Line 2008, Address: 0x3e40ec, Func Offset: 0x17c
	// Line 2013, Address: 0x3e40f0, Func Offset: 0x180
	// Line 2014, Address: 0x3e40f4, Func Offset: 0x184
	// Line 2015, Address: 0x3e4110, Func Offset: 0x1a0
	// Line 2017, Address: 0x3e4114, Func Offset: 0x1a4
	// Line 2015, Address: 0x3e411c, Func Offset: 0x1ac
	// Line 2016, Address: 0x3e412c, Func Offset: 0x1bc
	// Line 2022, Address: 0x3e4130, Func Offset: 0x1c0
	// Line 2024, Address: 0x3e4134, Func Offset: 0x1c4
	// Line 2023, Address: 0x3e413c, Func Offset: 0x1cc
	// Line 2024, Address: 0x3e4140, Func Offset: 0x1d0
	// Line 2023, Address: 0x3e4144, Func Offset: 0x1d4
	// Line 2024, Address: 0x3e414c, Func Offset: 0x1dc
	// Line 2022, Address: 0x3e4150, Func Offset: 0x1e0
	// Line 2024, Address: 0x3e415c, Func Offset: 0x1ec
	// Line 2022, Address: 0x3e4160, Func Offset: 0x1f0
	// Line 2024, Address: 0x3e4164, Func Offset: 0x1f4
	// Line 2023, Address: 0x3e416c, Func Offset: 0x1fc
	// Line 2025, Address: 0x3e4170, Func Offset: 0x200
	// Line 2023, Address: 0x3e4174, Func Offset: 0x204
	// Line 2026, Address: 0x3e4178, Func Offset: 0x208
	// Line 2023, Address: 0x3e417c, Func Offset: 0x20c
	// Line 2027, Address: 0x3e4180, Func Offset: 0x210
	// Line 2022, Address: 0x3e4184, Func Offset: 0x214
	// Line 2031, Address: 0x3e4188, Func Offset: 0x218
	// Line 2056, Address: 0x3e419c, Func Offset: 0x22c
	// Line 2057, Address: 0x3e4220, Func Offset: 0x2b0
	// Line 2056, Address: 0x3e422c, Func Offset: 0x2bc
	// Line 2057, Address: 0x3e4238, Func Offset: 0x2c8
	// Line 2061, Address: 0x3e4250, Func Offset: 0x2e0
	// Line 2063, Address: 0x3e4260, Func Offset: 0x2f0
	// Line 2064, Address: 0x3e4274, Func Offset: 0x304
	// Line 2066, Address: 0x3e4288, Func Offset: 0x318
	// Line 2069, Address: 0x3e429c, Func Offset: 0x32c
	// Line 2079, Address: 0x3e42ac, Func Offset: 0x33c
	// Line 2082, Address: 0x3e42b0, Func Offset: 0x340
	// Line 2092, Address: 0x3e42d8, Func Offset: 0x368
	// Line 2097, Address: 0x3e42ec, Func Offset: 0x37c
	// Line 2099, Address: 0x3e42f4, Func Offset: 0x384
	// Line 2098, Address: 0x3e42f8, Func Offset: 0x388
	// Line 2092, Address: 0x3e42fc, Func Offset: 0x38c
	// Line 2096, Address: 0x3e4300, Func Offset: 0x390
	// Line 2095, Address: 0x3e4304, Func Offset: 0x394
	// Line 2101, Address: 0x3e4308, Func Offset: 0x398
	// Line 2104, Address: 0x3e4310, Func Offset: 0x3a0
	// Line 2105, Address: 0x3e432c, Func Offset: 0x3bc
	// Line 2113, Address: 0x3e433c, Func Offset: 0x3cc
	// Line 2115, Address: 0x3e4350, Func Offset: 0x3e0
	// Line 2120, Address: 0x3e4364, Func Offset: 0x3f4
	// Line 2123, Address: 0x3e4380, Func Offset: 0x410
	// Line 2049, Address: 0x3e43d8, Func Offset: 0x468
	// Line 2123, Address: 0x3e43e4, Func Offset: 0x474
	// Line 2050, Address: 0x3e43e8, Func Offset: 0x478
	// Line 2049, Address: 0x3e43ec, Func Offset: 0x47c
	// Line 2123, Address: 0x3e43f4, Func Offset: 0x484
	// Line 2049, Address: 0x3e43fc, Func Offset: 0x48c
	// Line 2123, Address: 0x3e4410, Func Offset: 0x4a0
	// Line 2050, Address: 0x3e441c, Func Offset: 0x4ac
	// Line 2123, Address: 0x3e4424, Func Offset: 0x4b4
	// Line 2052, Address: 0x3e4458, Func Offset: 0x4e8
	// Line 2123, Address: 0x3e4460, Func Offset: 0x4f0
	// Line 2041, Address: 0x3e447c, Func Offset: 0x50c
	// Line 2123, Address: 0x3e4484, Func Offset: 0x514
	// Line 2058, Address: 0x3e44c0, Func Offset: 0x550
	// Line 2123, Address: 0x3e44c4, Func Offset: 0x554
	// Line 2058, Address: 0x3e44cc, Func Offset: 0x55c
	// Line 2123, Address: 0x3e44d0, Func Offset: 0x560
	// Line 2071, Address: 0x3e44e8, Func Offset: 0x578
	// Line 2123, Address: 0x3e44ec, Func Offset: 0x57c
	// Line 2072, Address: 0x3e44f8, Func Offset: 0x588
	// Line 2123, Address: 0x3e44fc, Func Offset: 0x58c
	// Line 2073, Address: 0x3e4504, Func Offset: 0x594
	// Line 2123, Address: 0x3e4508, Func Offset: 0x598
	// Line 2076, Address: 0x3e4514, Func Offset: 0x5a4
	// Line 2123, Address: 0x3e451c, Func Offset: 0x5ac
	// Line 2077, Address: 0x3e4530, Func Offset: 0x5c0
	// Line 2123, Address: 0x3e4534, Func Offset: 0x5c4
	// Line 2077, Address: 0x3e4544, Func Offset: 0x5d4
	// Line 2123, Address: 0x3e4548, Func Offset: 0x5d8
	// Line 2077, Address: 0x3e4564, Func Offset: 0x5f4
	// Line 2123, Address: 0x3e4568, Func Offset: 0x5f8
	// Line 2077, Address: 0x3e456c, Func Offset: 0x5fc
	// Line 2123, Address: 0x3e4570, Func Offset: 0x600
	// Line 2077, Address: 0x3e4588, Func Offset: 0x618
	// Line 2123, Address: 0x3e458c, Func Offset: 0x61c
	// Line 2082, Address: 0x3e459c, Func Offset: 0x62c
	// Line 2123, Address: 0x3e45a0, Func Offset: 0x630
	// Line 2085, Address: 0x3e45a4, Func Offset: 0x634
	// Line 2123, Address: 0x3e45ac, Func Offset: 0x63c
	// Line 2086, Address: 0x3e45c0, Func Offset: 0x650
	// Line 2123, Address: 0x3e45c4, Func Offset: 0x654
	// Line 2086, Address: 0x3e45d4, Func Offset: 0x664
	// Line 2123, Address: 0x3e45d8, Func Offset: 0x668
	// Line 2086, Address: 0x3e45f4, Func Offset: 0x684
	// Line 2123, Address: 0x3e45f8, Func Offset: 0x688
	// Line 2086, Address: 0x3e45fc, Func Offset: 0x68c
	// Line 2123, Address: 0x3e4600, Func Offset: 0x690
	// Line 2086, Address: 0x3e4618, Func Offset: 0x6a8
	// Line 2123, Address: 0x3e461c, Func Offset: 0x6ac
	// Line 2108, Address: 0x3e4634, Func Offset: 0x6c4
	// Line 2123, Address: 0x3e4638, Func Offset: 0x6c8
	// Line 2118, Address: 0x3e467c, Func Offset: 0x70c
	// Line 2123, Address: 0x3e4680, Func Offset: 0x710
	// Func End, Address: 0x3e46c8, Func Offset: 0x758
}

// fit_line__Q28xtextbox6layoutFb
// Start address: 0x3e46d0
uint8 layout::fit_line(uint8 isLastLine)
{
	jot_line& line;
	int32 i;
	// Line 1935, Address: 0x3e46d0, Func Offset: 0
	// Line 1937, Address: 0x3e46d4, Func Offset: 0x4
	// Line 1935, Address: 0x3e46d8, Func Offset: 0x8
	// Line 1937, Address: 0x3e46dc, Func Offset: 0xc
	// Line 1935, Address: 0x3e46e0, Func Offset: 0x10
	// Line 1937, Address: 0x3e46f4, Func Offset: 0x24
	// Line 1939, Address: 0x3e46f8, Func Offset: 0x28
	// Line 1937, Address: 0x3e46fc, Func Offset: 0x2c
	// Line 1939, Address: 0x3e4704, Func Offset: 0x34
	// Line 1942, Address: 0x3e4714, Func Offset: 0x44
	// Line 1945, Address: 0x3e473c, Func Offset: 0x6c
	// Line 1946, Address: 0x3e4754, Func Offset: 0x84
	// Line 1948, Address: 0x3e475c, Func Offset: 0x8c
	// Line 1949, Address: 0x3e4764, Func Offset: 0x94
	// Line 1950, Address: 0x3e4770, Func Offset: 0xa0
	// Line 1954, Address: 0x3e4778, Func Offset: 0xa8
	// Line 1955, Address: 0x3e4780, Func Offset: 0xb0
	// Line 1957, Address: 0x3e479c, Func Offset: 0xcc
	// Line 1958, Address: 0x3e47b8, Func Offset: 0xe8
	// Line 1959, Address: 0x3e47c0, Func Offset: 0xf0
	// Line 1961, Address: 0x3e47dc, Func Offset: 0x10c
	// Line 1963, Address: 0x3e47f0, Func Offset: 0x120
	// Line 1960, Address: 0x3e4808, Func Offset: 0x138
	// Line 1963, Address: 0x3e4810, Func Offset: 0x140
	// Line 1966, Address: 0x3e4818, Func Offset: 0x148
	// Line 1967, Address: 0x3e4828, Func Offset: 0x158
	// Line 1974, Address: 0x3e483c, Func Offset: 0x16c
	// Line 1976, Address: 0x3e4844, Func Offset: 0x174
	// Line 1977, Address: 0x3e4850, Func Offset: 0x180
	// Line 1978, Address: 0x3e485c, Func Offset: 0x18c
	// Line 1979, Address: 0x3e487c, Func Offset: 0x1ac
	// Func End, Address: 0x3e4894, Func Offset: 0x1c4
}

// bound_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x3e48a0
void layout::bound_line(jot_line& line)
{
	uint32 i;
	jot& a;
	uint32 i;
	jot& a;
	float32 total_height;
	// Line 1910, Address: 0x3e48a0, Func Offset: 0
	// Line 1913, Address: 0x3e48ac, Func Offset: 0xc
	// Line 1917, Address: 0x3e48c8, Func Offset: 0x28
	// Line 1918, Address: 0x3e48e0, Func Offset: 0x40
	// Line 1919, Address: 0x3e48f8, Func Offset: 0x58
	// Line 1921, Address: 0x3e4908, Func Offset: 0x68
	// Line 1924, Address: 0x3e4920, Func Offset: 0x80
	// Line 1929, Address: 0x3e4934, Func Offset: 0x94
	// Line 1931, Address: 0x3e4948, Func Offset: 0xa8
	// Line 1932, Address: 0x3e497c, Func Offset: 0xdc
	// Line 1926, Address: 0x3e4994, Func Offset: 0xf4
	// Line 1932, Address: 0x3e4998, Func Offset: 0xf8
	// Line 1927, Address: 0x3e49ac, Func Offset: 0x10c
	// Line 1928, Address: 0x3e49b4, Func Offset: 0x114
	// Line 1932, Address: 0x3e49b8, Func Offset: 0x118
	// Func End, Address: 0x3e49d0, Func Offset: 0x130
}

// merge_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x3e49d0
void layout::merge_line(jot_line& line)
{
	uint32 d;
	uint32 i;
	jot& a1;
	jot& a2;
	// Line 1881, Address: 0x3e49d0, Func Offset: 0
	// Line 1884, Address: 0x3e49d4, Func Offset: 0x4
	// Line 1888, Address: 0x3e4a00, Func Offset: 0x30
	// Line 1886, Address: 0x3e4a04, Func Offset: 0x34
	// Line 1888, Address: 0x3e4a08, Func Offset: 0x38
	// Line 1893, Address: 0x3e4a58, Func Offset: 0x88
	// Line 1894, Address: 0x3e4a74, Func Offset: 0xa4
	// Line 1895, Address: 0x3e4af8, Func Offset: 0x128
	// Line 1896, Address: 0x3e4b04, Func Offset: 0x134
	// Line 1899, Address: 0x3e4b10, Func Offset: 0x140
	// Line 1900, Address: 0x3e4b14, Func Offset: 0x144
	// Line 1902, Address: 0x3e4b94, Func Offset: 0x1c4
	// Line 1904, Address: 0x3e4ba8, Func Offset: 0x1d8
	// Line 1905, Address: 0x3e4c88, Func Offset: 0x2b8
	// Line 1906, Address: 0x3e4c8c, Func Offset: 0x2bc
	// Line 1904, Address: 0x3e4c94, Func Offset: 0x2c4
	// Line 1906, Address: 0x3e4c9c, Func Offset: 0x2cc
	// Func End, Address: 0x3e4ca4, Func Offset: 0x2d4
}

// trim_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x3e4cb0
void layout::trim_line(jot_line& line)
{
	int32 i;
	jot& a;
	uint32 i;
	jot& a;
	// Line 1836, Address: 0x3e4cb0, Func Offset: 0
	// Line 1839, Address: 0x3e4cd4, Func Offset: 0x24
	// Line 1841, Address: 0x3e4ce8, Func Offset: 0x38
	// Line 1843, Address: 0x3e4cf0, Func Offset: 0x40
	// Line 1844, Address: 0x3e4dc8, Func Offset: 0x118
	// Line 1846, Address: 0x3e4dd0, Func Offset: 0x120
	// Line 1848, Address: 0x3e4dd8, Func Offset: 0x128
	// Line 1851, Address: 0x3e4de8, Func Offset: 0x138
	// Line 1854, Address: 0x3e4e08, Func Offset: 0x158
	// Line 1856, Address: 0x3e4e1c, Func Offset: 0x16c
	// Line 1858, Address: 0x3e4e24, Func Offset: 0x174
	// Line 1859, Address: 0x3e4ef8, Func Offset: 0x248
	// Line 1861, Address: 0x3e4f00, Func Offset: 0x250
	// Line 1863, Address: 0x3e4f08, Func Offset: 0x258
	// Line 1864, Address: 0x3e4f18, Func Offset: 0x268
	// Func End, Address: 0x3e4f20, Func Offset: 0x270
}

// refresh_end__Q28xtextbox6layoutFRC8xtextbox
// Start address: 0x3e4f20
void layout::refresh_end(xtextbox& tb)
{
	// Line 1826, Address: 0x3e4f20, Func Offset: 0
	// Line 1827, Address: 0x3e4f24, Func Offset: 0x4
	// Line 1826, Address: 0x3e4f28, Func Offset: 0x8
	// Line 1827, Address: 0x3e4f30, Func Offset: 0x10
	// Line 1829, Address: 0x3e4f3c, Func Offset: 0x1c
	// Line 1830, Address: 0x3e501c, Func Offset: 0xfc
	// Line 1831, Address: 0x3e5024, Func Offset: 0x104
	// Func End, Address: 0x3e5030, Func Offset: 0x110
}

// clear__Q28xtextbox6layoutFv
// Start address: 0x3e5030
void layout::clear()
{
	// Line 1820, Address: 0x3e5030, Func Offset: 0
	// Line 1822, Address: 0x3e5034, Func Offset: 0x4
	// Line 1821, Address: 0x3e503c, Func Offset: 0xc
	// Line 1822, Address: 0x3e5044, Func Offset: 0x14
	// Line 1821, Address: 0x3e5048, Func Offset: 0x18
	// Line 1822, Address: 0x3e504c, Func Offset: 0x1c
	// Line 1821, Address: 0x3e5050, Func Offset: 0x20
	// Line 1822, Address: 0x3e5054, Func Offset: 0x24
	// Line 1821, Address: 0x3e5058, Func Offset: 0x28
	// Line 1822, Address: 0x3e505c, Func Offset: 0x2c
	// Line 1821, Address: 0x3e5060, Func Offset: 0x30
	// Line 1822, Address: 0x3e5064, Func Offset: 0x34
	// Line 1821, Address: 0x3e5068, Func Offset: 0x38
	// Line 1822, Address: 0x3e506c, Func Offset: 0x3c
	// Line 1821, Address: 0x3e5070, Func Offset: 0x40
	// Line 1822, Address: 0x3e5078, Func Offset: 0x48
	// Line 1821, Address: 0x3e507c, Func Offset: 0x4c
	// Line 1822, Address: 0x3e5080, Func Offset: 0x50
	// Line 1823, Address: 0x3e5334, Func Offset: 0x304
	// Func End, Address: 0x3e533c, Func Offset: 0x30c
}

// refresh__Q28xtextbox6layoutFRC8xtextboxb
// Start address: 0x3e5340
void layout::refresh(xtextbox& tb, uint8 force)
{
	// Line 1813, Address: 0x3e5340, Func Offset: 0
	// Line 1814, Address: 0x3e5354, Func Offset: 0x14
	// Line 1815, Address: 0x3e536c, Func Offset: 0x2c
	// Line 1816, Address: 0x3e53a8, Func Offset: 0x68
	// Line 1815, Address: 0x3e53ac, Func Offset: 0x6c
	// Line 1816, Address: 0x3e53b0, Func Offset: 0x70
	// Line 1815, Address: 0x3e53b4, Func Offset: 0x74
	// Line 1816, Address: 0x3e53b8, Func Offset: 0x78
	// Line 1815, Address: 0x3e53bc, Func Offset: 0x7c
	// Line 1816, Address: 0x3e545c, Func Offset: 0x11c
	// Line 1817, Address: 0x3e5464, Func Offset: 0x124
	// Func End, Address: 0x3e5478, Func Offset: 0x138
}

// clear_layout_cache__8xtextboxFv
// Start address: 0x3e5480
void xtextbox::clear_layout_cache()
{
	uint32 index;
	// Line 1807, Address: 0x3e5480, Func Offset: 0
	// Line 1809, Address: 0x3e5484, Func Offset: 0x4
	// Line 1807, Address: 0x3e5488, Func Offset: 0x8
	// Line 1809, Address: 0x3e548c, Func Offset: 0xc
	// Line 1807, Address: 0x3e5490, Func Offset: 0x10
	// Line 1809, Address: 0x3e5494, Func Offset: 0x14
	// Line 1807, Address: 0x3e5498, Func Offset: 0x18
	// Line 1809, Address: 0x3e549c, Func Offset: 0x1c
	// Line 1807, Address: 0x3e54a0, Func Offset: 0x20
	// Line 1808, Address: 0x3e54a4, Func Offset: 0x24
	// Line 1807, Address: 0x3e54a8, Func Offset: 0x28
	// Line 1809, Address: 0x3e54ac, Func Offset: 0x2c
	// Line 1807, Address: 0x3e54b8, Func Offset: 0x38
	// Line 1809, Address: 0x3e54bc, Func Offset: 0x3c
	// Line 1807, Address: 0x3e54c0, Func Offset: 0x40
	// Line 1809, Address: 0x3e54c4, Func Offset: 0x44
	// Line 1807, Address: 0x3e54cc, Func Offset: 0x4c
	// Line 1809, Address: 0x3e54d4, Func Offset: 0x54
	// Line 1807, Address: 0x3e54e0, Func Offset: 0x60
	// Line 1809, Address: 0x3e54e4, Func Offset: 0x64
	// Line 1810, Address: 0x3e58c4, Func Offset: 0x444
	// Func End, Address: 0x3e58f4, Func Offset: 0x474
}

// read_list__8xtextboxFRCQ28xtextbox9tag_entryPiUi
// Start address: 0x3e5900
uint32 read_list(tag_entry& e, int32* v, uint32 vsize)
{
	uint32 total;
	uint32 i;
	// Line 1799, Address: 0x3e5900, Func Offset: 0
	// Line 1800, Address: 0x3e5920, Func Offset: 0x20
	// Line 1801, Address: 0x3e5930, Func Offset: 0x30
	// Line 1803, Address: 0x3e593c, Func Offset: 0x3c
	// Line 1804, Address: 0x3e597c, Func Offset: 0x7c
	// Func End, Address: 0x3e599c, Func Offset: 0x9c
}

// read_list__8xtextboxFRCQ28xtextbox9tag_entryPfUi
// Start address: 0x3e59a0
uint32 read_list(tag_entry& e, float32* v, uint32 vsize)
{
	uint32 total;
	uint32 i;
	// Line 1791, Address: 0x3e59a0, Func Offset: 0
	// Line 1792, Address: 0x3e59c0, Func Offset: 0x20
	// Line 1793, Address: 0x3e59d0, Func Offset: 0x30
	// Line 1795, Address: 0x3e59dc, Func Offset: 0x3c
	// Line 1796, Address: 0x3e5a1c, Func Offset: 0x7c
	// Func End, Address: 0x3e5a3c, Func Offset: 0x9c
}

// find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
// Start address: 0x3e5a40
tag_entry* find_entry(tag_entry_list& el, substr& name)
{
	uint32 i;
	tag_entry& e;
	// Line 1781, Address: 0x3e5a40, Func Offset: 0
	// Line 1782, Address: 0x3e5a44, Func Offset: 0x4
	// Line 1781, Address: 0x3e5a48, Func Offset: 0x8
	// Line 1782, Address: 0x3e5a64, Func Offset: 0x24
	// Line 1781, Address: 0x3e5a68, Func Offset: 0x28
	// Line 1782, Address: 0x3e5a6c, Func Offset: 0x2c
	// Line 1787, Address: 0x3e5a74, Func Offset: 0x34
	// Line 1785, Address: 0x3e5a84, Func Offset: 0x44
	// Line 1787, Address: 0x3e5a88, Func Offset: 0x48
	// Line 1785, Address: 0x3e5a9c, Func Offset: 0x5c
	// Line 1787, Address: 0x3e5aa4, Func Offset: 0x64
	// Line 1788, Address: 0x3e5ac0, Func Offset: 0x80
	// Func End, Address: 0x3e5ae0, Func Offset: 0xa0
}

// read_tag__8xtextboxFRC6substr
// Start address: 0x3e5ae0
tag_entry_list xtextbox::read_tag(substr& s)
{
	uint32 entries_used;
	substr it;
	substr delims;
	substr sub_delims;
	tag_entry& entry;
	int8* d;
	substr& arg;
	int8* d;
	tag_entry_list ret;
	substr arg_buffer[32];
	tag_entry entry_buffer[16];
	// Line 1716, Address: 0x3e5ae0, Func Offset: 0
	// Line 1723, Address: 0x3e5ae8, Func Offset: 0x8
	// Line 1716, Address: 0x3e5aec, Func Offset: 0xc
	// Line 1723, Address: 0x3e5af0, Func Offset: 0x10
	// Line 1716, Address: 0x3e5af4, Func Offset: 0x14
	// Line 1722, Address: 0x3e5af8, Func Offset: 0x18
	// Line 1716, Address: 0x3e5afc, Func Offset: 0x1c
	// Line 1723, Address: 0x3e5b10, Func Offset: 0x30
	// Line 1724, Address: 0x3e5b18, Func Offset: 0x38
	// Line 1725, Address: 0x3e5b5c, Func Offset: 0x7c
	// Line 1727, Address: 0x3e5b7c, Func Offset: 0x9c
	// Line 1728, Address: 0x3e5b84, Func Offset: 0xa4
	// Line 1729, Address: 0x3e5b88, Func Offset: 0xa8
	// Line 1727, Address: 0x3e5b8c, Func Offset: 0xac
	// Line 1729, Address: 0x3e5b90, Func Offset: 0xb0
	// Line 1736, Address: 0x3e5ba8, Func Offset: 0xc8
	// Line 1737, Address: 0x3e5bac, Func Offset: 0xcc
	// Line 1734, Address: 0x3e5bb0, Func Offset: 0xd0
	// Line 1737, Address: 0x3e5bb4, Func Offset: 0xd4
	// Line 1735, Address: 0x3e5bb8, Func Offset: 0xd8
	// Line 1733, Address: 0x3e5bbc, Func Offset: 0xdc
	// Line 1737, Address: 0x3e5bc0, Func Offset: 0xe0
	// Line 1738, Address: 0x3e5bc8, Func Offset: 0xe8
	// Line 1739, Address: 0x3e5be4, Func Offset: 0x104
	// Line 1775, Address: 0x3e5c5c, Func Offset: 0x17c
	// Line 1776, Address: 0x3e5c60, Func Offset: 0x180
	// Line 1777, Address: 0x3e5c68, Func Offset: 0x188
	// Line 1776, Address: 0x3e5c6c, Func Offset: 0x18c
	// Line 1777, Address: 0x3e5c70, Func Offset: 0x190
	// Line 1739, Address: 0x3e5cbc, Func Offset: 0x1dc
	// Line 1777, Address: 0x3e5cd0, Func Offset: 0x1f0
	// Line 1739, Address: 0x3e5cd8, Func Offset: 0x1f8
	// Line 1777, Address: 0x3e5ce0, Func Offset: 0x200
	// Line 1741, Address: 0x3e5d18, Func Offset: 0x238
	// Line 1777, Address: 0x3e5d1c, Func Offset: 0x23c
	// Line 1742, Address: 0x3e5d28, Func Offset: 0x248
	// Line 1777, Address: 0x3e5d2c, Func Offset: 0x24c
	// Line 1744, Address: 0x3e5d30, Func Offset: 0x250
	// Line 1777, Address: 0x3e5d34, Func Offset: 0x254
	// Line 1766, Address: 0x3e5db8, Func Offset: 0x2d8
	// Line 1777, Address: 0x3e5dd0, Func Offset: 0x2f0
	// Line 1766, Address: 0x3e5e00, Func Offset: 0x320
	// Line 1777, Address: 0x3e5e08, Func Offset: 0x328
	// Line 1766, Address: 0x3e5e10, Func Offset: 0x330
	// Line 1777, Address: 0x3e5e18, Func Offset: 0x338
	// Line 1759, Address: 0x3e5e40, Func Offset: 0x360
	// Line 1777, Address: 0x3e5e48, Func Offset: 0x368
	// Line 1766, Address: 0x3e5e80, Func Offset: 0x3a0
	// Line 1777, Address: 0x3e5e94, Func Offset: 0x3b4
	// Line 1766, Address: 0x3e5e9c, Func Offset: 0x3bc
	// Line 1777, Address: 0x3e5ea0, Func Offset: 0x3c0
	// Line 1771, Address: 0x3e5ec4, Func Offset: 0x3e4
	// Line 1777, Address: 0x3e5ec8, Func Offset: 0x3e8
	// Line 1772, Address: 0x3e5ecc, Func Offset: 0x3ec
	// Line 1777, Address: 0x3e5ed0, Func Offset: 0x3f0
	// Line 1773, Address: 0x3e5ee0, Func Offset: 0x400
	// Line 1777, Address: 0x3e5ee4, Func Offset: 0x404
	// Line 1773, Address: 0x3e5f14, Func Offset: 0x434
	// Line 1778, Address: 0x3e5f20, Func Offset: 0x440
	// Func End, Address: 0x3e5f44, Func Offset: 0x464
}

// yextent__8xtextboxCFfRiRCQ28xtextbox6layoutii
// Start address: 0x3e5f50
float32 yextent(float32 max, int32& size, layout& l, int32 begin_jot, int32 end_jot)
{
	// Line 1712, Address: 0x3e5f50, Func Offset: 0
	// Func End, Address: 0x3e5f60, Func Offset: 0x10
}

// render__8xtextboxCFRQ28xtextbox6layoutii
// Start address: 0x3e5f60
void xtextbox::render(layout& l, int32 begin_jot, int32 end_jot)
{
	// Line 1707, Address: 0x3e5f64, Func Offset: 0x4
	// Func End, Address: 0x3e5f70, Func Offset: 0x10
}

// temp_layout__8xtextboxCFb
// Start address: 0x3e5f70
layout& xtextbox::temp_layout(uint8 cache)
{
	long32 cur_time;
	uint8 refresh;
	uint32 index;
	int32 min_used;
	uint32 i;
	int32 used;
	tl_cache_entry& e;
	// Line 1654, Address: 0x3e5f70, Func Offset: 0
	// Line 1656, Address: 0x3e5f94, Func Offset: 0x24
	// Line 1659, Address: 0x3e5fa0, Func Offset: 0x30
	// Line 1661, Address: 0x3e5fa4, Func Offset: 0x34
	// Line 1666, Address: 0x3e5fac, Func Offset: 0x3c
	// Line 1670, Address: 0x3e5fb0, Func Offset: 0x40
	// Line 1675, Address: 0x3e5fbc, Func Offset: 0x4c
	// Line 1672, Address: 0x3e5fc0, Func Offset: 0x50
	// Line 1673, Address: 0x3e5fc4, Func Offset: 0x54
	// Line 1675, Address: 0x3e5fc8, Func Offset: 0x58
	// Line 1674, Address: 0x3e5fcc, Func Offset: 0x5c
	// Line 1675, Address: 0x3e5fd0, Func Offset: 0x60
	// Line 1679, Address: 0x3e5fd4, Func Offset: 0x64
	// Line 1681, Address: 0x3e5ff8, Func Offset: 0x88
	// Line 1682, Address: 0x3e6010, Func Offset: 0xa0
	// Line 1683, Address: 0x3e6028, Func Offset: 0xb8
	// Line 1684, Address: 0x3e603c, Func Offset: 0xcc
	// Line 1683, Address: 0x3e6040, Func Offset: 0xd0
	// Line 1684, Address: 0x3e6048, Func Offset: 0xd8
	// Line 1687, Address: 0x3e6058, Func Offset: 0xe8
	// Line 1689, Address: 0x3e6068, Func Offset: 0xf8
	// Line 1694, Address: 0x3e6070, Func Offset: 0x100
	// Line 1696, Address: 0x3e6158, Func Offset: 0x1e8
	// Line 1702, Address: 0x3e6160, Func Offset: 0x1f0
	// Line 1664, Address: 0x3e6170, Func Offset: 0x200
	// Line 1702, Address: 0x3e6174, Func Offset: 0x204
	// Line 1665, Address: 0x3e619c, Func Offset: 0x22c
	// Line 1702, Address: 0x3e61a4, Func Offset: 0x234
	// Line 1692, Address: 0x3e61e8, Func Offset: 0x278
	// Line 1702, Address: 0x3e61ec, Func Offset: 0x27c
	// Line 1692, Address: 0x3e61f0, Func Offset: 0x280
	// Line 1702, Address: 0x3e61f4, Func Offset: 0x284
	// Line 1692, Address: 0x3e61f8, Func Offset: 0x288
	// Line 1702, Address: 0x3e61fc, Func Offset: 0x28c
	// Line 1693, Address: 0x3e62a0, Func Offset: 0x330
	// Line 1702, Address: 0x3e62a8, Func Offset: 0x338
	// Line 1703, Address: 0x3e62bc, Func Offset: 0x34c
	// Func End, Address: 0x3e62e0, Func Offset: 0x370
}

// set_text__8xtextboxFPPCcPCUiUi
// Start address: 0x3e62e0
void xtextbox::set_text(int8** texts, uint32* text_sizes, uint32 size)
{
	uint32 i;
	uint32 i;
	// Line 1596, Address: 0x3e62e0, Func Offset: 0
	// Line 1597, Address: 0x3e6304, Func Offset: 0x24
	// Line 1599, Address: 0x3e6308, Func Offset: 0x28
	// Line 1601, Address: 0x3e6310, Func Offset: 0x30
	// Line 1603, Address: 0x3e6314, Func Offset: 0x34
	// Line 1610, Address: 0x3e631c, Func Offset: 0x3c
	// Line 1611, Address: 0x3e6330, Func Offset: 0x50
	// Line 1612, Address: 0x3e6370, Func Offset: 0x90
	// Line 1607, Address: 0x3e63a0, Func Offset: 0xc0
	// Line 1612, Address: 0x3e63a4, Func Offset: 0xc4
	// Line 1607, Address: 0x3e63a8, Func Offset: 0xc8
	// Line 1612, Address: 0x3e63ac, Func Offset: 0xcc
	// Line 1608, Address: 0x3e63bc, Func Offset: 0xdc
	// Line 1612, Address: 0x3e63c4, Func Offset: 0xe4
	// Func End, Address: 0x3e63e4, Func Offset: 0x104
}

// set_text__8xtextboxFPPCcUi
// Start address: 0x3e63f0
void xtextbox::set_text(int8** texts, uint32 size)
{
	// Line 1592, Address: 0x3e63f4, Func Offset: 0x4
	// Func End, Address: 0x3e63fc, Func Offset: 0xc
}

// set_text__8xtextboxFPCc
// Start address: 0x3e6400
void xtextbox::set_text(int8* text)
{
	// Line 1578, Address: 0x3e6400, Func Offset: 0
	// Line 1579, Address: 0x3e6404, Func Offset: 0x4
	// Line 1580, Address: 0x3e6428, Func Offset: 0x28
	// Line 1579, Address: 0x3e6434, Func Offset: 0x34
	// Line 1580, Address: 0x3e643c, Func Offset: 0x3c
	// Func End, Address: 0x3e6444, Func Offset: 0x44
}

// text_render__8xtextboxFRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x3e6450
void xtextbox::text_render(jot& j, xtextbox& tb, float32 x, float32 y)
{
	// Line 1571, Address: 0x3e6454, Func Offset: 0x4
	// Func End, Address: 0x3e6464, Func Offset: 0x14
}

// load_model_args__19@unnamed@xWad2_cpp@FRQ219@unnamed@xWad2_cpp@10model_argsRC6substr
// Start address: 0x3e6470
void load_model_args(model_args& ma, substr& s)
{
	tag_entry_list el;
	tag_entry* e;
	substr& name;
	uint32 id;
	// Line 1477, Address: 0x3e6470, Func Offset: 0
	// Line 1478, Address: 0x3e648c, Func Offset: 0x1c
	// Line 1477, Address: 0x3e6490, Func Offset: 0x20
	// Line 1478, Address: 0x3e649c, Func Offset: 0x2c
	// Line 1482, Address: 0x3e64b4, Func Offset: 0x44
	// Line 1485, Address: 0x3e64c4, Func Offset: 0x54
	// Line 1502, Address: 0x3e64f4, Func Offset: 0x84
	// Line 1505, Address: 0x3e64f8, Func Offset: 0x88
	// Line 1502, Address: 0x3e64fc, Func Offset: 0x8c
	// Line 1505, Address: 0x3e6500, Func Offset: 0x90
	// Line 1502, Address: 0x3e6504, Func Offset: 0x94
	// Line 1505, Address: 0x3e6510, Func Offset: 0xa0
	// Line 1506, Address: 0x3e656c, Func Offset: 0xfc
	// Line 1507, Address: 0x3e6594, Func Offset: 0x124
	// Line 1509, Address: 0x3e65d8, Func Offset: 0x168
	// Line 1510, Address: 0x3e6634, Func Offset: 0x1c4
	// Line 1511, Address: 0x3e665c, Func Offset: 0x1ec
	// Line 1513, Address: 0x3e66a0, Func Offset: 0x230
	// Line 1514, Address: 0x3e66fc, Func Offset: 0x28c
	// Line 1515, Address: 0x3e6724, Func Offset: 0x2b4
	// Line 1517, Address: 0x3e6768, Func Offset: 0x2f8
	// Line 1518, Address: 0x3e67c4, Func Offset: 0x354
	// Line 1520, Address: 0x3e67ec, Func Offset: 0x37c
	// Line 1521, Address: 0x3e6848, Func Offset: 0x3d8
	// Line 1523, Address: 0x3e6854, Func Offset: 0x3e4
	// Line 1525, Address: 0x3e6858, Func Offset: 0x3e8
	// Line 1505, Address: 0x3e68a0, Func Offset: 0x430
	// Line 1525, Address: 0x3e68a8, Func Offset: 0x438
	// Line 1509, Address: 0x3e68e4, Func Offset: 0x474
	// Line 1525, Address: 0x3e68ec, Func Offset: 0x47c
	// Line 1513, Address: 0x3e6928, Func Offset: 0x4b8
	// Line 1525, Address: 0x3e6930, Func Offset: 0x4c0
	// Line 1517, Address: 0x3e6968, Func Offset: 0x4f8
	// Line 1525, Address: 0x3e6970, Func Offset: 0x500
	// Func End, Address: 0x3e69b4, Func Offset: 0x544
}

// load_tex_args__19@unnamed@xWad2_cpp@FRQ219@unnamed@xWad2_cpp@8tex_argsRC6substr
// Start address: 0x3e69c0
void load_tex_args(tex_args& ta, substr& s)
{
	tag_entry_list el;
	tag_entry* e;
	substr& name;
	uint32 id;
	RwTexture* texture;
	// Line 1379, Address: 0x3e69c0, Func Offset: 0
	// Line 1380, Address: 0x3e69dc, Func Offset: 0x1c
	// Line 1379, Address: 0x3e69e0, Func Offset: 0x20
	// Line 1380, Address: 0x3e69ec, Func Offset: 0x2c
	// Line 1384, Address: 0x3e6a04, Func Offset: 0x44
	// Line 1387, Address: 0x3e6a14, Func Offset: 0x54
	// Line 1389, Address: 0x3e6a44, Func Offset: 0x84
	// Line 1393, Address: 0x3e6a48, Func Offset: 0x88
	// Line 1395, Address: 0x3e6a74, Func Offset: 0xb4
	// Line 1397, Address: 0x3e6ad0, Func Offset: 0x110
	// Line 1399, Address: 0x3e6adc, Func Offset: 0x11c
	// Line 1400, Address: 0x3e6ae8, Func Offset: 0x128
	// Line 1404, Address: 0x3e6b2c, Func Offset: 0x16c
	// Line 1418, Address: 0x3e6b30, Func Offset: 0x170
	// Line 1421, Address: 0x3e6b34, Func Offset: 0x174
	// Line 1418, Address: 0x3e6b38, Func Offset: 0x178
	// Line 1421, Address: 0x3e6b3c, Func Offset: 0x17c
	// Line 1418, Address: 0x3e6b40, Func Offset: 0x180
	// Line 1421, Address: 0x3e6b4c, Func Offset: 0x18c
	// Line 1422, Address: 0x3e6ba8, Func Offset: 0x1e8
	// Line 1423, Address: 0x3e6bd0, Func Offset: 0x210
	// Line 1425, Address: 0x3e6c18, Func Offset: 0x258
	// Line 1426, Address: 0x3e6c74, Func Offset: 0x2b4
	// Line 1427, Address: 0x3e6c9c, Func Offset: 0x2dc
	// Line 1429, Address: 0x3e6ce0, Func Offset: 0x320
	// Line 1430, Address: 0x3e6d3c, Func Offset: 0x37c
	// Line 1431, Address: 0x3e6d64, Func Offset: 0x3a4
	// Line 1433, Address: 0x3e6da8, Func Offset: 0x3e8
	// Line 1434, Address: 0x3e6e04, Func Offset: 0x444
	// Line 1435, Address: 0x3e6e2c, Func Offset: 0x46c
	// Line 1437, Address: 0x3e6e70, Func Offset: 0x4b0
	// Line 1438, Address: 0x3e6ecc, Func Offset: 0x50c
	// Line 1440, Address: 0x3e6ef4, Func Offset: 0x534
	// Line 1441, Address: 0x3e6f50, Func Offset: 0x590
	// Line 1421, Address: 0x3e6f78, Func Offset: 0x5b8
	// Line 1441, Address: 0x3e6f80, Func Offset: 0x5c0
	// Line 1425, Address: 0x3e6fbc, Func Offset: 0x5fc
	// Line 1441, Address: 0x3e6fc4, Func Offset: 0x604
	// Line 1429, Address: 0x3e7000, Func Offset: 0x640
	// Line 1441, Address: 0x3e7008, Func Offset: 0x648
	// Line 1433, Address: 0x3e7044, Func Offset: 0x684
	// Line 1441, Address: 0x3e704c, Func Offset: 0x68c
	// Line 1437, Address: 0x3e7084, Func Offset: 0x6c4
	// Line 1441, Address: 0x3e708c, Func Offset: 0x6cc
	// Line 1442, Address: 0x3e70a4, Func Offset: 0x6e4
	// Line 1443, Address: 0x3e7100, Func Offset: 0x740
	// Line 1444, Address: 0x3e710c, Func Offset: 0x74c
	// Line 1445, Address: 0x3e7168, Func Offset: 0x7a8
	// Line 1446, Address: 0x3e7174, Func Offset: 0x7b4
	// Line 1447, Address: 0x3e71d0, Func Offset: 0x810
	// Line 1448, Address: 0x3e71dc, Func Offset: 0x81c
	// Line 1449, Address: 0x3e7238, Func Offset: 0x878
	// Line 1450, Address: 0x3e7244, Func Offset: 0x884
	// Line 1451, Address: 0x3e72a0, Func Offset: 0x8e0
	// Line 1452, Address: 0x3e72ac, Func Offset: 0x8ec
	// Line 1453, Address: 0x3e7308, Func Offset: 0x948
	// Line 1455, Address: 0x3e7314, Func Offset: 0x954
	// Line 1457, Address: 0x3e7318, Func Offset: 0x958
	// Func End, Address: 0x3e7344, Func Offset: 0x984
}

// parse_next_text_jot__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUi
// Start address: 0x3e7350
int8* parse_next_text_jot(jot& a, xtextbox& tb, int8* text, uint32 text_size)
{
	uint8 hasSpaceChar;
	// Line 1287, Address: 0x3e7350, Func Offset: 0
	// Line 1288, Address: 0x3e7360, Func Offset: 0x10
	// Line 1291, Address: 0x3e738c, Func Offset: 0x3c
	// Line 1294, Address: 0x3e73a4, Func Offset: 0x54
	// Line 1295, Address: 0x3e73e4, Func Offset: 0x94
	// Line 1297, Address: 0x3e73ec, Func Offset: 0x9c
	// Line 1300, Address: 0x3e7404, Func Offset: 0xb4
	// Line 1303, Address: 0x3e7408, Func Offset: 0xb8
	// Line 1301, Address: 0x3e740c, Func Offset: 0xbc
	// Line 1303, Address: 0x3e7418, Func Offset: 0xc8
	// Line 1301, Address: 0x3e741c, Func Offset: 0xcc
	// Line 1303, Address: 0x3e742c, Func Offset: 0xdc
	// Line 1304, Address: 0x3e7430, Func Offset: 0xe0
	// Line 1307, Address: 0x3e7434, Func Offset: 0xe4
	// Line 1309, Address: 0x3e743c, Func Offset: 0xec
	// Line 1310, Address: 0x3e748c, Func Offset: 0x13c
	// Line 1311, Address: 0x3e74c8, Func Offset: 0x178
	// Line 1312, Address: 0x3e74d0, Func Offset: 0x180
	// Line 1313, Address: 0x3e74e8, Func Offset: 0x198
	// Line 1316, Address: 0x3e75ec, Func Offset: 0x29c
	// Line 1319, Address: 0x3e761c, Func Offset: 0x2cc
	// Line 1320, Address: 0x3e7628, Func Offset: 0x2d8
	// Line 1319, Address: 0x3e7634, Func Offset: 0x2e4
	// Line 1320, Address: 0x3e7640, Func Offset: 0x2f0
	// Line 1321, Address: 0x3e7668, Func Offset: 0x318
	// Line 1324, Address: 0x3e7670, Func Offset: 0x320
	// Line 1325, Address: 0x3e767c, Func Offset: 0x32c
	// Line 1324, Address: 0x3e7688, Func Offset: 0x338
	// Line 1325, Address: 0x3e7694, Func Offset: 0x344
	// Line 1326, Address: 0x3e76bc, Func Offset: 0x36c
	// Line 1329, Address: 0x3e76c4, Func Offset: 0x374
	// Line 1330, Address: 0x3e76d8, Func Offset: 0x388
	// Line 1333, Address: 0x3e76e0, Func Offset: 0x390
	// Line 1336, Address: 0x3e7718, Func Offset: 0x3c8
	// Line 1313, Address: 0x3e772c, Func Offset: 0x3dc
	// Line 1336, Address: 0x3e7730, Func Offset: 0x3e0
	// Line 1313, Address: 0x3e776c, Func Offset: 0x41c
	// Line 1336, Address: 0x3e7780, Func Offset: 0x430
	// Line 1313, Address: 0x3e778c, Func Offset: 0x43c
	// Line 1336, Address: 0x3e7794, Func Offset: 0x444
	// Line 1313, Address: 0x3e77a0, Func Offset: 0x450
	// Line 1336, Address: 0x3e77a8, Func Offset: 0x458
	// Line 1313, Address: 0x3e77c4, Func Offset: 0x474
	// Line 1337, Address: 0x3e77cc, Func Offset: 0x47c
	// Func End, Address: 0x3e77e0, Func Offset: 0x490
}

// parse_next_tag_jot__19@unnamed@xWad2_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUi
// Start address: 0x3e77e0
int8* parse_next_tag_jot(jot& a, xtextbox& tb, xtextbox& ctb, int8* text, uint32 text_size)
{
	split_tag ti;
	uint32 size;
	// Line 1260, Address: 0x3e77e0, Func Offset: 0
	// Line 1261, Address: 0x3e77e4, Func Offset: 0x4
	// Line 1260, Address: 0x3e77e8, Func Offset: 0x8
	// Line 1261, Address: 0x3e77ec, Func Offset: 0xc
	// Line 1260, Address: 0x3e77f0, Func Offset: 0x10
	// Line 1261, Address: 0x3e7814, Func Offset: 0x34
	// Line 1262, Address: 0x3e783c, Func Offset: 0x5c
	// Line 1263, Address: 0x3e784c, Func Offset: 0x6c
	// Line 1264, Address: 0x3e785c, Func Offset: 0x7c
	// Line 1267, Address: 0x3e7860, Func Offset: 0x80
	// Line 1265, Address: 0x3e7864, Func Offset: 0x84
	// Line 1267, Address: 0x3e7868, Func Offset: 0x88
	// Line 1268, Address: 0x3e7874, Func Offset: 0x94
	// Line 1267, Address: 0x3e787c, Func Offset: 0x9c
	// Line 1268, Address: 0x3e78a0, Func Offset: 0xc0
	// Line 1277, Address: 0x3e7958, Func Offset: 0x178
	// Line 1278, Address: 0x3e7968, Func Offset: 0x188
	// Line 1279, Address: 0x3e797c, Func Offset: 0x19c
	// Line 1282, Address: 0x3e798c, Func Offset: 0x1ac
	// Line 1273, Address: 0x3e79bc, Func Offset: 0x1dc
	// Line 1282, Address: 0x3e79c4, Func Offset: 0x1e4
	// Line 1274, Address: 0x3e79cc, Func Offset: 0x1ec
	// Line 1283, Address: 0x3e79d4, Func Offset: 0x1f4
	// Func End, Address: 0x3e79f8, Func Offset: 0x218
}

// parse_split_tag__19@unnamed@xWad2_cpp@FRQ28xtextbox9split_tag
// Start address: 0x3e7a00
uint32 parse_split_tag(split_tag& ti)
{
	substr s;
	// Line 1223, Address: 0x3e7a00, Func Offset: 0
	// Line 1231, Address: 0x3e7a04, Func Offset: 0x4
	// Line 1223, Address: 0x3e7a08, Func Offset: 0x8
	// Line 1225, Address: 0x3e7a18, Func Offset: 0x18
	// Line 1228, Address: 0x3e7a1c, Func Offset: 0x1c
	// Line 1225, Address: 0x3e7a20, Func Offset: 0x20
	// Line 1227, Address: 0x3e7a28, Func Offset: 0x28
	// Line 1228, Address: 0x3e7a38, Func Offset: 0x38
	// Line 1231, Address: 0x3e7a50, Func Offset: 0x50
	// Line 1232, Address: 0x3e7ad0, Func Offset: 0xd0
	// Line 1233, Address: 0x3e7ae4, Func Offset: 0xe4
	// Line 1234, Address: 0x3e7aec, Func Offset: 0xec
	// Line 1238, Address: 0x3e7af0, Func Offset: 0xf0
	// Line 1234, Address: 0x3e7af8, Func Offset: 0xf8
	// Line 1235, Address: 0x3e7b00, Func Offset: 0x100
	// Line 1238, Address: 0x3e7b0c, Func Offset: 0x10c
	// Line 1235, Address: 0x3e7b10, Func Offset: 0x110
	// Line 1238, Address: 0x3e7b14, Func Offset: 0x114
	// Line 1233, Address: 0x3e7b80, Func Offset: 0x180
	// Line 1238, Address: 0x3e7b88, Func Offset: 0x188
	// Line 1239, Address: 0x3e7b9c, Func Offset: 0x19c
	// Line 1241, Address: 0x3e7bb0, Func Offset: 0x1b0
	// Line 1242, Address: 0x3e7bc4, Func Offset: 0x1c4
	// Line 1243, Address: 0x3e7bcc, Func Offset: 0x1cc
	// Line 1244, Address: 0x3e7bd8, Func Offset: 0x1d8
	// Line 1247, Address: 0x3e7bdc, Func Offset: 0x1dc
	// Line 1244, Address: 0x3e7be0, Func Offset: 0x1e0
	// Line 1247, Address: 0x3e7be4, Func Offset: 0x1e4
	// Line 1239, Address: 0x3e7c58, Func Offset: 0x258
	// Line 1241, Address: 0x3e7c60, Func Offset: 0x260
	// Line 1247, Address: 0x3e7c6c, Func Offset: 0x26c
	// Line 1243, Address: 0x3e7c74, Func Offset: 0x274
	// Line 1247, Address: 0x3e7c7c, Func Offset: 0x27c
	// Line 1248, Address: 0x3e7c94, Func Offset: 0x294
	// Line 1249, Address: 0x3e7cd8, Func Offset: 0x2d8
	// Line 1250, Address: 0x3e7cec, Func Offset: 0x2ec
	// Line 1251, Address: 0x3e7cf4, Func Offset: 0x2f4
	// Line 1252, Address: 0x3e7cf8, Func Offset: 0x2f8
	// Line 1251, Address: 0x3e7d00, Func Offset: 0x300
	// Line 1252, Address: 0x3e7d08, Func Offset: 0x308
	// Line 1251, Address: 0x3e7d10, Func Offset: 0x310
	// Line 1252, Address: 0x3e7d14, Func Offset: 0x314
	// Line 1248, Address: 0x3e7d68, Func Offset: 0x368
	// Line 1250, Address: 0x3e7d78, Func Offset: 0x378
	// Line 1253, Address: 0x3e7d80, Func Offset: 0x380
	// Line 1255, Address: 0x3e7d98, Func Offset: 0x398
	// Line 1256, Address: 0x3e7da4, Func Offset: 0x3a4
	// Func End, Address: 0x3e7db8, Func Offset: 0x3b8
}

// irender__5xfontCFPCcUiff
// Start address: 0x3e7dc0
void xfont::irender(int8* text, uint32 text_size, float32 x, float32 y)
{
	font_data& fd;
	basic_rect_0 bounds;
	uint8 pageCompleted[16];
	uint32 cpItr;
	int32 whichCodePage;
	int8* s;
	uint32 codePage;
	uint32 charIndex;
	int8* s;
	uint32 charIndex;
	// Line 1092, Address: 0x3e7dc0, Func Offset: 0
	// Line 1096, Address: 0x3e7dc4, Func Offset: 0x4
	// Line 1092, Address: 0x3e7dc8, Func Offset: 0x8
	// Line 1096, Address: 0x3e7e00, Func Offset: 0x40
	// Line 1099, Address: 0x3e7e08, Func Offset: 0x48
	// Line 1100, Address: 0x3e7e14, Func Offset: 0x54
	// Line 1099, Address: 0x3e7e18, Func Offset: 0x58
	// Line 1100, Address: 0x3e7e1c, Func Offset: 0x5c
	// Line 1099, Address: 0x3e7e20, Func Offset: 0x60
	// Line 1100, Address: 0x3e7e24, Func Offset: 0x64
	// Line 1102, Address: 0x3e7e54, Func Offset: 0x94
	// Line 1100, Address: 0x3e7e58, Func Offset: 0x98
	// Line 1102, Address: 0x3e7e60, Func Offset: 0xa0
	// Line 1100, Address: 0x3e7e68, Func Offset: 0xa8
	// Line 1102, Address: 0x3e7e74, Func Offset: 0xb4
	// Line 1104, Address: 0x3e7e7c, Func Offset: 0xbc
	// Line 1107, Address: 0x3e7ea8, Func Offset: 0xe8
	// Line 1105, Address: 0x3e7eac, Func Offset: 0xec
	// Line 1106, Address: 0x3e7eb0, Func Offset: 0xf0
	// Line 1144, Address: 0x3e7eb4, Func Offset: 0xf4
	// Line 1110, Address: 0x3e7ef0, Func Offset: 0x130
	// Line 1144, Address: 0x3e7efc, Func Offset: 0x13c
	// Line 1110, Address: 0x3e7f04, Func Offset: 0x144
	// Line 1112, Address: 0x3e7f08, Func Offset: 0x148
	// Line 1144, Address: 0x3e7f0c, Func Offset: 0x14c
	// Line 1120, Address: 0x3e7f20, Func Offset: 0x160
	// Line 1144, Address: 0x3e7f24, Func Offset: 0x164
	// Line 1120, Address: 0x3e7f28, Func Offset: 0x168
	// Line 1125, Address: 0x3e7f30, Func Offset: 0x170
	// Line 1120, Address: 0x3e7f38, Func Offset: 0x178
	// Line 1144, Address: 0x3e7f3c, Func Offset: 0x17c
	// Line 1125, Address: 0x3e7f44, Func Offset: 0x184
	// Line 1144, Address: 0x3e7f48, Func Offset: 0x188
	// Line 1128, Address: 0x3e7f58, Func Offset: 0x198
	// Line 1144, Address: 0x3e7f5c, Func Offset: 0x19c
	// Line 1128, Address: 0x3e7f60, Func Offset: 0x1a0
	// Line 1144, Address: 0x3e7f64, Func Offset: 0x1a4
	// Line 1128, Address: 0x3e7f9c, Func Offset: 0x1dc
	// Line 1144, Address: 0x3e7fa0, Func Offset: 0x1e0
	// Line 1129, Address: 0x3e7fac, Func Offset: 0x1ec
	// Line 1144, Address: 0x3e7fb0, Func Offset: 0x1f0
	// Line 1137, Address: 0x3e7fc0, Func Offset: 0x200
	// Line 1144, Address: 0x3e7fc4, Func Offset: 0x204
	// Line 1137, Address: 0x3e7fcc, Func Offset: 0x20c
	// Line 1144, Address: 0x3e7fd0, Func Offset: 0x210
	// Line 1137, Address: 0x3e7fd4, Func Offset: 0x214
	// Line 1144, Address: 0x3e7fd8, Func Offset: 0x218
	// Line 1137, Address: 0x3e7fdc, Func Offset: 0x21c
	// Line 1138, Address: 0x3e7fe4, Func Offset: 0x224
	// Line 1144, Address: 0x3e7ff0, Func Offset: 0x230
	// Line 1141, Address: 0x3e7ff8, Func Offset: 0x238
	// Line 1144, Address: 0x3e7ffc, Func Offset: 0x23c
	// Line 1142, Address: 0x3e8004, Func Offset: 0x244
	// Line 1144, Address: 0x3e8008, Func Offset: 0x248
	// Line 1142, Address: 0x3e8018, Func Offset: 0x258
	// Line 1144, Address: 0x3e801c, Func Offset: 0x25c
	// Line 1142, Address: 0x3e8020, Func Offset: 0x260
	// Line 1097, Address: 0x3e8038, Func Offset: 0x278
	// Line 1144, Address: 0x3e8040, Func Offset: 0x280
	// Line 1128, Address: 0x3e8048, Func Offset: 0x288
	// Line 1144, Address: 0x3e804c, Func Offset: 0x28c
	// Line 1134, Address: 0x3e80ac, Func Offset: 0x2ec
	// Line 1144, Address: 0x3e80b0, Func Offset: 0x2f0
	// Line 1134, Address: 0x3e80b4, Func Offset: 0x2f4
	// Line 1144, Address: 0x3e80c0, Func Offset: 0x300
	// Line 1134, Address: 0x3e80c4, Func Offset: 0x304
	// Line 1144, Address: 0x3e80c8, Func Offset: 0x308
	// Line 1134, Address: 0x3e80d0, Func Offset: 0x310
	// Line 1144, Address: 0x3e80d4, Func Offset: 0x314
	// Line 1134, Address: 0x3e80dc, Func Offset: 0x31c
	// Line 1144, Address: 0x3e8128, Func Offset: 0x368
	// Line 1134, Address: 0x3e8130, Func Offset: 0x370
	// Line 1144, Address: 0x3e8160, Func Offset: 0x3a0
	// Line 1134, Address: 0x3e8168, Func Offset: 0x3a8
	// Line 1144, Address: 0x3e816c, Func Offset: 0x3ac
	// Line 1134, Address: 0x3e8170, Func Offset: 0x3b0
	// Line 1144, Address: 0x3e817c, Func Offset: 0x3bc
	// Line 1134, Address: 0x3e81b8, Func Offset: 0x3f8
	// Line 1144, Address: 0x3e81bc, Func Offset: 0x3fc
	// Line 1134, Address: 0x3e81d0, Func Offset: 0x410
	// Line 1144, Address: 0x3e81d4, Func Offset: 0x414
	// Line 1134, Address: 0x3e81d8, Func Offset: 0x418
	// Line 1144, Address: 0x3e81dc, Func Offset: 0x41c
	// Line 1134, Address: 0x3e81f8, Func Offset: 0x438
	// Line 1144, Address: 0x3e81fc, Func Offset: 0x43c
	// Line 1134, Address: 0x3e8204, Func Offset: 0x444
	// Line 1144, Address: 0x3e8208, Func Offset: 0x448
	// Line 1134, Address: 0x3e8210, Func Offset: 0x450
	// Line 1144, Address: 0x3e8214, Func Offset: 0x454
	// Line 1134, Address: 0x3e821c, Func Offset: 0x45c
	// Line 1144, Address: 0x3e8220, Func Offset: 0x460
	// Line 1145, Address: 0x3e8238, Func Offset: 0x478
	// Line 1151, Address: 0x3e8244, Func Offset: 0x484
	// Line 1152, Address: 0x3e8250, Func Offset: 0x490
	// Line 1155, Address: 0x3e8270, Func Offset: 0x4b0
	// Line 1156, Address: 0x3e82b8, Func Offset: 0x4f8
	// Line 1184, Address: 0x3e82c8, Func Offset: 0x508
	// Line 1159, Address: 0x3e8300, Func Offset: 0x540
	// Line 1184, Address: 0x3e830c, Func Offset: 0x54c
	// Line 1159, Address: 0x3e8314, Func Offset: 0x554
	// Line 1161, Address: 0x3e8318, Func Offset: 0x558
	// Line 1184, Address: 0x3e831c, Func Offset: 0x55c
	// Line 1169, Address: 0x3e833c, Func Offset: 0x57c
	// Line 1184, Address: 0x3e8340, Func Offset: 0x580
	// Line 1169, Address: 0x3e834c, Func Offset: 0x58c
	// Line 1184, Address: 0x3e8350, Func Offset: 0x590
	// Line 1171, Address: 0x3e83b0, Func Offset: 0x5f0
	// Line 1184, Address: 0x3e83b4, Func Offset: 0x5f4
	// Line 1182, Address: 0x3e83bc, Func Offset: 0x5fc
	// Line 1184, Address: 0x3e83c0, Func Offset: 0x600
	// Line 1182, Address: 0x3e83d0, Func Offset: 0x610
	// Line 1184, Address: 0x3e83d4, Func Offset: 0x614
	// Line 1182, Address: 0x3e83d8, Func Offset: 0x618
	// Line 1184, Address: 0x3e83f0, Func Offset: 0x630
	// Line 1155, Address: 0x3e83fc, Func Offset: 0x63c
	// Line 1184, Address: 0x3e8400, Func Offset: 0x640
	// Line 1167, Address: 0x3e8418, Func Offset: 0x658
	// Line 1184, Address: 0x3e841c, Func Offset: 0x65c
	// Line 1167, Address: 0x3e8424, Func Offset: 0x664
	// Line 1184, Address: 0x3e8428, Func Offset: 0x668
	// Line 1167, Address: 0x3e842c, Func Offset: 0x66c
	// Line 1184, Address: 0x3e8430, Func Offset: 0x670
	// Line 1167, Address: 0x3e8434, Func Offset: 0x674
	// Line 1168, Address: 0x3e843c, Func Offset: 0x67c
	// Line 1184, Address: 0x3e844c, Func Offset: 0x68c
	// Line 1169, Address: 0x3e84a0, Func Offset: 0x6e0
	// Line 1184, Address: 0x3e84a4, Func Offset: 0x6e4
	// Line 1169, Address: 0x3e84a8, Func Offset: 0x6e8
	// Line 1184, Address: 0x3e84ac, Func Offset: 0x6ec
	// Line 1169, Address: 0x3e84b4, Func Offset: 0x6f4
	// Line 1184, Address: 0x3e84bc, Func Offset: 0x6fc
	// Line 1169, Address: 0x3e84c4, Func Offset: 0x704
	// Line 1184, Address: 0x3e84d4, Func Offset: 0x714
	// Line 1169, Address: 0x3e84e0, Func Offset: 0x720
	// Line 1184, Address: 0x3e8508, Func Offset: 0x748
	// Line 1169, Address: 0x3e8518, Func Offset: 0x758
	// Line 1184, Address: 0x3e854c, Func Offset: 0x78c
	// Line 1169, Address: 0x3e8554, Func Offset: 0x794
	// Line 1184, Address: 0x3e8558, Func Offset: 0x798
	// Line 1169, Address: 0x3e8560, Func Offset: 0x7a0
	// Line 1184, Address: 0x3e8564, Func Offset: 0x7a4
	// Line 1185, Address: 0x3e8578, Func Offset: 0x7b8
	// Func End, Address: 0x3e85ac, Func Offset: 0x7ec
}

// irender__5xfontCFPCcff
// Start address: 0x3e85b0
void xfont::irender(int8* text, float32 x, float32 y)
{
	// Line 1088, Address: 0x3e85b0, Func Offset: 0
	// Func End, Address: 0x3e85b8, Func Offset: 0x8
}

// stop_render__5xfontCFv
// Start address: 0x3e85c0
void stop_render()
{
	// Line 1056, Address: 0x3e85c0, Func Offset: 0
	// Line 1061, Address: 0x3e85d0, Func Offset: 0x10
	// Line 1062, Address: 0x3e8690, Func Offset: 0xd0
	// Line 1061, Address: 0x3e86a0, Func Offset: 0xe0
	// Line 1062, Address: 0x3e86a4, Func Offset: 0xe4
	// Func End, Address: 0x3e86c0, Func Offset: 0x100
}

// start_render__5xfontCFv
// Start address: 0x3e86c0
void xfont::start_render()
{
	// Line 1046, Address: 0x3e86c0, Func Offset: 0
	// Func End, Address: 0x3e870c, Func Offset: 0x4c
}

// bounds__5xfontCFPCcUifRUi
// Start address: 0x3e8710
basic_rect_0 xfont::bounds(int8* text, uint32 text_size, float32 max_width, uint32& size)
{
	font_data& fd;
	basic_rect_0 r;
	int8* s;
	float32 dx;
	uint32 charIndex;
	font_data& fd;
	// Line 998, Address: 0x3e8710, Func Offset: 0
	// Line 1000, Address: 0x3e8714, Func Offset: 0x4
	// Line 1003, Address: 0x3e8720, Func Offset: 0x10
	// Line 1000, Address: 0x3e8724, Func Offset: 0x14
	// Line 1003, Address: 0x3e8728, Func Offset: 0x18
	// Line 1002, Address: 0x3e872c, Func Offset: 0x1c
	// Line 1004, Address: 0x3e8730, Func Offset: 0x20
	// Line 1000, Address: 0x3e8734, Func Offset: 0x24
	// Line 1003, Address: 0x3e873c, Func Offset: 0x2c
	// Line 1005, Address: 0x3e8740, Func Offset: 0x30
	// Line 1003, Address: 0x3e8744, Func Offset: 0x34
	// Line 1005, Address: 0x3e8748, Func Offset: 0x38
	// Line 1003, Address: 0x3e874c, Func Offset: 0x3c
	// Line 1006, Address: 0x3e8750, Func Offset: 0x40
	// Line 1028, Address: 0x3e8760, Func Offset: 0x50
	// Line 1009, Address: 0x3e8764, Func Offset: 0x54
	// Line 1028, Address: 0x3e8768, Func Offset: 0x58
	// Line 1015, Address: 0x3e876c, Func Offset: 0x5c
	// Line 1020, Address: 0x3e8770, Func Offset: 0x60
	// Line 1028, Address: 0x3e8774, Func Offset: 0x64
	// Line 1012, Address: 0x3e87a4, Func Offset: 0x94
	// Line 1028, Address: 0x3e87b0, Func Offset: 0xa0
	// Line 1021, Address: 0x3e87dc, Func Offset: 0xcc
	// Line 1028, Address: 0x3e87e0, Func Offset: 0xd0
	// Line 1021, Address: 0x3e87e8, Func Offset: 0xd8
	// Line 1025, Address: 0x3e87ec, Func Offset: 0xdc
	// Line 1028, Address: 0x3e87f0, Func Offset: 0xe0
	// Line 1026, Address: 0x3e87f4, Func Offset: 0xe4
	// Line 1028, Address: 0x3e87fc, Func Offset: 0xec
	// Line 1027, Address: 0x3e8804, Func Offset: 0xf4
	// Line 1006, Address: 0x3e8814, Func Offset: 0x104
	// Line 1028, Address: 0x3e8818, Func Offset: 0x108
	// Line 1006, Address: 0x3e8838, Func Offset: 0x128
	// Line 1028, Address: 0x3e8840, Func Offset: 0x130
	// Line 1024, Address: 0x3e8844, Func Offset: 0x134
	// Line 1028, Address: 0x3e8848, Func Offset: 0x138
	// Line 1029, Address: 0x3e8858, Func Offset: 0x148
	// Line 1032, Address: 0x3e8870, Func Offset: 0x160
	// Line 1031, Address: 0x3e8874, Func Offset: 0x164
	// Line 1032, Address: 0x3e8878, Func Offset: 0x168
	// Line 1031, Address: 0x3e887c, Func Offset: 0x16c
	// Line 1032, Address: 0x3e8880, Func Offset: 0x170
	// Line 1029, Address: 0x3e88a0, Func Offset: 0x190
	// Line 1033, Address: 0x3e88ac, Func Offset: 0x19c
	// Func End, Address: 0x3e88b4, Func Offset: 0x1a4
}

// bounds__5xfontCFPCc
// Start address: 0x3e88c0
basic_rect_0 xfont::bounds(int8* text)
{
	uint32 size;
	// Line 981, Address: 0x3e88c0, Func Offset: 0
	// Line 983, Address: 0x3e88c4, Func Offset: 0x4
	// Line 981, Address: 0x3e88cc, Func Offset: 0xc
	// Line 983, Address: 0x3e88d0, Func Offset: 0x10
	// Line 984, Address: 0x3e88e0, Func Offset: 0x20
	// Func End, Address: 0x3e88ec, Func Offset: 0x2c
}

// restore_render_state__5xfontFv
// Start address: 0x3e88f0
void xfont::restore_render_state()
{
	// Line 939, Address: 0x3e88f0, Func Offset: 0
	// Line 940, Address: 0x3e88f4, Func Offset: 0x4
	// Line 939, Address: 0x3e88f8, Func Offset: 0x8
	// Line 940, Address: 0x3e8900, Func Offset: 0x10
	// Line 939, Address: 0x3e8904, Func Offset: 0x14
	// Line 940, Address: 0x3e890c, Func Offset: 0x1c
	// Line 941, Address: 0x3e8918, Func Offset: 0x28
	// Line 942, Address: 0x3e892c, Func Offset: 0x3c
	// Line 943, Address: 0x3e8940, Func Offset: 0x50
	// Line 944, Address: 0x3e8954, Func Offset: 0x64
	// Line 945, Address: 0x3e8968, Func Offset: 0x78
	// Line 946, Address: 0x3e897c, Func Offset: 0x8c
	// Line 947, Address: 0x3e8990, Func Offset: 0xa0
	// Line 948, Address: 0x3e89a4, Func Offset: 0xb4
	// Line 949, Address: 0x3e89b4, Func Offset: 0xc4
	// Func End, Address: 0x3e89c4, Func Offset: 0xd4
}

// set_render_state__5xfontFP8RwRaster
// Start address: 0x3e89d0
void xfont::set_render_state(RwRaster* raster)
{
	// Line 917, Address: 0x3e89d0, Func Offset: 0
	// Line 919, Address: 0x3e89d4, Func Offset: 0x4
	// Line 917, Address: 0x3e89d8, Func Offset: 0x8
	// Line 919, Address: 0x3e89dc, Func Offset: 0xc
	// Line 917, Address: 0x3e89e0, Func Offset: 0x10
	// Line 919, Address: 0x3e89f4, Func Offset: 0x24
	// Line 920, Address: 0x3e8a00, Func Offset: 0x30
	// Line 921, Address: 0x3e8a14, Func Offset: 0x44
	// Line 922, Address: 0x3e8a28, Func Offset: 0x58
	// Line 923, Address: 0x3e8a3c, Func Offset: 0x6c
	// Line 924, Address: 0x3e8a50, Func Offset: 0x80
	// Line 925, Address: 0x3e8a64, Func Offset: 0x94
	// Line 926, Address: 0x3e8a78, Func Offset: 0xa8
	// Line 928, Address: 0x3e8a90, Func Offset: 0xc0
	// Line 926, Address: 0x3e8a94, Func Offset: 0xc4
	// Line 928, Address: 0x3e8a98, Func Offset: 0xc8
	// Line 929, Address: 0x3e8aa4, Func Offset: 0xd4
	// Line 930, Address: 0x3e8ab4, Func Offset: 0xe4
	// Line 931, Address: 0x3e8ac4, Func Offset: 0xf4
	// Line 932, Address: 0x3e8ad4, Func Offset: 0x104
	// Line 933, Address: 0x3e8ae4, Func Offset: 0x114
	// Line 934, Address: 0x3e8af4, Func Offset: 0x124
	// Line 935, Address: 0x3e8b04, Func Offset: 0x134
	// Line 936, Address: 0x3e8b14, Func Offset: 0x144
	// Line 937, Address: 0x3e8b24, Func Offset: 0x154
	// Func End, Address: 0x3e8b38, Func Offset: 0x168
}

// init__5xfontFv
// Start address: 0x3e8b40
void xfont::init()
{
	uint32 i;
	font_data& fd;
	int8 filename[20];
	// Line 865, Address: 0x3e8b40, Func Offset: 0
	// Line 867, Address: 0x3e8b50, Func Offset: 0x10
	// Line 866, Address: 0x3e8b58, Func Offset: 0x18
	// Line 867, Address: 0x3e8b5c, Func Offset: 0x1c
	// Line 873, Address: 0x3e8b64, Func Offset: 0x24
	// Line 884, Address: 0x3e8b70, Func Offset: 0x30
	// Line 891, Address: 0x3e8b80, Func Offset: 0x40
	// Line 895, Address: 0x3e8b90, Func Offset: 0x50
	// Line 896, Address: 0x3e8bb0, Func Offset: 0x70
	// Line 902, Address: 0x3e8bd0, Func Offset: 0x90
	// Line 898, Address: 0x3e8bf8, Func Offset: 0xb8
	// Line 902, Address: 0x3e8bfc, Func Offset: 0xbc
	// Line 898, Address: 0x3e8c14, Func Offset: 0xd4
	// Line 902, Address: 0x3e8c1c, Func Offset: 0xdc
	// Line 901, Address: 0x3e8c4c, Func Offset: 0x10c
	// Line 902, Address: 0x3e8c50, Func Offset: 0x110
	// Line 874, Address: 0x3e8c64, Func Offset: 0x124
	// Line 902, Address: 0x3e8c68, Func Offset: 0x128
	// Line 886, Address: 0x3e8c84, Func Offset: 0x144
	// Line 902, Address: 0x3e8c88, Func Offset: 0x148
	// Line 904, Address: 0x3e8cb8, Func Offset: 0x178
	// Line 905, Address: 0x3e8cc0, Func Offset: 0x180
	// Func End, Address: 0x3e8cd4, Func Offset: 0x194
}

// load_model__19@unnamed@xWad2_cpp@FUi
// Start address: 0x3e8ce0
xModelInstance* load_model(uint32 id)
{
	uint32 next_order'86;
	uint32 oldest;
	uint32 i;
	model_cache_entry& e;
	RpAtomic* mf;
	model_cache_entry& e;
	xModelInstance& model;
	uint32 next_order;
	// Line 807, Address: 0x3e8ce0, Func Offset: 0
	// Line 810, Address: 0x3e8ce4, Func Offset: 0x4
	// Line 807, Address: 0x3e8ce8, Func Offset: 0x8
	// Line 812, Address: 0x3e8cec, Func Offset: 0xc
	// Line 807, Address: 0x3e8cf0, Func Offset: 0x10
	// Line 812, Address: 0x3e8cf4, Func Offset: 0x14
	// Line 807, Address: 0x3e8cf8, Func Offset: 0x18
	// Line 811, Address: 0x3e8d00, Func Offset: 0x20
	// Line 812, Address: 0x3e8d04, Func Offset: 0x24
	// Line 810, Address: 0x3e8d08, Func Offset: 0x28
	// Line 820, Address: 0x3e8d10, Func Offset: 0x30
	// Line 815, Address: 0x3e8d14, Func Offset: 0x34
	// Line 817, Address: 0x3e8d20, Func Offset: 0x40
	// Line 818, Address: 0x3e8d2c, Func Offset: 0x4c
	// Line 820, Address: 0x3e8d34, Func Offset: 0x54
	// Line 821, Address: 0x3e8d58, Func Offset: 0x78
	// Line 823, Address: 0x3e8d68, Func Offset: 0x88
	// Line 824, Address: 0x3e8d74, Func Offset: 0x94
	// Line 828, Address: 0x3e8d84, Func Offset: 0xa4
	// Line 826, Address: 0x3e8d88, Func Offset: 0xa8
	// Line 832, Address: 0x3e8da0, Func Offset: 0xc0
	// Line 827, Address: 0x3e8da4, Func Offset: 0xc4
	// Line 832, Address: 0x3e8da8, Func Offset: 0xc8
	// Line 828, Address: 0x3e8dac, Func Offset: 0xcc
	// Line 829, Address: 0x3e8db0, Func Offset: 0xd0
	// Line 832, Address: 0x3e8db4, Func Offset: 0xd4
	// Line 833, Address: 0x3e8dd8, Func Offset: 0xf8
	// Line 835, Address: 0x3e8ddc, Func Offset: 0xfc
	// Line 836, Address: 0x3e8dec, Func Offset: 0x10c
	// Line 839, Address: 0x3e8e14, Func Offset: 0x134
	// Line 836, Address: 0x3e8e18, Func Offset: 0x138
	// Line 861, Address: 0x3e8e34, Func Offset: 0x154
	// Func End, Address: 0x3e8e48, Func Offset: 0x168
}

// init_model_cache__19@unnamed@xWad2_cpp@Fv
// Start address: 0x3e8e50
void init_model_cache()
{
	void* data;
	model_pool& pool;
	xModelInstance& model;
	model_cache_entry& e;
	// Line 776, Address: 0x3e8e50, Func Offset: 0
	// Line 778, Address: 0x3e8e54, Func Offset: 0x4
	// Line 776, Address: 0x3e8e58, Func Offset: 0x8
	// Line 786, Address: 0x3e8e5c, Func Offset: 0xc
	// Line 776, Address: 0x3e8e60, Func Offset: 0x10
	// Line 786, Address: 0x3e8e64, Func Offset: 0x14
	// Line 788, Address: 0x3e8e74, Func Offset: 0x24
	// Line 789, Address: 0x3e8e78, Func Offset: 0x28
	// Line 796, Address: 0x3e8e88, Func Offset: 0x38
	// Line 802, Address: 0x3e8e8c, Func Offset: 0x3c
	// Line 796, Address: 0x3e8e90, Func Offset: 0x40
	// Line 802, Address: 0x3e8e94, Func Offset: 0x44
	// Line 796, Address: 0x3e8e98, Func Offset: 0x48
	// Line 802, Address: 0x3e8e9c, Func Offset: 0x4c
	// Line 796, Address: 0x3e8ea0, Func Offset: 0x50
	// Line 802, Address: 0x3e8ea4, Func Offset: 0x54
	// Line 794, Address: 0x3e8ea8, Func Offset: 0x58
	// Line 797, Address: 0x3e8eac, Func Offset: 0x5c
	// Line 794, Address: 0x3e8eb4, Func Offset: 0x64
	// Line 800, Address: 0x3e8eb8, Func Offset: 0x68
	// Line 799, Address: 0x3e8ebc, Func Offset: 0x6c
	// Line 802, Address: 0x3e8ec0, Func Offset: 0x70
	// Line 800, Address: 0x3e8ec4, Func Offset: 0x74
	// Line 802, Address: 0x3e8ec8, Func Offset: 0x78
	// Line 801, Address: 0x3e8ecc, Func Offset: 0x7c
	// Line 802, Address: 0x3e8ed0, Func Offset: 0x80
	// Line 794, Address: 0x3e8edc, Func Offset: 0x8c
	// Line 799, Address: 0x3e8ee0, Func Offset: 0x90
	// Line 802, Address: 0x3e8ee4, Func Offset: 0x94
	// Line 799, Address: 0x3e8efc, Func Offset: 0xac
	// Line 802, Address: 0x3e8f00, Func Offset: 0xb0
	// Line 794, Address: 0x3e8f04, Func Offset: 0xb4
	// Line 802, Address: 0x3e8f08, Func Offset: 0xb8
	// Line 799, Address: 0x3e8f14, Func Offset: 0xc4
	// Line 802, Address: 0x3e8f18, Func Offset: 0xc8
	// Line 794, Address: 0x3e8f1c, Func Offset: 0xcc
	// Line 802, Address: 0x3e8f20, Func Offset: 0xd0
	// Line 799, Address: 0x3e8f34, Func Offset: 0xe4
	// Line 802, Address: 0x3e8f38, Func Offset: 0xe8
	// Line 794, Address: 0x3e8f3c, Func Offset: 0xec
	// Line 802, Address: 0x3e8f40, Func Offset: 0xf0
	// Line 799, Address: 0x3e8f4c, Func Offset: 0xfc
	// Line 802, Address: 0x3e8f50, Func Offset: 0x100
	// Line 794, Address: 0x3e8f54, Func Offset: 0x104
	// Line 802, Address: 0x3e8f58, Func Offset: 0x108
	// Line 799, Address: 0x3e8f6c, Func Offset: 0x11c
	// Line 802, Address: 0x3e8f70, Func Offset: 0x120
	// Line 794, Address: 0x3e8f74, Func Offset: 0x124
	// Line 802, Address: 0x3e8f78, Func Offset: 0x128
	// Line 799, Address: 0x3e8f84, Func Offset: 0x134
	// Line 802, Address: 0x3e8f88, Func Offset: 0x138
	// Line 804, Address: 0x3e8ff4, Func Offset: 0x1a4
	// Func End, Address: 0x3e9004, Func Offset: 0x1b4
}

// tex_render_shadowed__19@unnamed@xWad2_cpp@FRC13basic_rect<f>RC13basic_rect<f>RC13basic_rect<f>10xColor_tag10xColor_tagfff
// Start address: 0x3e9010
void tex_render_shadowed(basic_rect_0& src, basic_rect_0& dst, basic_rect_0& clip, xColor_tag color, xColor_tag shadowcolor, float32 shadowOffsetX, float32 shadowOffsetY, float32 fshear)
{
	basic_rect_0 r;
	basic_rect_0 rt;
	RwSky2DVertex* vert;
	// Line 652, Address: 0x3e9010, Func Offset: 0
	// Line 654, Address: 0x3e9014, Func Offset: 0x4
	// Line 652, Address: 0x3e9018, Func Offset: 0x8
	// Line 654, Address: 0x3e9020, Func Offset: 0x10
	// Line 652, Address: 0x3e9024, Func Offset: 0x14
	// Line 654, Address: 0x3e9028, Func Offset: 0x18
	// Line 652, Address: 0x3e902c, Func Offset: 0x1c
	// Line 654, Address: 0x3e9030, Func Offset: 0x20
	// Line 652, Address: 0x3e9038, Func Offset: 0x28
	// Line 654, Address: 0x3e9040, Func Offset: 0x30
	// Line 652, Address: 0x3e9048, Func Offset: 0x38
	// Line 654, Address: 0x3e904c, Func Offset: 0x3c
	// Line 652, Address: 0x3e9050, Func Offset: 0x40
	// Line 654, Address: 0x3e9058, Func Offset: 0x48
	// Line 652, Address: 0x3e905c, Func Offset: 0x4c
	// Line 654, Address: 0x3e9060, Func Offset: 0x50
	// Line 652, Address: 0x3e9064, Func Offset: 0x54
	// Line 654, Address: 0x3e9068, Func Offset: 0x58
	// Line 652, Address: 0x3e906c, Func Offset: 0x5c
	// Line 654, Address: 0x3e9070, Func Offset: 0x60
	// Line 655, Address: 0x3e9078, Func Offset: 0x68
	// Line 654, Address: 0x3e907c, Func Offset: 0x6c
	// Line 655, Address: 0x3e9080, Func Offset: 0x70
	// Line 654, Address: 0x3e9084, Func Offset: 0x74
	// Line 655, Address: 0x3e9088, Func Offset: 0x78
	// Line 652, Address: 0x3e9090, Func Offset: 0x80
	// Line 655, Address: 0x3e90a4, Func Offset: 0x94
	// Line 652, Address: 0x3e90a8, Func Offset: 0x98
	// Line 655, Address: 0x3e90b4, Func Offset: 0xa4
	// Line 652, Address: 0x3e90b8, Func Offset: 0xa8
	// Line 655, Address: 0x3e90bc, Func Offset: 0xac
	// Line 654, Address: 0x3e90cc, Func Offset: 0xbc
	// Line 655, Address: 0x3e90d4, Func Offset: 0xc4
	// Line 656, Address: 0x3e9154, Func Offset: 0x144
	// Line 659, Address: 0x3e919c, Func Offset: 0x18c
	// Line 666, Address: 0x3e91ac, Func Offset: 0x19c
	// Line 667, Address: 0x3e91b4, Func Offset: 0x1a4
	// Line 666, Address: 0x3e91b8, Func Offset: 0x1a8
	// Line 667, Address: 0x3e91c0, Func Offset: 0x1b0
	// Line 668, Address: 0x3e9230, Func Offset: 0x220
	// Line 667, Address: 0x3e9234, Func Offset: 0x224
	// Line 668, Address: 0x3e923c, Func Offset: 0x22c
	// Line 667, Address: 0x3e9244, Func Offset: 0x234
	// Line 668, Address: 0x3e925c, Func Offset: 0x24c
	// Line 667, Address: 0x3e9278, Func Offset: 0x268
	// Line 668, Address: 0x3e9280, Func Offset: 0x270
	// Line 669, Address: 0x3e9344, Func Offset: 0x334
	// Line 668, Address: 0x3e9350, Func Offset: 0x340
	// Line 669, Address: 0x3e9354, Func Offset: 0x344
	// Line 670, Address: 0x3e9448, Func Offset: 0x438
	// Line 669, Address: 0x3e9454, Func Offset: 0x444
	// Line 670, Address: 0x3e945c, Func Offset: 0x44c
	// Line 673, Address: 0x3e954c, Func Offset: 0x53c
	// Line 671, Address: 0x3e9550, Func Offset: 0x540
	// Line 673, Address: 0x3e9554, Func Offset: 0x544
	// Line 671, Address: 0x3e9558, Func Offset: 0x548
	// Line 673, Address: 0x3e9564, Func Offset: 0x554
	// Line 671, Address: 0x3e956c, Func Offset: 0x55c
	// Line 672, Address: 0x3e957c, Func Offset: 0x56c
	// Line 673, Address: 0x3e959c, Func Offset: 0x58c
	// Line 700, Address: 0x3e9674, Func Offset: 0x664
	// Line 675, Address: 0x3e9678, Func Offset: 0x668
	// Line 676, Address: 0x3e9698, Func Offset: 0x688
	// Line 677, Address: 0x3e96b8, Func Offset: 0x6a8
	// Line 678, Address: 0x3e96d8, Func Offset: 0x6c8
	// Line 679, Address: 0x3e96f8, Func Offset: 0x6e8
	// Line 680, Address: 0x3e9718, Func Offset: 0x708
	// Line 682, Address: 0x3e9738, Func Offset: 0x728
	// Line 683, Address: 0x3e9744, Func Offset: 0x734
	// Line 685, Address: 0x3e9750, Func Offset: 0x740
	// Line 686, Address: 0x3e975c, Func Offset: 0x74c
	// Line 688, Address: 0x3e9768, Func Offset: 0x758
	// Line 689, Address: 0x3e9774, Func Offset: 0x764
	// Line 691, Address: 0x3e9780, Func Offset: 0x770
	// Line 692, Address: 0x3e978c, Func Offset: 0x77c
	// Line 694, Address: 0x3e9798, Func Offset: 0x788
	// Line 695, Address: 0x3e97a4, Func Offset: 0x794
	// Line 697, Address: 0x3e97b0, Func Offset: 0x7a0
	// Line 698, Address: 0x3e97bc, Func Offset: 0x7ac
	// Line 700, Address: 0x3e97c4, Func Offset: 0x7b4
	// Line 707, Address: 0x3e9888, Func Offset: 0x878
	// Line 702, Address: 0x3e988c, Func Offset: 0x87c
	// Line 707, Address: 0x3e9890, Func Offset: 0x880
	// Line 702, Address: 0x3e9894, Func Offset: 0x884
	// Line 707, Address: 0x3e9898, Func Offset: 0x888
	// Line 702, Address: 0x3e989c, Func Offset: 0x88c
	// Line 703, Address: 0x3e98b4, Func Offset: 0x8a4
	// Line 704, Address: 0x3e98d4, Func Offset: 0x8c4
	// Line 705, Address: 0x3e98f4, Func Offset: 0x8e4
	// Line 706, Address: 0x3e9914, Func Offset: 0x904
	// Line 708, Address: 0x3e9930, Func Offset: 0x920
	// Line 655, Address: 0x3e9938, Func Offset: 0x928
	// Line 708, Address: 0x3e9940, Func Offset: 0x930
	// Line 655, Address: 0x3e9944, Func Offset: 0x934
	// Line 708, Address: 0x3e9950, Func Offset: 0x940
	// Line 655, Address: 0x3e9960, Func Offset: 0x950
	// Line 708, Address: 0x3e9964, Func Offset: 0x954
	// Line 655, Address: 0x3e9968, Func Offset: 0x958
	// Line 708, Address: 0x3e9970, Func Offset: 0x960
	// Line 655, Address: 0x3e9980, Func Offset: 0x970
	// Line 708, Address: 0x3e9988, Func Offset: 0x978
	// Line 655, Address: 0x3e9994, Func Offset: 0x984
	// Line 708, Address: 0x3e9998, Func Offset: 0x988
	// Line 655, Address: 0x3e999c, Func Offset: 0x98c
	// Line 708, Address: 0x3e99a0, Func Offset: 0x990
	// Line 655, Address: 0x3e99a8, Func Offset: 0x998
	// Line 708, Address: 0x3e99c8, Func Offset: 0x9b8
	// Line 655, Address: 0x3e99d0, Func Offset: 0x9c0
	// Line 708, Address: 0x3e99e8, Func Offset: 0x9d8
	// Line 661, Address: 0x3e99f4, Func Offset: 0x9e4
	// Line 708, Address: 0x3e99f8, Func Offset: 0x9e8
	// Func End, Address: 0x3e9a44, Func Offset: 0xa34
}

// tex_render__19@unnamed@xWad2_cpp@FRC13basic_rect<f>RC13basic_rect<f>RC13basic_rect<f>10xColor_tag
// Start address: 0x3e9a50
void tex_render(basic_rect_0& src, basic_rect_0& dst, basic_rect_0& clip, xColor_tag color)
{
	basic_rect_0 r;
	basic_rect_0 rt;
	RwSky2DVertex* vert;
	// Line 624, Address: 0x3e9a50, Func Offset: 0
	// Line 626, Address: 0x3e9a54, Func Offset: 0x4
	// Line 624, Address: 0x3e9a58, Func Offset: 0x8
	// Line 626, Address: 0x3e9a5c, Func Offset: 0xc
	// Line 624, Address: 0x3e9a60, Func Offset: 0x10
	// Line 626, Address: 0x3e9a64, Func Offset: 0x14
	// Line 624, Address: 0x3e9a68, Func Offset: 0x18
	// Line 626, Address: 0x3e9a70, Func Offset: 0x20
	// Line 624, Address: 0x3e9a74, Func Offset: 0x24
	// Line 626, Address: 0x3e9a78, Func Offset: 0x28
	// Line 624, Address: 0x3e9a7c, Func Offset: 0x2c
	// Line 627, Address: 0x3e9a80, Func Offset: 0x30
	// Line 624, Address: 0x3e9a84, Func Offset: 0x34
	// Line 626, Address: 0x3e9a88, Func Offset: 0x38
	// Line 624, Address: 0x3e9a90, Func Offset: 0x40
	// Line 626, Address: 0x3e9a98, Func Offset: 0x48
	// Line 624, Address: 0x3e9a9c, Func Offset: 0x4c
	// Line 626, Address: 0x3e9aa0, Func Offset: 0x50
	// Line 624, Address: 0x3e9aa8, Func Offset: 0x58
	// Line 626, Address: 0x3e9aac, Func Offset: 0x5c
	// Line 624, Address: 0x3e9ab0, Func Offset: 0x60
	// Line 627, Address: 0x3e9ab4, Func Offset: 0x64
	// Line 624, Address: 0x3e9ab8, Func Offset: 0x68
	// Line 627, Address: 0x3e9abc, Func Offset: 0x6c
	// Line 626, Address: 0x3e9ac4, Func Offset: 0x74
	// Line 627, Address: 0x3e9ad4, Func Offset: 0x84
	// Line 628, Address: 0x3e9b00, Func Offset: 0xb0
	// Line 629, Address: 0x3e9b98, Func Offset: 0x148
	// Line 632, Address: 0x3e9be0, Func Offset: 0x190
	// Line 640, Address: 0x3e9bf0, Func Offset: 0x1a0
	// Line 641, Address: 0x3e9bf8, Func Offset: 0x1a8
	// Line 640, Address: 0x3e9bfc, Func Offset: 0x1ac
	// Line 641, Address: 0x3e9c04, Func Offset: 0x1b4
	// Line 642, Address: 0x3e9c6c, Func Offset: 0x21c
	// Line 641, Address: 0x3e9c70, Func Offset: 0x220
	// Line 642, Address: 0x3e9c7c, Func Offset: 0x22c
	// Line 641, Address: 0x3e9c84, Func Offset: 0x234
	// Line 642, Address: 0x3e9c94, Func Offset: 0x244
	// Line 641, Address: 0x3e9c98, Func Offset: 0x248
	// Line 642, Address: 0x3e9c9c, Func Offset: 0x24c
	// Line 641, Address: 0x3e9cb0, Func Offset: 0x260
	// Line 642, Address: 0x3e9cbc, Func Offset: 0x26c
	// Line 643, Address: 0x3e9d80, Func Offset: 0x330
	// Line 642, Address: 0x3e9d88, Func Offset: 0x338
	// Line 643, Address: 0x3e9d8c, Func Offset: 0x33c
	// Line 644, Address: 0x3e9e80, Func Offset: 0x430
	// Line 643, Address: 0x3e9e84, Func Offset: 0x434
	// Line 644, Address: 0x3e9e8c, Func Offset: 0x43c
	// Line 647, Address: 0x3e9f7c, Func Offset: 0x52c
	// Line 645, Address: 0x3e9f80, Func Offset: 0x530
	// Line 647, Address: 0x3e9f84, Func Offset: 0x534
	// Line 645, Address: 0x3e9f88, Func Offset: 0x538
	// Line 647, Address: 0x3e9f8c, Func Offset: 0x53c
	// Line 645, Address: 0x3e9f90, Func Offset: 0x540
	// Line 646, Address: 0x3e9fa8, Func Offset: 0x558
	// Line 647, Address: 0x3e9fc8, Func Offset: 0x578
	// Line 648, Address: 0x3ea0a0, Func Offset: 0x650
	// Line 649, Address: 0x3ea0a8, Func Offset: 0x658
	// Line 628, Address: 0x3ea0b0, Func Offset: 0x660
	// Line 649, Address: 0x3ea0b8, Func Offset: 0x668
	// Line 628, Address: 0x3ea0bc, Func Offset: 0x66c
	// Line 649, Address: 0x3ea0c0, Func Offset: 0x670
	// Line 628, Address: 0x3ea0c4, Func Offset: 0x674
	// Line 649, Address: 0x3ea0cc, Func Offset: 0x67c
	// Line 628, Address: 0x3ea0dc, Func Offset: 0x68c
	// Line 649, Address: 0x3ea0e0, Func Offset: 0x690
	// Line 628, Address: 0x3ea0e4, Func Offset: 0x694
	// Line 649, Address: 0x3ea0ec, Func Offset: 0x69c
	// Line 628, Address: 0x3ea0fc, Func Offset: 0x6ac
	// Line 649, Address: 0x3ea104, Func Offset: 0x6b4
	// Line 628, Address: 0x3ea110, Func Offset: 0x6c0
	// Line 649, Address: 0x3ea118, Func Offset: 0x6c8
	// Line 628, Address: 0x3ea120, Func Offset: 0x6d0
	// Line 649, Address: 0x3ea140, Func Offset: 0x6f0
	// Line 628, Address: 0x3ea148, Func Offset: 0x6f8
	// Line 649, Address: 0x3ea160, Func Offset: 0x710
	// Line 634, Address: 0x3ea16c, Func Offset: 0x71c
	// Line 649, Address: 0x3ea170, Func Offset: 0x720
	// Func End, Address: 0x3ea1ac, Func Offset: 0x75c
}

// init_font_data__19@unnamed@xWad2_cpp@FRQ219@unnamed@xWad2_cpp@9font_data
// Start address: 0x3ea1b0
uint8 init_font_data(font_data& fd)
{
	font_asset& a;
	int32 height;
	uint8 i;
	uint8 c;
	uint32 tail_index;
	// Line 493, Address: 0x3ea1b0, Func Offset: 0
	// Line 495, Address: 0x3ea1c0, Func Offset: 0x10
	// Line 497, Address: 0x3ea1c8, Func Offset: 0x18
	// Line 498, Address: 0x3ea1dc, Func Offset: 0x2c
	// Line 499, Address: 0x3ea1e4, Func Offset: 0x34
	// Line 505, Address: 0x3ea1e8, Func Offset: 0x38
	// Line 499, Address: 0x3ea1f0, Func Offset: 0x40
	// Line 508, Address: 0x3ea1f4, Func Offset: 0x44
	// Line 499, Address: 0x3ea200, Func Offset: 0x50
	// Line 500, Address: 0x3ea20c, Func Offset: 0x5c
	// Line 505, Address: 0x3ea21c, Func Offset: 0x6c
	// Line 504, Address: 0x3ea220, Func Offset: 0x70
	// Line 505, Address: 0x3ea224, Func Offset: 0x74
	// Line 506, Address: 0x3ea228, Func Offset: 0x78
	// Line 505, Address: 0x3ea22c, Func Offset: 0x7c
	// Line 506, Address: 0x3ea230, Func Offset: 0x80
	// Line 505, Address: 0x3ea238, Func Offset: 0x88
	// Line 508, Address: 0x3ea23c, Func Offset: 0x8c
	// Line 509, Address: 0x3ea244, Func Offset: 0x94
	// Line 510, Address: 0x3ea24c, Func Offset: 0x9c
	// Line 533, Address: 0x3ea25c, Func Offset: 0xac
	// Line 534, Address: 0x3ea264, Func Offset: 0xb4
	// Line 512, Address: 0x3ea268, Func Offset: 0xb8
	// Line 514, Address: 0x3ea26c, Func Offset: 0xbc
	// Line 517, Address: 0x3ea274, Func Offset: 0xc4
	// Line 518, Address: 0x3ea280, Func Offset: 0xd0
	// Line 524, Address: 0x3ea28c, Func Offset: 0xdc
	// Line 526, Address: 0x3ea298, Func Offset: 0xe8
	// Line 527, Address: 0x3ea2a8, Func Offset: 0xf8
	// Line 528, Address: 0x3ea2b0, Func Offset: 0x100
	// Line 529, Address: 0x3ea2c4, Func Offset: 0x114
	// Line 533, Address: 0x3ea2c8, Func Offset: 0x118
	// Line 534, Address: 0x3ea4e0, Func Offset: 0x330
	// Line 536, Address: 0x3ea580, Func Offset: 0x3d0
	// Line 537, Address: 0x3ea5d0, Func Offset: 0x420
	// Line 538, Address: 0x3ea61c, Func Offset: 0x46c
	// Line 542, Address: 0x3ea640, Func Offset: 0x490
	// Line 545, Address: 0x3ea650, Func Offset: 0x4a0
	// Line 546, Address: 0x3ea654, Func Offset: 0x4a4
	// Line 547, Address: 0x3ea668, Func Offset: 0x4b8
	// Line 549, Address: 0x3ea6e4, Func Offset: 0x534
	// Line 547, Address: 0x3ea6e8, Func Offset: 0x538
	// Line 552, Address: 0x3ea6f4, Func Offset: 0x544
	// Line 555, Address: 0x3ea704, Func Offset: 0x554
	// Line 556, Address: 0x3ea708, Func Offset: 0x558
	// Line 557, Address: 0x3ea71c, Func Offset: 0x56c
	// Line 559, Address: 0x3ea798, Func Offset: 0x5e8
	// Line 557, Address: 0x3ea79c, Func Offset: 0x5ec
	// Line 562, Address: 0x3ea7a8, Func Offset: 0x5f8
	// Line 573, Address: 0x3ea7b8, Func Offset: 0x608
	// Line 575, Address: 0x3ea7bc, Func Offset: 0x60c
	// Line 576, Address: 0x3ea7d8, Func Offset: 0x628
	// Line 577, Address: 0x3ea82c, Func Offset: 0x67c
	// Line 576, Address: 0x3ea830, Func Offset: 0x680
	// Line 577, Address: 0x3ea844, Func Offset: 0x694
	// Line 498, Address: 0x3ea84c, Func Offset: 0x69c
	// Line 577, Address: 0x3ea854, Func Offset: 0x6a4
	// Line 521, Address: 0x3ea868, Func Offset: 0x6b8
	// Line 577, Address: 0x3ea870, Func Offset: 0x6c0
	// Line 524, Address: 0x3ea884, Func Offset: 0x6d4
	// Line 577, Address: 0x3ea894, Func Offset: 0x6e4
	// Line 566, Address: 0x3ea898, Func Offset: 0x6e8
	// Line 577, Address: 0x3ea89c, Func Offset: 0x6ec
	// Line 567, Address: 0x3ea8b4, Func Offset: 0x704
	// Line 577, Address: 0x3ea8bc, Func Offset: 0x70c
	// Line 567, Address: 0x3ea8c4, Func Offset: 0x714
	// Line 577, Address: 0x3ea8fc, Func Offset: 0x74c
	// Line 567, Address: 0x3ea900, Func Offset: 0x750
	// Line 577, Address: 0x3ea904, Func Offset: 0x754
	// Line 578, Address: 0x3ea918, Func Offset: 0x768
	// Func End, Address: 0x3ea92c, Func Offset: 0x77c
}

// reset_font_spacing__19@unnamed@xWad2_cpp@FRQ219@unnamed@xWad2_cpp@10font_asset
// Start address: 0x3ea930
uint8 reset_font_spacing(font_asset& a)
{
	RwTexture* tex;
	basic_rect_1 char_bounds;
	uint8 baseline_count[256];
	int32 width;
	RwImage* image;
	xColor_tag* bits;
	int32 i;
	basic_rect_1 r;
	int32 baseline;
	// Line 391, Address: 0x3ea930, Func Offset: 0
	// Line 392, Address: 0x3ea960, Func Offset: 0x30
	// Line 393, Address: 0x3ea970, Func Offset: 0x40
	// Line 396, Address: 0x3ea978, Func Offset: 0x48
	// Line 393, Address: 0x3ea97c, Func Offset: 0x4c
	// Line 396, Address: 0x3ea980, Func Offset: 0x50
	// Line 399, Address: 0x3ea984, Func Offset: 0x54
	// Line 396, Address: 0x3ea990, Func Offset: 0x60
	// Line 397, Address: 0x3ea994, Func Offset: 0x64
	// Line 399, Address: 0x3ea998, Func Offset: 0x68
	// Line 400, Address: 0x3ea9a0, Func Offset: 0x70
	// Line 404, Address: 0x3ea9a4, Func Offset: 0x74
	// Line 400, Address: 0x3ea9a8, Func Offset: 0x78
	// Line 402, Address: 0x3ea9ac, Func Offset: 0x7c
	// Line 404, Address: 0x3ea9b0, Func Offset: 0x80
	// Line 405, Address: 0x3ea9c0, Func Offset: 0x90
	// Line 406, Address: 0x3ea9c8, Func Offset: 0x98
	// Line 407, Address: 0x3ea9d0, Func Offset: 0xa0
	// Line 410, Address: 0x3ea9dc, Func Offset: 0xac
	// Line 408, Address: 0x3ea9e0, Func Offset: 0xb0
	// Line 410, Address: 0x3ea9e4, Func Offset: 0xb4
	// Line 413, Address: 0x3ea9f4, Func Offset: 0xc4
	// Line 415, Address: 0x3eaa04, Func Offset: 0xd4
	// Line 416, Address: 0x3eaa10, Func Offset: 0xe0
	// Line 415, Address: 0x3eaa14, Func Offset: 0xe4
	// Line 416, Address: 0x3eaa28, Func Offset: 0xf8
	// Line 417, Address: 0x3eaa40, Func Offset: 0x110
	// Line 420, Address: 0x3eaa48, Func Offset: 0x118
	// Line 421, Address: 0x3eaa54, Func Offset: 0x124
	// Line 420, Address: 0x3eaa58, Func Offset: 0x128
	// Line 421, Address: 0x3eaa6c, Func Offset: 0x13c
	// Line 430, Address: 0x3eaa88, Func Offset: 0x158
	// Line 436, Address: 0x3eaab4, Func Offset: 0x184
	// Line 430, Address: 0x3eaab8, Func Offset: 0x188
	// Line 436, Address: 0x3eaac8, Func Offset: 0x198
	// Line 430, Address: 0x3eaacc, Func Offset: 0x19c
	// Line 436, Address: 0x3eaad8, Func Offset: 0x1a8
	// Line 438, Address: 0x3eaae0, Func Offset: 0x1b0
	// Line 439, Address: 0x3eaae4, Func Offset: 0x1b4
	// Line 441, Address: 0x3eaae8, Func Offset: 0x1b8
	// Line 444, Address: 0x3eaaf0, Func Offset: 0x1c0
	// Line 445, Address: 0x3eaaf8, Func Offset: 0x1c8
	// Line 444, Address: 0x3eab00, Func Offset: 0x1d0
	// Line 445, Address: 0x3eab08, Func Offset: 0x1d8
	// Line 446, Address: 0x3eab0c, Func Offset: 0x1dc
	// Line 449, Address: 0x3eab10, Func Offset: 0x1e0
	// Line 450, Address: 0x3eab30, Func Offset: 0x200
	// Line 452, Address: 0x3eab5c, Func Offset: 0x22c
	// Line 454, Address: 0x3eab78, Func Offset: 0x248
	// Line 455, Address: 0x3eab80, Func Offset: 0x250
	// Line 393, Address: 0x3eab88, Func Offset: 0x258
	// Line 405, Address: 0x3eab90, Func Offset: 0x260
	// Line 456, Address: 0x3eaba0, Func Offset: 0x270
	// Func End, Address: 0x3eabd0, Func Offset: 0x2a0
}

// find_bounds__19@unnamed@xWad2_cpp@FPC10xColor_tagRC13basic_rect<i>i
// Start address: 0x3eabd0
basic_rect_1 find_bounds(xColor_tag* bits, basic_rect_1& r, int32 pitch)
{
	int32 diff;
	xColor_tag* endp;
	xColor_tag* p;
	int32 pmode;
	int32 minx;
	int32 maxx;
	int32 miny;
	int32 maxy;
	int32 y;
	xColor_tag* endline;
	int32 x;
	basic_rect_1 b;
	// Line 346, Address: 0x3eabd0, Func Offset: 0
	// Line 348, Address: 0x3eabd4, Func Offset: 0x4
	// Line 346, Address: 0x3eabd8, Func Offset: 0x8
	// Line 359, Address: 0x3eabdc, Func Offset: 0xc
	// Line 346, Address: 0x3eabec, Func Offset: 0x1c
	// Line 349, Address: 0x3eabf0, Func Offset: 0x20
	// Line 348, Address: 0x3eabf4, Func Offset: 0x24
	// Line 349, Address: 0x3eabf8, Func Offset: 0x28
	// Line 359, Address: 0x3eabfc, Func Offset: 0x2c
	// Line 363, Address: 0x3eac28, Func Offset: 0x58
	// Line 359, Address: 0x3eac2c, Func Offset: 0x5c
	// Line 364, Address: 0x3eac30, Func Offset: 0x60
	// Line 362, Address: 0x3eac34, Func Offset: 0x64
	// Line 363, Address: 0x3eac38, Func Offset: 0x68
	// Line 367, Address: 0x3eac3c, Func Offset: 0x6c
	// Line 369, Address: 0x3eac50, Func Offset: 0x80
	// Line 370, Address: 0x3eac54, Func Offset: 0x84
	// Line 373, Address: 0x3eac5c, Func Offset: 0x8c
	// Line 375, Address: 0x3eac78, Func Offset: 0xa8
	// Line 376, Address: 0x3eac88, Func Offset: 0xb8
	// Line 377, Address: 0x3eac98, Func Offset: 0xc8
	// Line 378, Address: 0x3eaca8, Func Offset: 0xd8
	// Line 380, Address: 0x3eacbc, Func Offset: 0xec
	// Line 381, Address: 0x3eacc8, Func Offset: 0xf8
	// Line 385, Address: 0x3eacd4, Func Offset: 0x104
	// Line 383, Address: 0x3eacd8, Func Offset: 0x108
	// Line 385, Address: 0x3eacdc, Func Offset: 0x10c
	// Line 386, Address: 0x3eace0, Func Offset: 0x110
	// Line 384, Address: 0x3eace4, Func Offset: 0x114
	// Line 387, Address: 0x3eace8, Func Offset: 0x118
	// Line 385, Address: 0x3eacec, Func Offset: 0x11c
	// Line 386, Address: 0x3eacf0, Func Offset: 0x120
	// Line 387, Address: 0x3eacf8, Func Offset: 0x128
	// Line 388, Address: 0x3ead3c, Func Offset: 0x16c
	// Func End, Address: 0x3ead48, Func Offset: 0x178
}

