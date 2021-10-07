



void intersect_circle(float32 x, float32 y, float32 r, cb_flame_circle_check& cb);
void intersect_circle(float32 x, float32 y, float32 r, cb_flame_sphere_check& cb);
void intersect_rect(float32 x0, float32 y0, float32 x1, float32 y1, cb_flame_sphere_check& cb);
void intersect_rect(float32 x0, float32 y0, float32 x1, float32 y1, cb_flame_circle_check& cb);
uint8 intersect_rect(cell* c, float32 x0, float32 y0, float32 x1, float32 y1, cb_flame_circle_check& cb);
uint8 intersect_rect(cell* c, float32 x0, float32 y0, float32 x1, float32 y1, cb_flame_sphere_check& cb);

// intersect_circle<Q219@unnamed@zFire_cpp@21cb_flame_circle_check>__21xSpacePartitionTree2DFfffRQ219@unnamed@zFire_cpp@21cb_flame_circle_check_v
// Start address: 0x4890d0
void xSpacePartitionTree2D::intersect_circle(float32 x, float32 y, float32 r, cb_flame_circle_check& cb)
{
	// Line 456, Address: 0x4890d0, Func Offset: 0
	// Func End, Address: 0x4890f0, Func Offset: 0x20
}

// intersect_circle<Q219@unnamed@zFire_cpp@21cb_flame_sphere_check>__21xSpacePartitionTree2DFfffRQ219@unnamed@zFire_cpp@21cb_flame_sphere_check_v
// Start address: 0x4890f0
void xSpacePartitionTree2D::intersect_circle(float32 x, float32 y, float32 r, cb_flame_sphere_check& cb)
{
	// Line 456, Address: 0x4890f0, Func Offset: 0
	// Func End, Address: 0x489110, Func Offset: 0x20
}

// intersect_rect<Q219@unnamed@zFire_cpp@21cb_flame_sphere_check>__21xSpacePartitionTree2DFffffRQ219@unnamed@zFire_cpp@21cb_flame_sphere_check_v
// Start address: 0x489110
void xSpacePartitionTree2D::intersect_rect(float32 x0, float32 y0, float32 x1, float32 y1, cb_flame_sphere_check& cb)
{
	float32 scale;
	int32 gy;
	int32 gx;
	// Line 469, Address: 0x489110, Func Offset: 0
	// Line 470, Address: 0x489154, Func Offset: 0x44
	// Line 471, Address: 0x48916c, Func Offset: 0x5c
	// Line 475, Address: 0x489178, Func Offset: 0x68
	// Line 477, Address: 0x48917c, Func Offset: 0x6c
	// Line 475, Address: 0x489180, Func Offset: 0x70
	// Line 476, Address: 0x489184, Func Offset: 0x74
	// Line 477, Address: 0x48918c, Func Offset: 0x7c
	// Line 476, Address: 0x489190, Func Offset: 0x80
	// Line 477, Address: 0x489194, Func Offset: 0x84
	// Line 476, Address: 0x48919c, Func Offset: 0x8c
	// Line 477, Address: 0x4891a4, Func Offset: 0x94
	// Line 482, Address: 0x4891b8, Func Offset: 0xa8
	// Line 483, Address: 0x4891fc, Func Offset: 0xec
	// Line 484, Address: 0x48923c, Func Offset: 0x12c
	// Line 485, Address: 0x48927c, Func Offset: 0x16c
	// Line 490, Address: 0x4892b0, Func Offset: 0x1a0
	// Line 492, Address: 0x4892bc, Func Offset: 0x1ac
	// Line 499, Address: 0x4892c8, Func Offset: 0x1b8
	// Line 500, Address: 0x4892d8, Func Offset: 0x1c8
	// Line 492, Address: 0x489304, Func Offset: 0x1f4
	// Line 500, Address: 0x489308, Func Offset: 0x1f8
	// Line 494, Address: 0x48930c, Func Offset: 0x1fc
	// Line 500, Address: 0x489310, Func Offset: 0x200
	// Line 494, Address: 0x489314, Func Offset: 0x204
	// Line 500, Address: 0x48931c, Func Offset: 0x20c
	// Line 494, Address: 0x489320, Func Offset: 0x210
	// Line 500, Address: 0x489324, Func Offset: 0x214
	// Line 494, Address: 0x489328, Func Offset: 0x218
	// Line 500, Address: 0x48932c, Func Offset: 0x21c
	// Line 494, Address: 0x489330, Func Offset: 0x220
	// Line 500, Address: 0x489338, Func Offset: 0x228
	// Line 494, Address: 0x48933c, Func Offset: 0x22c
	// Line 500, Address: 0x489344, Func Offset: 0x234
	// Func End, Address: 0x4893b0, Func Offset: 0x2a0
}

// intersect_rect<Q219@unnamed@zFire_cpp@21cb_flame_circle_check>__21xSpacePartitionTree2DFffffRQ219@unnamed@zFire_cpp@21cb_flame_circle_check_v
// Start address: 0x4893b0
void xSpacePartitionTree2D::intersect_rect(float32 x0, float32 y0, float32 x1, float32 y1, cb_flame_circle_check& cb)
{
	float32 scale;
	int32 gy;
	int32 gx;
	// Line 469, Address: 0x4893b0, Func Offset: 0
	// Line 470, Address: 0x4893f4, Func Offset: 0x44
	// Line 471, Address: 0x48940c, Func Offset: 0x5c
	// Line 475, Address: 0x489418, Func Offset: 0x68
	// Line 477, Address: 0x48941c, Func Offset: 0x6c
	// Line 475, Address: 0x489420, Func Offset: 0x70
	// Line 476, Address: 0x489424, Func Offset: 0x74
	// Line 477, Address: 0x48942c, Func Offset: 0x7c
	// Line 476, Address: 0x489430, Func Offset: 0x80
	// Line 477, Address: 0x489434, Func Offset: 0x84
	// Line 476, Address: 0x48943c, Func Offset: 0x8c
	// Line 477, Address: 0x489444, Func Offset: 0x94
	// Line 482, Address: 0x489458, Func Offset: 0xa8
	// Line 483, Address: 0x48949c, Func Offset: 0xec
	// Line 484, Address: 0x4894dc, Func Offset: 0x12c
	// Line 485, Address: 0x48951c, Func Offset: 0x16c
	// Line 490, Address: 0x489550, Func Offset: 0x1a0
	// Line 492, Address: 0x48955c, Func Offset: 0x1ac
	// Line 499, Address: 0x489568, Func Offset: 0x1b8
	// Line 500, Address: 0x489578, Func Offset: 0x1c8
	// Line 492, Address: 0x4895a4, Func Offset: 0x1f4
	// Line 500, Address: 0x4895a8, Func Offset: 0x1f8
	// Line 494, Address: 0x4895ac, Func Offset: 0x1fc
	// Line 500, Address: 0x4895b0, Func Offset: 0x200
	// Line 494, Address: 0x4895b4, Func Offset: 0x204
	// Line 500, Address: 0x4895bc, Func Offset: 0x20c
	// Line 494, Address: 0x4895c0, Func Offset: 0x210
	// Line 500, Address: 0x4895c4, Func Offset: 0x214
	// Line 494, Address: 0x4895c8, Func Offset: 0x218
	// Line 500, Address: 0x4895cc, Func Offset: 0x21c
	// Line 494, Address: 0x4895d0, Func Offset: 0x220
	// Line 500, Address: 0x4895d8, Func Offset: 0x228
	// Line 494, Address: 0x4895dc, Func Offset: 0x22c
	// Line 500, Address: 0x4895e4, Func Offset: 0x234
	// Func End, Address: 0x489650, Func Offset: 0x2a0
}

// intersect_rect<Q219@unnamed@zFire_cpp@21cb_flame_circle_check>__21xSpacePartitionTree2DFPQ221xSpacePartitionTree2D4cellffffRQ219@unnamed@zFire_cpp@21cb_flame_circle_check_b
// Start address: 0x489650
uint8 xSpacePartitionTree2D::intersect_rect(cell* c, float32 x0, float32 y0, float32 x1, float32 y1, cb_flame_circle_check& cb)
{
	float32 code_scale;
	int32 xcode0;
	int32 ycode0;
	int32 xcode1;
	int32 ycode1;
	cell* cell_list;
	entry_node* node_list;
	entry_data* entry_list;
	int32 diff;
	int32 level;
	int32 bit;
	uint16 _i;
	entry_node* _n;
	entry_data* _e;
	uint16 searchid;
	cell* topc;
	int32 index;
	uint16 _i;
	entry_node* _n;
	entry_data* _e;
	cell* cc;
	int32 code_width;
	int32 left;
	int32 right;
	int32 top;
	int32 bottom;
	// Line 606, Address: 0x489650, Func Offset: 0
	// Line 609, Address: 0x489654, Func Offset: 0x4
	// Line 606, Address: 0x489658, Func Offset: 0x8
	// Line 615, Address: 0x48966c, Func Offset: 0x1c
	// Line 616, Address: 0x489670, Func Offset: 0x20
	// Line 617, Address: 0x489674, Func Offset: 0x24
	// Line 609, Address: 0x489678, Func Offset: 0x28
	// Line 610, Address: 0x489688, Func Offset: 0x38
	// Line 612, Address: 0x489694, Func Offset: 0x44
	// Line 611, Address: 0x489698, Func Offset: 0x48
	// Line 612, Address: 0x4896a4, Func Offset: 0x54
	// Line 613, Address: 0x4896a8, Func Offset: 0x58
	// Line 612, Address: 0x4896b0, Func Offset: 0x60
	// Line 613, Address: 0x4896b4, Func Offset: 0x64
	// Line 622, Address: 0x4896b8, Func Offset: 0x68
	// Line 634, Address: 0x4896c4, Func Offset: 0x74
	// Line 629, Address: 0x4896cc, Func Offset: 0x7c
	// Line 630, Address: 0x4896d0, Func Offset: 0x80
	// Line 631, Address: 0x4896d4, Func Offset: 0x84
	// Line 634, Address: 0x4896e0, Func Offset: 0x90
	// Line 636, Address: 0x4897ac, Func Offset: 0x15c
	// Line 640, Address: 0x4897b4, Func Offset: 0x164
	// Line 641, Address: 0x4897e4, Func Offset: 0x194
	// Line 634, Address: 0x4897f0, Func Offset: 0x1a0
	// Line 641, Address: 0x4897f8, Func Offset: 0x1a8
	// Line 634, Address: 0x4897fc, Func Offset: 0x1ac
	// Line 641, Address: 0x489800, Func Offset: 0x1b0
	// Line 634, Address: 0x489818, Func Offset: 0x1c8
	// Line 637, Address: 0x489820, Func Offset: 0x1d0
	// Line 643, Address: 0x489828, Func Offset: 0x1d8
	// Line 648, Address: 0x48982c, Func Offset: 0x1dc
	// Line 649, Address: 0x489830, Func Offset: 0x1e0
	// Line 653, Address: 0x489834, Func Offset: 0x1e4
	// Line 655, Address: 0x48988c, Func Offset: 0x23c
	// Line 653, Address: 0x489890, Func Offset: 0x240
	// Line 658, Address: 0x489894, Func Offset: 0x244
	// Line 660, Address: 0x48989c, Func Offset: 0x24c
	// Line 665, Address: 0x4898c0, Func Offset: 0x270
	// Line 666, Address: 0x4898c4, Func Offset: 0x274
	// Line 667, Address: 0x4898c8, Func Offset: 0x278
	// Line 665, Address: 0x4898cc, Func Offset: 0x27c
	// Line 666, Address: 0x4898d0, Func Offset: 0x280
	// Line 668, Address: 0x4898d4, Func Offset: 0x284
	// Line 673, Address: 0x489900, Func Offset: 0x2b0
	// Line 677, Address: 0x489904, Func Offset: 0x2b4
	// Line 678, Address: 0x48990c, Func Offset: 0x2bc
	// Line 682, Address: 0x489920, Func Offset: 0x2d0
	// Line 683, Address: 0x489928, Func Offset: 0x2d8
	// Line 684, Address: 0x48992c, Func Offset: 0x2dc
	// Line 683, Address: 0x489930, Func Offset: 0x2e0
	// Line 684, Address: 0x489934, Func Offset: 0x2e4
	// Line 685, Address: 0x489940, Func Offset: 0x2f0
	// Line 653, Address: 0x489958, Func Offset: 0x308
	// Line 685, Address: 0x489960, Func Offset: 0x310
	// Line 653, Address: 0x489990, Func Offset: 0x340
	// Line 685, Address: 0x4899ac, Func Offset: 0x35c
	// Line 653, Address: 0x4899b4, Func Offset: 0x364
	// Line 685, Address: 0x4899b8, Func Offset: 0x368
	// Line 653, Address: 0x4899c4, Func Offset: 0x374
	// Line 685, Address: 0x4899c8, Func Offset: 0x378
	// Line 653, Address: 0x4899d0, Func Offset: 0x380
	// Line 685, Address: 0x4899e0, Func Offset: 0x390
	// Line 653, Address: 0x4899e4, Func Offset: 0x394
	// Line 685, Address: 0x4899e8, Func Offset: 0x398
	// Line 682, Address: 0x489a00, Func Offset: 0x3b0
	// Line 689, Address: 0x489a04, Func Offset: 0x3b4
	// Func End, Address: 0x489a1c, Func Offset: 0x3cc
}

// intersect_rect<Q219@unnamed@zFire_cpp@21cb_flame_sphere_check>__21xSpacePartitionTree2DFPQ221xSpacePartitionTree2D4cellffffRQ219@unnamed@zFire_cpp@21cb_flame_sphere_check_b
// Start address: 0x489a20
uint8 xSpacePartitionTree2D::intersect_rect(cell* c, float32 x0, float32 y0, float32 x1, float32 y1, cb_flame_sphere_check& cb)
{
	float32 code_scale;
	int32 xcode0;
	int32 ycode0;
	int32 xcode1;
	int32 ycode1;
	cell* cell_list;
	entry_node* node_list;
	entry_data* entry_list;
	int32 diff;
	int32 level;
	int32 bit;
	uint16 _i;
	entry_node* _n;
	entry_data* _e;
	uint16 searchid;
	cell* topc;
	int32 index;
	uint16 _i;
	entry_node* _n;
	entry_data* _e;
	cell* cc;
	int32 code_width;
	int32 left;
	int32 right;
	int32 top;
	int32 bottom;
	// Line 606, Address: 0x489a20, Func Offset: 0
	// Line 623, Address: 0x489a34, Func Offset: 0x14
	// Line 606, Address: 0x489a38, Func Offset: 0x18
	// Line 623, Address: 0x489a3c, Func Offset: 0x1c
	// Line 606, Address: 0x489a40, Func Offset: 0x20
	// Line 609, Address: 0x489a44, Func Offset: 0x24
	// Line 606, Address: 0x489a48, Func Offset: 0x28
	// Line 615, Address: 0x489a4c, Func Offset: 0x2c
	// Line 616, Address: 0x489a50, Func Offset: 0x30
	// Line 617, Address: 0x489a54, Func Offset: 0x34
	// Line 609, Address: 0x489a58, Func Offset: 0x38
	// Line 610, Address: 0x489a68, Func Offset: 0x48
	// Line 612, Address: 0x489a74, Func Offset: 0x54
	// Line 611, Address: 0x489a78, Func Offset: 0x58
	// Line 612, Address: 0x489a84, Func Offset: 0x64
	// Line 613, Address: 0x489a88, Func Offset: 0x68
	// Line 612, Address: 0x489a90, Func Offset: 0x70
	// Line 613, Address: 0x489a94, Func Offset: 0x74
	// Line 622, Address: 0x489a98, Func Offset: 0x78
	// Line 634, Address: 0x489aa4, Func Offset: 0x84
	// Line 629, Address: 0x489aac, Func Offset: 0x8c
	// Line 630, Address: 0x489ab0, Func Offset: 0x90
	// Line 631, Address: 0x489ab4, Func Offset: 0x94
	// Line 634, Address: 0x489ac0, Func Offset: 0xa0
	// Line 636, Address: 0x489b3c, Func Offset: 0x11c
	// Line 640, Address: 0x489b44, Func Offset: 0x124
	// Line 641, Address: 0x489b74, Func Offset: 0x154
	// Line 634, Address: 0x489b7c, Func Offset: 0x15c
	// Line 641, Address: 0x489b80, Func Offset: 0x160
	// Line 634, Address: 0x489ba8, Func Offset: 0x188
	// Line 641, Address: 0x489bac, Func Offset: 0x18c
	// Line 634, Address: 0x489bb0, Func Offset: 0x190
	// Line 641, Address: 0x489bb4, Func Offset: 0x194
	// Line 634, Address: 0x489bbc, Func Offset: 0x19c
	// Line 641, Address: 0x489bc8, Func Offset: 0x1a8
	// Line 634, Address: 0x489bd0, Func Offset: 0x1b0
	// Line 641, Address: 0x489bd8, Func Offset: 0x1b8
	// Line 634, Address: 0x489bdc, Func Offset: 0x1bc
	// Line 641, Address: 0x489be4, Func Offset: 0x1c4
	// Line 634, Address: 0x489bec, Func Offset: 0x1cc
	// Line 641, Address: 0x489bf0, Func Offset: 0x1d0
	// Line 634, Address: 0x489c00, Func Offset: 0x1e0
	// Line 641, Address: 0x489c04, Func Offset: 0x1e4
	// Line 634, Address: 0x489c20, Func Offset: 0x200
	// Line 637, Address: 0x489c28, Func Offset: 0x208
	// Line 643, Address: 0x489c30, Func Offset: 0x210
	// Line 648, Address: 0x489c34, Func Offset: 0x214
	// Line 649, Address: 0x489c38, Func Offset: 0x218
	// Line 653, Address: 0x489c44, Func Offset: 0x224
	// Line 655, Address: 0x489c9c, Func Offset: 0x27c
	// Line 653, Address: 0x489ca0, Func Offset: 0x280
	// Line 658, Address: 0x489ca4, Func Offset: 0x284
	// Line 660, Address: 0x489cac, Func Offset: 0x28c
	// Line 665, Address: 0x489cd0, Func Offset: 0x2b0
	// Line 666, Address: 0x489cd4, Func Offset: 0x2b4
	// Line 667, Address: 0x489cd8, Func Offset: 0x2b8
	// Line 665, Address: 0x489cdc, Func Offset: 0x2bc
	// Line 666, Address: 0x489ce0, Func Offset: 0x2c0
	// Line 668, Address: 0x489ce4, Func Offset: 0x2c4
	// Line 673, Address: 0x489d10, Func Offset: 0x2f0
	// Line 677, Address: 0x489d14, Func Offset: 0x2f4
	// Line 678, Address: 0x489d1c, Func Offset: 0x2fc
	// Line 682, Address: 0x489d30, Func Offset: 0x310
	// Line 683, Address: 0x489d38, Func Offset: 0x318
	// Line 684, Address: 0x489d3c, Func Offset: 0x31c
	// Line 683, Address: 0x489d40, Func Offset: 0x320
	// Line 684, Address: 0x489d44, Func Offset: 0x324
	// Line 685, Address: 0x489d50, Func Offset: 0x330
	// Line 653, Address: 0x489d68, Func Offset: 0x348
	// Line 685, Address: 0x489d70, Func Offset: 0x350
	// Line 653, Address: 0x489d84, Func Offset: 0x364
	// Line 685, Address: 0x489d88, Func Offset: 0x368
	// Line 653, Address: 0x489d90, Func Offset: 0x370
	// Line 685, Address: 0x489d98, Func Offset: 0x378
	// Line 653, Address: 0x489dc0, Func Offset: 0x3a0
	// Line 685, Address: 0x489dc4, Func Offset: 0x3a4
	// Line 653, Address: 0x489dc8, Func Offset: 0x3a8
	// Line 685, Address: 0x489dcc, Func Offset: 0x3ac
	// Line 653, Address: 0x489dd4, Func Offset: 0x3b4
	// Line 685, Address: 0x489de0, Func Offset: 0x3c0
	// Line 653, Address: 0x489de8, Func Offset: 0x3c8
	// Line 685, Address: 0x489df0, Func Offset: 0x3d0
	// Line 653, Address: 0x489df4, Func Offset: 0x3d4
	// Line 685, Address: 0x489dfc, Func Offset: 0x3dc
	// Line 653, Address: 0x489e04, Func Offset: 0x3e4
	// Line 685, Address: 0x489e08, Func Offset: 0x3e8
	// Line 653, Address: 0x489e18, Func Offset: 0x3f8
	// Line 685, Address: 0x489e1c, Func Offset: 0x3fc
	// Line 682, Address: 0x489e38, Func Offset: 0x418
	// Line 689, Address: 0x489e3c, Func Offset: 0x41c
	// Func End, Address: 0x489e5c, Func Offset: 0x43c
}

