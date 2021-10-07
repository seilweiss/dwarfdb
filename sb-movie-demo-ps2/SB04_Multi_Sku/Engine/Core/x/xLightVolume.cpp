



void render_atomic(RpAtomic* atomic, xColor_tag color, uint8 inside);
void render_all();
void deactivate();
uint8 activate();
void create();
void reset_all();
void scene_exit();
void scene_enter();

// render_atomic__12xLightVolumeFP8RpAtomic10xColor_tagbUi
// Start address: 0x410910
void render_atomic(RpAtomic* atomic, xColor_tag color, uint8 inside)
{
	xFXFastRaster fr;
	// Line 703, Address: 0x410910, Func Offset: 0
	// Line 707, Address: 0x41092c, Func Offset: 0x1c
	// Line 711, Address: 0x41093c, Func Offset: 0x2c
	// Line 713, Address: 0x410984, Func Offset: 0x74
	// Line 717, Address: 0x41098c, Func Offset: 0x7c
	// Line 720, Address: 0x4109a0, Func Offset: 0x90
	// Line 721, Address: 0x4109b4, Func Offset: 0xa4
	// Line 722, Address: 0x4109c0, Func Offset: 0xb0
	// Line 721, Address: 0x4109c4, Func Offset: 0xb4
	// Line 722, Address: 0x4109c8, Func Offset: 0xb8
	// Line 721, Address: 0x4109d0, Func Offset: 0xc0
	// Line 722, Address: 0x4109d4, Func Offset: 0xc4
	// Line 723, Address: 0x410bb0, Func Offset: 0x2a0
	// Line 728, Address: 0x410bbc, Func Offset: 0x2ac
	// Line 729, Address: 0x410bc4, Func Offset: 0x2b4
	// Line 730, Address: 0x410bdc, Func Offset: 0x2cc
	// Line 732, Address: 0x410bec, Func Offset: 0x2dc
	// Line 733, Address: 0x410bf0, Func Offset: 0x2e0
	// Line 732, Address: 0x410bf4, Func Offset: 0x2e4
	// Line 733, Address: 0x410bf8, Func Offset: 0x2e8
	// Line 734, Address: 0x410c04, Func Offset: 0x2f4
	// Line 735, Address: 0x410c0c, Func Offset: 0x2fc
	// Line 740, Address: 0x410c14, Func Offset: 0x304
	// Line 741, Address: 0x410c24, Func Offset: 0x314
	// Line 744, Address: 0x410c34, Func Offset: 0x324
	// Line 741, Address: 0x410c38, Func Offset: 0x328
	// Line 744, Address: 0x410c3c, Func Offset: 0x32c
	// Line 745, Address: 0x410c48, Func Offset: 0x338
	// Line 744, Address: 0x410c4c, Func Offset: 0x33c
	// Line 745, Address: 0x410c50, Func Offset: 0x340
	// Line 744, Address: 0x410c58, Func Offset: 0x348
	// Line 745, Address: 0x410c5c, Func Offset: 0x34c
	// Line 746, Address: 0x410e38, Func Offset: 0x528
	// Line 749, Address: 0x410e44, Func Offset: 0x534
	// Line 750, Address: 0x410e54, Func Offset: 0x544
	// Line 749, Address: 0x410e58, Func Offset: 0x548
	// Line 750, Address: 0x410e5c, Func Offset: 0x54c
	// Line 749, Address: 0x410e64, Func Offset: 0x554
	// Line 750, Address: 0x410e68, Func Offset: 0x558
	// Line 751, Address: 0x411040, Func Offset: 0x730
	// Line 754, Address: 0x41104c, Func Offset: 0x73c
	// Line 757, Address: 0x41105c, Func Offset: 0x74c
	// Line 761, Address: 0x411068, Func Offset: 0x758
	// Line 762, Address: 0x411080, Func Offset: 0x770
	// Line 763, Address: 0x411258, Func Offset: 0x948
	// Line 766, Address: 0x411264, Func Offset: 0x954
	// Line 767, Address: 0x411270, Func Offset: 0x960
	// Func End, Address: 0x411288, Func Offset: 0x978
}

// render_all__12xLightVolumeFv
// Start address: 0x411290
void xLightVolume::render_all()
{
	uint32 oldATEST;
	xFXFastRaster fr;
	activity_type* act;
	activity_type* end_act;
	uint32 newATEST;
	// Line 648, Address: 0x411290, Func Offset: 0
	// Line 656, Address: 0x4112a4, Func Offset: 0x14
	// Line 659, Address: 0x4112b0, Func Offset: 0x20
	// Line 661, Address: 0x4112b4, Func Offset: 0x24
	// Line 663, Address: 0x4112c0, Func Offset: 0x30
	// Line 670, Address: 0x4112c8, Func Offset: 0x38
	// Line 671, Address: 0x4112d0, Func Offset: 0x40
	// Line 672, Address: 0x4112ec, Func Offset: 0x5c
	// Line 673, Address: 0x4112fc, Func Offset: 0x6c
	// Line 675, Address: 0x41130c, Func Offset: 0x7c
	// Line 676, Address: 0x411328, Func Offset: 0x98
	// Line 677, Address: 0x411338, Func Offset: 0xa8
	// Line 680, Address: 0x411340, Func Offset: 0xb0
	// Line 681, Address: 0x411350, Func Offset: 0xc0
	// Line 683, Address: 0x411358, Func Offset: 0xc8
	// Line 681, Address: 0x41135c, Func Offset: 0xcc
	// Line 683, Address: 0x411360, Func Offset: 0xd0
	// Line 684, Address: 0x411368, Func Offset: 0xd8
	// Line 687, Address: 0x411370, Func Offset: 0xe0
	// Line 688, Address: 0x411384, Func Offset: 0xf4
	// Line 691, Address: 0x411390, Func Offset: 0x100
	// Line 692, Address: 0x41139c, Func Offset: 0x10c
	// Line 694, Address: 0x4113ac, Func Offset: 0x11c
	// Line 695, Address: 0x4113bc, Func Offset: 0x12c
	// Line 696, Address: 0x4113c8, Func Offset: 0x138
	// Line 697, Address: 0x4113d0, Func Offset: 0x140
	// Line 699, Address: 0x4113e4, Func Offset: 0x154
	// Line 700, Address: 0x4113ec, Func Offset: 0x15c
	// Func End, Address: 0x411404, Func Offset: 0x174
}

// deactivate__12xLightVolumeFv
// Start address: 0x411410
void xLightVolume::deactivate()
{
	activity_type* tail_activity;
	// Line 100, Address: 0x411410, Func Offset: 0
	// Line 103, Address: 0x411414, Func Offset: 0x4
	// Line 100, Address: 0x411418, Func Offset: 0x8
	// Line 103, Address: 0x411420, Func Offset: 0x10
	// Line 104, Address: 0x41142c, Func Offset: 0x1c
	// Line 106, Address: 0x411434, Func Offset: 0x24
	// Line 107, Address: 0x411440, Func Offset: 0x30
	// Line 111, Address: 0x411448, Func Offset: 0x38
	// Func End, Address: 0x411450, Func Offset: 0x40
}

// activate__12xLightVolumeFv
// Start address: 0x411450
uint8 xLightVolume::activate()
{
	// Line 71, Address: 0x411450, Func Offset: 0
	// Line 85, Address: 0x411454, Func Offset: 0x4
	// Line 86, Address: 0x411460, Func Offset: 0x10
	// Line 92, Address: 0x411468, Func Offset: 0x18
	// Line 88, Address: 0x41146c, Func Offset: 0x1c
	// Line 89, Address: 0x411478, Func Offset: 0x28
	// Line 90, Address: 0x411484, Func Offset: 0x34
	// Line 93, Address: 0x41148c, Func Offset: 0x3c
	// Func End, Address: 0x411494, Func Offset: 0x44
}

// create__12xLightVolumeFv
// Start address: 0x4114a0
void xLightVolume::create()
{
	// Line 68, Address: 0x4114a0, Func Offset: 0
	// Func End, Address: 0x4114a8, Func Offset: 0x8
}

// reset_all__12xLightVolumeFv
// Start address: 0x4114b0
void xLightVolume::reset_all()
{
	activity_type* act;
	activity_type* end_act;
	// Line 52, Address: 0x4114b0, Func Offset: 0
	// Line 51, Address: 0x4114b4, Func Offset: 0x4
	// Line 52, Address: 0x4114b8, Func Offset: 0x8
	// Line 53, Address: 0x4114c0, Func Offset: 0x10
	// Line 56, Address: 0x4114c8, Func Offset: 0x18
	// Line 60, Address: 0x4114cc, Func Offset: 0x1c
	// Line 56, Address: 0x4114d0, Func Offset: 0x20
	// Line 60, Address: 0x4114d4, Func Offset: 0x24
	// Line 63, Address: 0x4114e8, Func Offset: 0x38
	// Func End, Address: 0x4114f0, Func Offset: 0x40
}

// scene_exit__12xLightVolumeFv
// Start address: 0x4114f0
void xLightVolume::scene_exit()
{
	// Line 48, Address: 0x4114f0, Func Offset: 0
	// Func End, Address: 0x4114f8, Func Offset: 0x8
}

// scene_enter__12xLightVolumeFv
// Start address: 0x411500
void xLightVolume::scene_enter()
{
	// Line 39, Address: 0x411500, Func Offset: 0
	// Line 40, Address: 0x411504, Func Offset: 0x4
	// Line 39, Address: 0x411508, Func Offset: 0x8
	// Line 40, Address: 0x41150c, Func Offset: 0xc
	// Line 42, Address: 0x41151c, Func Offset: 0x1c
	// Line 43, Address: 0x411520, Func Offset: 0x20
	// Func End, Address: 0x41152c, Func Offset: 0x2c
}

