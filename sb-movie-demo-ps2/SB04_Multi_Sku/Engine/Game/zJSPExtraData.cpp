typedef struct xDynAsset;
typedef struct zJSPExtraData;
typedef struct zJSPExtraDataAsset;
typedef struct xLinkAsset;
typedef struct xBase;
typedef struct jspGroupPair;
typedef struct xBaseAsset;

typedef void(*type_2)(xBase*, xBase*, uint32, float32*, xBase*, uint32);

typedef int8 type_0[16];
typedef float32 type_1[4];
typedef jspGroupPair type_3[10];
typedef int8 type_4[16];

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct zJSPExtraData : xBase
{

	void Load(xBase& data, xDynAsset& asset);
	void ClearGroupAssociations();
	void ShowAssociatedGroup(uint32 jspAssetId, uint8 show);
	void ShowAllAssociatedGroups(uint8 show);
};

struct zJSPExtraDataAsset : xDynAsset
{
	uint32 jspID;
	uint32 groupID;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct jspGroupPair
{
	uint32 jspID;
	uint32 groupID;
	xBase* pGroup;
	xBase* pWidget;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

int8 buffer[16];
int8 buffer[16];
float32 scale;
jspGroupPair sJspGroupPairs[10];
int32 sNumPairs;

void Load(xBase& data, xDynAsset& asset);
void ClearGroupAssociations();
void ShowAssociatedGroup(uint32 jspAssetId, uint8 show);
void ShowAllAssociatedGroups(uint8 show);

// Load__13zJSPExtraDataFR5xBaseR9xDynAssetUi
// Start address: 0x4743a0
void zJSPExtraData::Load(xBase& data, xDynAsset& asset)
{
	// Line 89, Address: 0x4743a0, Func Offset: 0
	// Line 91, Address: 0x4743b4, Func Offset: 0x14
	// Line 92, Address: 0x47442c, Func Offset: 0x8c
	// Func End, Address: 0x474440, Func Offset: 0xa0
}

// ClearGroupAssociations__13zJSPExtraDataFv
// Start address: 0x474440
void zJSPExtraData::ClearGroupAssociations()
{
	// Line 74, Address: 0x474440, Func Offset: 0
	// Func End, Address: 0x474448, Func Offset: 0x8
}

// ShowAssociatedGroup__13zJSPExtraDataFUib
// Start address: 0x474450
void zJSPExtraData::ShowAssociatedGroup(uint32 jspAssetId, uint8 show)
{
	int32 i;
	// Line 43, Address: 0x474450, Func Offset: 0
	// Line 44, Address: 0x474470, Func Offset: 0x20
	// Line 46, Address: 0x474488, Func Offset: 0x38
	// Line 48, Address: 0x474494, Func Offset: 0x44
	// Line 50, Address: 0x47449c, Func Offset: 0x4c
	// Line 51, Address: 0x4744b4, Func Offset: 0x64
	// Line 53, Address: 0x4744c4, Func Offset: 0x74
	// Line 54, Address: 0x4744cc, Func Offset: 0x7c
	// Line 55, Address: 0x4744e8, Func Offset: 0x98
	// Line 56, Address: 0x47450c, Func Offset: 0xbc
	// Line 59, Address: 0x474518, Func Offset: 0xc8
	// Line 60, Address: 0x474530, Func Offset: 0xe0
	// Line 61, Address: 0x47453c, Func Offset: 0xec
	// Line 60, Address: 0x474540, Func Offset: 0xf0
	// Line 62, Address: 0x474544, Func Offset: 0xf4
	// Line 63, Address: 0x47454c, Func Offset: 0xfc
	// Line 64, Address: 0x474568, Func Offset: 0x118
	// Line 68, Address: 0x47458c, Func Offset: 0x13c
	// Line 69, Address: 0x4745a8, Func Offset: 0x158
	// Func End, Address: 0x4745c4, Func Offset: 0x174
}

// ShowAllAssociatedGroups__13zJSPExtraDataFb
// Start address: 0x4745d0
void zJSPExtraData::ShowAllAssociatedGroups(uint8 show)
{
	int32 i;
	// Line 22, Address: 0x4745d0, Func Offset: 0
	// Line 23, Address: 0x4745e8, Func Offset: 0x18
	// Line 39, Address: 0x4745f8, Func Offset: 0x28
	// Line 31, Address: 0x474628, Func Offset: 0x58
	// Line 39, Address: 0x47463c, Func Offset: 0x6c
	// Line 32, Address: 0x474644, Func Offset: 0x74
	// Line 35, Address: 0x474650, Func Offset: 0x80
	// Line 39, Address: 0x474668, Func Offset: 0x98
	// Func End, Address: 0x4746a0, Func Offset: 0xd0
}

