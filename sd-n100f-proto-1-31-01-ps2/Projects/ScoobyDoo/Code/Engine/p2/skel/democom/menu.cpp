typedef struct RsMouse;
typedef struct _RwMatrix;
typedef struct MenuEntryTag;
typedef struct _RwV2d;
typedef struct _RwRaster;
typedef struct PsMouse;
typedef enum RsEventStatus;
typedef struct _RsKeyStatus;
typedef struct _RwPlane;
typedef enum RsMenuEvent;
typedef struct _RsMouseStatus;
typedef struct _RtCharsetDesc;
typedef struct _RsPadButtonStatus;
typedef struct MenuStateTag;
typedef enum _RwCameraProjection;
typedef struct _RwObjectHasFrame;
typedef struct _RwV3d;
typedef struct _RwCamera;
typedef struct _RwFileFunctions;
typedef struct _RwObject;
typedef struct _RwBBox;
typedef struct _RwLLLink;
typedef struct _RwRGBA;
typedef struct _RwFrustumPlane;

typedef int8*(*type_0)(int8*, int32, void*);
typedef int32(*type_1)(int8*, void*);
typedef int32(*type_2)(void*);
typedef int32(*type_3)(void*, long32, int32);
typedef int32(*type_4)(void*);
typedef _RwCamera*(*type_6)(_RwCamera*);
typedef _RwCamera*(*type_7)(_RwCamera*);
typedef int32(*type_8)(int8*);
typedef int32(*type_9)();
typedef void*(*type_10)(int8*, int8*);
typedef int32(*type_12)(void*);
typedef uint32(*type_13)(void*, uint32, uint32, void*);
typedef uint32(*type_16)(void*, uint32, uint32, void*);
typedef _RwObjectHasFrame*(*type_19)(_RwObjectHasFrame*);

typedef int8 type_5[10];
typedef int8 type_11[22];
typedef _RwFrustumPlane type_14[6];
typedef int8 type_15[256];
typedef _RwV3d type_17[8];
typedef uint32 type_18[4096];
typedef int8 type_20[79];
typedef int8 type_21[13];
typedef int8 type_22[128];
typedef int8* type_23[1500];

struct RsMouse
{
	_RwV2d pos;
	_RwRaster* raster;
	PsMouse* psmouse;
	int32 draw;
};

struct _RwMatrix
{
	_RwV3d right;
	uint32 flags;
	_RwV3d up;
	uint32 pad1;
	_RwV3d at;
	uint32 pad2;
	_RwV3d pos;
	uint32 pad3;
};

struct MenuEntryTag
{
	int32 type;
	int8* description;
	void* target;
	int32 minValue;
	int32 maxValue;
	int8** enumStrings;
	int32 shortcut;
	int32(*triggerCallBack)();
	MenuEntryTag* next;
	MenuEntryTag* prev;
};

struct _RwV2d
{
	float32 x;
	float32 y;
};

struct _RwRaster
{
	_RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
};

struct PsMouse
{
};

enum RsEventStatus
{
	rsEVENTERROR,
	rsEVENTPROCESSED,
	rsEVENTNOTPROCESSED
};

struct _RsKeyStatus
{
	int32 keyScanCode;
	int32 keyCharCode;
};

struct _RwPlane
{
	_RwV3d normal;
	float32 distance;
};

enum RsMenuEvent
{
	rsLEFTBUTTONDOWN,
	rsLEFTBUTTONUP,
	rsMOUSEMOVE,
	rsKEYDOWN,
	rsKEYUP,
	rsPADBUTTONDOWN,
	rsPADBUTTONUP,
	rsPADANALOGUELEFT,
	rsPADANALOGUERIGHT
};

struct _RsMouseStatus
{
	_RwV2d pos;
	_RwV2d delta;
	int32 shift;
	int32 control;
};

struct _RtCharsetDesc
{
	int32 width;
	int32 height;
	int32 count;
	int32 tilewidth;
	int32 tileheight;
};

struct _RsPadButtonStatus
{
	int32 padID;
	uint32 padButtons;
};

struct MenuStateTag
{
	_RwRaster* InverseCharset;
	_RwRaster* MainCharset;
	MenuEntryTag* activeEntry;
	MenuEntryTag* menuList;
	_RwRGBA MBackground;
	_RwRGBA MForeground;
	int32 Shifted;
	uint32 lastKeyPressed;
	int32 longestEntryLength;
	int32 mode;
	int32 numEntries;
	int32 numEntriesPerColumn;
	int32 numHelpLines;
	int32 topHelpLine;
	uint32 timeOfLastAutoRepeat;
	uint32 timeOfLastChange;
	uint32 timeOfLastKeyPress;
};

enum _RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RwCamera
{
	_RwObjectHasFrame object;
	_RwCameraProjection projectionType;
	_RwCamera*(*beginUpdate)(_RwCamera*);
	_RwCamera*(*endUpdate)(_RwCamera*);
	_RwMatrix viewMatrix;
	_RwRaster* frameBuffer;
	_RwRaster* zBuffer;
	_RwV2d viewWindow;
	_RwV2d recipViewWindow;
	_RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	uint16 renderFrame;
	_RwFrustumPlane frustumPlanes[6];
	_RwBBox frustumBoundBox;
	_RwV3d frustumCorners[8];
};

struct _RwFileFunctions
{
	int32(*rwfexist)(int8*);
	void*(*rwfopen)(int8*, int8*);
	int32(*rwfclose)(void*);
	uint32(*rwfread)(void*, uint32, uint32, void*);
	uint32(*rwfwrite)(void*, uint32, uint32, void*);
	int8*(*rwfgets)(int8*, int32, void*);
	int32(*rwfputs)(int8*, void*);
	int32(*rwfeof)(void*);
	int32(*rwfseek)(void*, long32, int32);
	int32(*rwfflush)(void*);
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _RwFrustumPlane
{
	_RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

MenuStateTag MenuState;
int8* emptyString;
int8* helpLines[1500];
int8 test[22];
int8 HelpFileName[13];
int8 AltHelpFileName[10];
uint32 ourGlobals[4096];

int32 MenuRender(_RwCamera* camera, _RwRaster* Charset, RsMouse* mouse);
RsEventStatus MenuKeyboardHandler(RsMenuEvent event, void* param);
RsEventStatus MenuHandleKeyUp(void* param);
RsEventStatus MenuHandleKeyDown(void* param);
RsEventStatus MenuKeyboardShortcutHandler(RsMenuEvent event, void* param);
RsEventStatus MenuPadHandler(RsMenuEvent event, void* param);
int32 AutoRepeatPrepare(RsMenuEvent event, void* param);
int32 MenuSelectionAddValue(int32 increment);
int32 MenuSelectionAddPercentage(float32 percentage);
int32 MenuSelectPrevious();
int32 MenuSelectNext();
int32 MenuClose();
int32 MenuRemoveEntryByNumber(int32 entryNum);
int32 SelectByNumber(int32 entryNum);
int32 MenuToggle();
int32 MenuGetStatus();
int32 MenuSetStatus(int32 newMode);
int32 LoadHelpFile();

// MenuRender__FP9_RwCameraP9_RwRasterP7RsMouse
// Start address: 0x204b80
int32 MenuRender(_RwCamera* camera, _RwRaster* Charset, RsMouse* mouse)
{
	int32 line;
	int32 helpLine;
	float32 value;
	float32 min;
	float32 max;
	int32 index;
	int32 levelOn;
	int8 caption[128];
	_RtCharsetDesc charsetDesc;
	int32 invert;
	int32 line;
	int32 column;
	int32 count;
	MenuEntryTag* ptr;
	// Line 1811, Address: 0x204b80, Func Offset: 0
	// Line 1819, Address: 0x204bb8, Func Offset: 0x38
	// Line 1821, Address: 0x204bc8, Func Offset: 0x48
	// Line 1823, Address: 0x204bd8, Func Offset: 0x58
	// Line 1825, Address: 0x204be8, Func Offset: 0x68
	// Line 1828, Address: 0x204bf4, Func Offset: 0x74
	// Line 1830, Address: 0x204bfc, Func Offset: 0x7c
	// Line 1831, Address: 0x204c04, Func Offset: 0x84
	// Line 1833, Address: 0x204c0c, Func Offset: 0x8c
	// Line 1837, Address: 0x204c18, Func Offset: 0x98
	// Line 1839, Address: 0x204c28, Func Offset: 0xa8
	// Line 1843, Address: 0x204c64, Func Offset: 0xe4
	// Line 1845, Address: 0x204c78, Func Offset: 0xf8
	// Line 1846, Address: 0x204c88, Func Offset: 0x108
	// Line 1848, Address: 0x204c90, Func Offset: 0x110
	// Line 1849, Address: 0x204c98, Func Offset: 0x118
	// Line 1853, Address: 0x204ca0, Func Offset: 0x120
	// Line 1854, Address: 0x204ca4, Func Offset: 0x124
	// Line 1856, Address: 0x204cac, Func Offset: 0x12c
	// Line 1858, Address: 0x204cb8, Func Offset: 0x138
	// Line 1859, Address: 0x204cd4, Func Offset: 0x154
	// Line 1861, Address: 0x204ce4, Func Offset: 0x164
	// Line 1862, Address: 0x204d08, Func Offset: 0x188
	// Line 1869, Address: 0x204d40, Func Offset: 0x1c0
	// Line 1871, Address: 0x204d60, Func Offset: 0x1e0
	// Line 1873, Address: 0x204d70, Func Offset: 0x1f0
	// Line 1874, Address: 0x204d90, Func Offset: 0x210
	// Line 1877, Address: 0x204d98, Func Offset: 0x218
	// Line 1879, Address: 0x204db8, Func Offset: 0x238
	// Line 1880, Address: 0x204dc0, Func Offset: 0x240
	// Line 1882, Address: 0x204dd0, Func Offset: 0x250
	// Line 1884, Address: 0x204ddc, Func Offset: 0x25c
	// Line 1886, Address: 0x204de0, Func Offset: 0x260
	// Line 1888, Address: 0x204dec, Func Offset: 0x26c
	// Line 1890, Address: 0x204dfc, Func Offset: 0x27c
	// Line 1891, Address: 0x204e00, Func Offset: 0x280
	// Line 1893, Address: 0x204e30, Func Offset: 0x2b0
	// Line 1896, Address: 0x204e38, Func Offset: 0x2b8
	// Line 1899, Address: 0x204e60, Func Offset: 0x2e0
	// Line 1900, Address: 0x204e68, Func Offset: 0x2e8
	// Line 1904, Address: 0x204e78, Func Offset: 0x2f8
	// Line 1907, Address: 0x204eac, Func Offset: 0x32c
	// Line 1911, Address: 0x204ed4, Func Offset: 0x354
	// Line 1912, Address: 0x204ed8, Func Offset: 0x358
	// Line 1913, Address: 0x204edc, Func Offset: 0x35c
	// Line 1914, Address: 0x204ee4, Func Offset: 0x364
	// Line 1923, Address: 0x204f8c, Func Offset: 0x40c
	// Line 1926, Address: 0x204f94, Func Offset: 0x414
	// Line 1927, Address: 0x204fb4, Func Offset: 0x434
	// Line 1950, Address: 0x204fb8, Func Offset: 0x438
	// Line 1953, Address: 0x204fbc, Func Offset: 0x43c
	// Line 1960, Address: 0x20502c, Func Offset: 0x4ac
	// Line 1963, Address: 0x205040, Func Offset: 0x4c0
	// Line 1966, Address: 0x205060, Func Offset: 0x4e0
	// Line 1969, Address: 0x205070, Func Offset: 0x4f0
	// Line 1970, Address: 0x205078, Func Offset: 0x4f8
	// Line 1974, Address: 0x20508c, Func Offset: 0x50c
	// Line 1985, Address: 0x2050a4, Func Offset: 0x524
	// Line 1987, Address: 0x2050b0, Func Offset: 0x530
	// Line 1988, Address: 0x2050bc, Func Offset: 0x53c
	// Line 1992, Address: 0x2050d0, Func Offset: 0x550
	// Line 1995, Address: 0x205108, Func Offset: 0x588
	// Line 1996, Address: 0x205128, Func Offset: 0x5a8
	// Line 1998, Address: 0x205138, Func Offset: 0x5b8
	// Line 2001, Address: 0x205148, Func Offset: 0x5c8
	// Line 2004, Address: 0x205150, Func Offset: 0x5d0
	// Line 2007, Address: 0x20515c, Func Offset: 0x5dc
	// Line 2009, Address: 0x2051e4, Func Offset: 0x664
	// Line 2010, Address: 0x2051e8, Func Offset: 0x668
	// Func End, Address: 0x20521c, Func Offset: 0x69c
}

// MenuKeyboardHandler__F11RsMenuEventPv
// Start address: 0x205220
RsEventStatus MenuKeyboardHandler(RsMenuEvent event, void* param)
{
	int32 key;
	_RsKeyStatus* keyStatus;
	int32 exitMode;
	// Line 1692, Address: 0x205220, Func Offset: 0
	// Line 1696, Address: 0x20523c, Func Offset: 0x1c
	// Line 1699, Address: 0x20524c, Func Offset: 0x2c
	// Line 1701, Address: 0x205250, Func Offset: 0x30
	// Line 1703, Address: 0x20526c, Func Offset: 0x4c
	// Line 1706, Address: 0x205278, Func Offset: 0x58
	// Line 1708, Address: 0x205288, Func Offset: 0x68
	// Line 1710, Address: 0x205294, Func Offset: 0x74
	// Line 1712, Address: 0x2052a8, Func Offset: 0x88
	// Line 1714, Address: 0x2052b4, Func Offset: 0x94
	// Line 1716, Address: 0x2052c0, Func Offset: 0xa0
	// Line 1717, Address: 0x2052d4, Func Offset: 0xb4
	// Line 1719, Address: 0x2052f0, Func Offset: 0xd0
	// Line 1721, Address: 0x205304, Func Offset: 0xe4
	// Line 1723, Address: 0x205310, Func Offset: 0xf0
	// Line 1725, Address: 0x20531c, Func Offset: 0xfc
	// Line 1726, Address: 0x205330, Func Offset: 0x110
	// Line 1728, Address: 0x205340, Func Offset: 0x120
	// Line 1730, Address: 0x205348, Func Offset: 0x128
	// Line 1732, Address: 0x205354, Func Offset: 0x134
	// Line 1734, Address: 0x205360, Func Offset: 0x140
	// Line 1736, Address: 0x205380, Func Offset: 0x160
	// Line 1738, Address: 0x20539c, Func Offset: 0x17c
	// Line 1740, Address: 0x2053b0, Func Offset: 0x190
	// Line 1742, Address: 0x2053bc, Func Offset: 0x19c
	// Line 1744, Address: 0x2053c8, Func Offset: 0x1a8
	// Line 1746, Address: 0x2053e8, Func Offset: 0x1c8
	// Line 1748, Address: 0x2053f8, Func Offset: 0x1d8
	// Line 1750, Address: 0x205400, Func Offset: 0x1e0
	// Line 1755, Address: 0x20540c, Func Offset: 0x1ec
	// Line 1756, Address: 0x20546c, Func Offset: 0x24c
	// Line 1761, Address: 0x205478, Func Offset: 0x258
	// Line 1765, Address: 0x205484, Func Offset: 0x264
	// Line 1769, Address: 0x2054a4, Func Offset: 0x284
	// Line 1774, Address: 0x2054b8, Func Offset: 0x298
	// Line 1778, Address: 0x2054cc, Func Offset: 0x2ac
	// Line 1782, Address: 0x2054d0, Func Offset: 0x2b0
	// Func End, Address: 0x2054ec, Func Offset: 0x2cc
}

// MenuHandleKeyUp__FPv
// Start address: 0x2054f0
RsEventStatus MenuHandleKeyUp(void* param)
{
	_RsKeyStatus* keyStatus;
	// Line 1653, Address: 0x2054f0, Func Offset: 0
	// Line 1658, Address: 0x2054f8, Func Offset: 0x8
	// Line 1661, Address: 0x205518, Func Offset: 0x28
	// Line 1662, Address: 0x205520, Func Offset: 0x30
	// Line 1665, Address: 0x20552c, Func Offset: 0x3c
	// Line 1667, Address: 0x20553c, Func Offset: 0x4c
	// Line 1670, Address: 0x205548, Func Offset: 0x58
	// Line 1672, Address: 0x205560, Func Offset: 0x70
	// Line 1676, Address: 0x205590, Func Offset: 0xa0
	// Line 1678, Address: 0x2055a4, Func Offset: 0xb4
	// Line 1680, Address: 0x2055b8, Func Offset: 0xc8
	// Line 1681, Address: 0x2055c8, Func Offset: 0xd8
	// Line 1685, Address: 0x2055d4, Func Offset: 0xe4
	// Line 1686, Address: 0x2055d8, Func Offset: 0xe8
	// Func End, Address: 0x2055e8, Func Offset: 0xf8
}

// MenuHandleKeyDown__FPv
// Start address: 0x2055f0
RsEventStatus MenuHandleKeyDown(void* param)
{
	_RsKeyStatus* keyStatus;
	// Line 1598, Address: 0x2055f0, Func Offset: 0
	// Line 1603, Address: 0x2055f8, Func Offset: 0x8
	// Line 1606, Address: 0x205618, Func Offset: 0x28
	// Line 1607, Address: 0x205624, Func Offset: 0x34
	// Line 1610, Address: 0x205630, Func Offset: 0x40
	// Line 1612, Address: 0x205640, Func Offset: 0x50
	// Line 1615, Address: 0x20564c, Func Offset: 0x5c
	// Line 1621, Address: 0x205688, Func Offset: 0x98
	// Line 1622, Address: 0x20573c, Func Offset: 0x14c
	// Line 1628, Address: 0x205748, Func Offset: 0x158
	// Line 1629, Address: 0x2057fc, Func Offset: 0x20c
	// Line 1635, Address: 0x205808, Func Offset: 0x218
	// Line 1636, Address: 0x205814, Func Offset: 0x224
	// Line 1642, Address: 0x205820, Func Offset: 0x230
	// Line 1643, Address: 0x20582c, Func Offset: 0x23c
	// Line 1645, Address: 0x205838, Func Offset: 0x248
	// Line 1646, Address: 0x20583c, Func Offset: 0x24c
	// Func End, Address: 0x20584c, Func Offset: 0x25c
}

// MenuKeyboardShortcutHandler__F11RsMenuEventPv
// Start address: 0x205850
RsEventStatus MenuKeyboardShortcutHandler(RsMenuEvent event, void* param)
{
	MenuEntryTag* ptr;
	int32 key;
	_RsKeyStatus* keyStatus;
	// Line 1539, Address: 0x205850, Func Offset: 0
	// Line 1545, Address: 0x205858, Func Offset: 0x8
	// Line 1547, Address: 0x20585c, Func Offset: 0xc
	// Line 1549, Address: 0x205874, Func Offset: 0x24
	// Line 1552, Address: 0x205878, Func Offset: 0x28
	// Line 1553, Address: 0x205880, Func Offset: 0x30
	// Line 1555, Address: 0x205888, Func Offset: 0x38
	// Line 1556, Address: 0x20588c, Func Offset: 0x3c
	// Line 1558, Address: 0x2058a0, Func Offset: 0x50
	// Line 1559, Address: 0x2058a8, Func Offset: 0x58
	// Line 1561, Address: 0x2058c0, Func Offset: 0x70
	// Line 1563, Address: 0x2058cc, Func Offset: 0x7c
	// Line 1565, Address: 0x2058d8, Func Offset: 0x88
	// Line 1568, Address: 0x2058e0, Func Offset: 0x90
	// Line 1570, Address: 0x2058ec, Func Offset: 0x9c
	// Line 1573, Address: 0x205920, Func Offset: 0xd0
	// Line 1576, Address: 0x205934, Func Offset: 0xe4
	// Line 1577, Address: 0x20593c, Func Offset: 0xec
	// Line 1579, Address: 0x205948, Func Offset: 0xf8
	// Line 1581, Address: 0x20595c, Func Offset: 0x10c
	// Line 1583, Address: 0x205970, Func Offset: 0x120
	// Line 1586, Address: 0x205980, Func Offset: 0x130
	// Line 1588, Address: 0x20598c, Func Offset: 0x13c
	// Line 1590, Address: 0x205994, Func Offset: 0x144
	// Line 1591, Address: 0x205998, Func Offset: 0x148
	// Func End, Address: 0x2059a8, Func Offset: 0x158
}

// MenuPadHandler__F11RsMenuEventPv
// Start address: 0x2059b0
RsEventStatus MenuPadHandler(RsMenuEvent event, void* param)
{
	float32 percentage;
	float32 biggestDelta;
	_RwV2d* delta;
	_RsPadButtonStatus* pb;
	_RsPadButtonStatus* pb;
	// Line 1339, Address: 0x2059b0, Func Offset: 0
	// Line 1340, Address: 0x2059bc, Func Offset: 0xc
	// Line 1344, Address: 0x2059e8, Func Offset: 0x38
	// Line 1346, Address: 0x2059ec, Func Offset: 0x3c
	// Line 1348, Address: 0x2059f4, Func Offset: 0x44
	// Line 1350, Address: 0x205a04, Func Offset: 0x54
	// Line 1351, Address: 0x205a10, Func Offset: 0x60
	// Line 1354, Address: 0x205a1c, Func Offset: 0x6c
	// Line 1356, Address: 0x205a2c, Func Offset: 0x7c
	// Line 1358, Address: 0x205a38, Func Offset: 0x88
	// Line 1361, Address: 0x205a5c, Func Offset: 0xac
	// Line 1364, Address: 0x205a7c, Func Offset: 0xcc
	// Line 1365, Address: 0x205adc, Func Offset: 0x12c
	// Line 1366, Address: 0x205ae4, Func Offset: 0x134
	// Line 1368, Address: 0x205af4, Func Offset: 0x144
	// Line 1369, Address: 0x205b08, Func Offset: 0x158
	// Line 1372, Address: 0x205b24, Func Offset: 0x174
	// Line 1375, Address: 0x205b38, Func Offset: 0x188
	// Line 1376, Address: 0x205b40, Func Offset: 0x190
	// Line 1378, Address: 0x205b50, Func Offset: 0x1a0
	// Line 1379, Address: 0x205b64, Func Offset: 0x1b4
	// Line 1381, Address: 0x205b74, Func Offset: 0x1c4
	// Line 1383, Address: 0x205b7c, Func Offset: 0x1cc
	// Line 1384, Address: 0x205b84, Func Offset: 0x1d4
	// Line 1386, Address: 0x205b94, Func Offset: 0x1e4
	// Line 1388, Address: 0x205bb0, Func Offset: 0x200
	// Line 1391, Address: 0x205bcc, Func Offset: 0x21c
	// Line 1394, Address: 0x205be0, Func Offset: 0x230
	// Line 1395, Address: 0x205be8, Func Offset: 0x238
	// Line 1397, Address: 0x205bf8, Func Offset: 0x248
	// Line 1399, Address: 0x205c14, Func Offset: 0x264
	// Line 1401, Address: 0x205c24, Func Offset: 0x274
	// Line 1405, Address: 0x205c2c, Func Offset: 0x27c
	// Line 1407, Address: 0x205c38, Func Offset: 0x288
	// Line 1409, Address: 0x205c48, Func Offset: 0x298
	// Line 1411, Address: 0x205c58, Func Offset: 0x2a8
	// Line 1412, Address: 0x205d0c, Func Offset: 0x35c
	// Line 1414, Address: 0x205d18, Func Offset: 0x368
	// Line 1416, Address: 0x205d28, Func Offset: 0x378
	// Line 1417, Address: 0x205ddc, Func Offset: 0x42c
	// Line 1419, Address: 0x205de8, Func Offset: 0x438
	// Line 1421, Address: 0x205df8, Func Offset: 0x448
	// Line 1422, Address: 0x205e04, Func Offset: 0x454
	// Line 1424, Address: 0x205e10, Func Offset: 0x460
	// Line 1426, Address: 0x205e20, Func Offset: 0x470
	// Line 1427, Address: 0x205e2c, Func Offset: 0x47c
	// Line 1436, Address: 0x205e38, Func Offset: 0x488
	// Line 1438, Address: 0x205e3c, Func Offset: 0x48c
	// Line 1440, Address: 0x205e44, Func Offset: 0x494
	// Line 1442, Address: 0x205e54, Func Offset: 0x4a4
	// Line 1444, Address: 0x205e64, Func Offset: 0x4b4
	// Line 1446, Address: 0x205e8c, Func Offset: 0x4dc
	// Line 1449, Address: 0x205e98, Func Offset: 0x4e8
	// Line 1451, Address: 0x205ea8, Func Offset: 0x4f8
	// Line 1452, Address: 0x205eb0, Func Offset: 0x500
	// Line 1455, Address: 0x205ebc, Func Offset: 0x50c
	// Line 1457, Address: 0x205ecc, Func Offset: 0x51c
	// Line 1459, Address: 0x205ed8, Func Offset: 0x528
	// Line 1461, Address: 0x205eec, Func Offset: 0x53c
	// Line 1465, Address: 0x205ef8, Func Offset: 0x548
	// Line 1468, Address: 0x205f10, Func Offset: 0x560
	// Line 1471, Address: 0x205f30, Func Offset: 0x580
	// Line 1473, Address: 0x205f44, Func Offset: 0x594
	// Line 1476, Address: 0x205f58, Func Offset: 0x5a8
	// Line 1482, Address: 0x205f68, Func Offset: 0x5b8
	// Line 1491, Address: 0x205f70, Func Offset: 0x5c0
	// Line 1493, Address: 0x205f80, Func Offset: 0x5d0
	// Line 1496, Address: 0x205f8c, Func Offset: 0x5dc
	// Line 1498, Address: 0x205fa0, Func Offset: 0x5f0
	// Line 1501, Address: 0x205fac, Func Offset: 0x5fc
	// Line 1508, Address: 0x20602c, Func Offset: 0x67c
	// Line 1511, Address: 0x206038, Func Offset: 0x688
	// Line 1512, Address: 0x206040, Func Offset: 0x690
	// Line 1514, Address: 0x2060a8, Func Offset: 0x6f8
	// Line 1516, Address: 0x2060b0, Func Offset: 0x700
	// Line 1519, Address: 0x2060f0, Func Offset: 0x740
	// Line 1521, Address: 0x206130, Func Offset: 0x780
	// Line 1524, Address: 0x206138, Func Offset: 0x788
	// Line 1531, Address: 0x206144, Func Offset: 0x794
	// Line 1532, Address: 0x206148, Func Offset: 0x798
	// Func End, Address: 0x20615c, Func Offset: 0x7ac
}

// AutoRepeatPrepare__F11RsMenuEventPv
// Start address: 0x206160
int32 AutoRepeatPrepare(RsMenuEvent event, void* param)
{
	// Line 1240, Address: 0x206160, Func Offset: 0
	// Line 1243, Address: 0x20616c, Func Offset: 0xc
	// Line 1248, Address: 0x2061ac, Func Offset: 0x4c
	// Line 1251, Address: 0x2061b8, Func Offset: 0x58
	// Line 1253, Address: 0x2061c8, Func Offset: 0x68
	// Line 1254, Address: 0x2061d0, Func Offset: 0x70
	// Line 1257, Address: 0x2061dc, Func Offset: 0x7c
	// Line 1258, Address: 0x2061e4, Func Offset: 0x84
	// Line 1259, Address: 0x2061ec, Func Offset: 0x8c
	// Line 1265, Address: 0x2061f8, Func Offset: 0x98
	// Line 1269, Address: 0x206218, Func Offset: 0xb8
	// Line 1272, Address: 0x206224, Func Offset: 0xc4
	// Line 1274, Address: 0x206234, Func Offset: 0xd4
	// Line 1275, Address: 0x20623c, Func Offset: 0xdc
	// Line 1278, Address: 0x206248, Func Offset: 0xe8
	// Line 1279, Address: 0x206250, Func Offset: 0xf0
	// Line 1283, Address: 0x206258, Func Offset: 0xf8
	// Line 1286, Address: 0x206260, Func Offset: 0x100
	// Line 1287, Address: 0x206264, Func Offset: 0x104
	// Func End, Address: 0x20626c, Func Offset: 0x10c
}

// MenuSelectionAddValue__Fi
// Start address: 0x206270
int32 MenuSelectionAddValue(int32 increment)
{
	float32 maxValue;
	float32 minValue;
	float32 value;
	// Line 1109, Address: 0x206270, Func Offset: 0
	// Line 1113, Address: 0x206280, Func Offset: 0x10
	// Line 1115, Address: 0x206290, Func Offset: 0x20
	// Line 1118, Address: 0x20629c, Func Offset: 0x2c
	// Line 1121, Address: 0x2062cc, Func Offset: 0x5c
	// Line 1124, Address: 0x2062d8, Func Offset: 0x68
	// Line 1129, Address: 0x206318, Func Offset: 0xa8
	// Line 1130, Address: 0x206330, Func Offset: 0xc0
	// Line 1133, Address: 0x206358, Func Offset: 0xe8
	// Line 1135, Address: 0x206374, Func Offset: 0x104
	// Line 1136, Address: 0x20637c, Func Offset: 0x10c
	// Line 1139, Address: 0x2063a4, Func Offset: 0x134
	// Line 1142, Address: 0x2063c0, Func Offset: 0x150
	// Line 1145, Address: 0x2063ec, Func Offset: 0x17c
	// Line 1147, Address: 0x2063f4, Func Offset: 0x184
	// Line 1150, Address: 0x2063fc, Func Offset: 0x18c
	// Line 1151, Address: 0x206408, Func Offset: 0x198
	// Line 1152, Address: 0x206414, Func Offset: 0x1a4
	// Line 1155, Address: 0x206434, Func Offset: 0x1c4
	// Line 1157, Address: 0x206444, Func Offset: 0x1d4
	// Line 1158, Address: 0x206448, Func Offset: 0x1d8
	// Line 1159, Address: 0x206450, Func Offset: 0x1e0
	// Line 1161, Address: 0x206460, Func Offset: 0x1f0
	// Line 1163, Address: 0x206464, Func Offset: 0x1f4
	// Line 1164, Address: 0x206474, Func Offset: 0x204
	// Line 1165, Address: 0x20647c, Func Offset: 0x20c
	// Line 1168, Address: 0x206484, Func Offset: 0x214
	// Line 1171, Address: 0x206490, Func Offset: 0x220
	// Line 1172, Address: 0x206494, Func Offset: 0x224
	// Func End, Address: 0x2064a8, Func Offset: 0x238
}

// MenuSelectionAddPercentage__Ff
// Start address: 0x2064b0
int32 MenuSelectionAddPercentage(float32 percentage)
{
	float32 maxValue;
	float32 minValue;
	float32 value;
	// Line 1041, Address: 0x2064b0, Func Offset: 0
	// Line 1045, Address: 0x2064c0, Func Offset: 0x10
	// Line 1047, Address: 0x2064d0, Func Offset: 0x20
	// Line 1050, Address: 0x2064dc, Func Offset: 0x2c
	// Line 1053, Address: 0x20650c, Func Offset: 0x5c
	// Line 1056, Address: 0x206518, Func Offset: 0x68
	// Line 1059, Address: 0x206544, Func Offset: 0x94
	// Line 1063, Address: 0x206588, Func Offset: 0xd8
	// Line 1065, Address: 0x2065b0, Func Offset: 0x100
	// Line 1068, Address: 0x2065d8, Func Offset: 0x128
	// Line 1070, Address: 0x2065f4, Func Offset: 0x144
	// Line 1071, Address: 0x2065fc, Func Offset: 0x14c
	// Line 1074, Address: 0x206624, Func Offset: 0x174
	// Line 1077, Address: 0x206640, Func Offset: 0x190
	// Line 1080, Address: 0x206648, Func Offset: 0x198
	// Line 1081, Address: 0x206654, Func Offset: 0x1a4
	// Line 1082, Address: 0x206660, Func Offset: 0x1b0
	// Line 1085, Address: 0x20667c, Func Offset: 0x1cc
	// Line 1087, Address: 0x20668c, Func Offset: 0x1dc
	// Line 1088, Address: 0x206690, Func Offset: 0x1e0
	// Line 1089, Address: 0x206698, Func Offset: 0x1e8
	// Line 1091, Address: 0x2066a8, Func Offset: 0x1f8
	// Line 1093, Address: 0x2066ac, Func Offset: 0x1fc
	// Line 1094, Address: 0x2066bc, Func Offset: 0x20c
	// Line 1095, Address: 0x2066c4, Func Offset: 0x214
	// Line 1098, Address: 0x2066cc, Func Offset: 0x21c
	// Line 1101, Address: 0x2066d8, Func Offset: 0x228
	// Line 1102, Address: 0x2066dc, Func Offset: 0x22c
	// Func End, Address: 0x2066f0, Func Offset: 0x240
}

// MenuSelectPrevious__Fv
// Start address: 0x2066f0
int32 MenuSelectPrevious()
{
	// Line 1011, Address: 0x2066f0, Func Offset: 0
	// Line 1012, Address: 0x2066f8, Func Offset: 0x8
	// Line 1014, Address: 0x206718, Func Offset: 0x28
	// Line 1017, Address: 0x206724, Func Offset: 0x34
	// Line 1019, Address: 0x206738, Func Offset: 0x48
	// Line 1020, Address: 0x20674c, Func Offset: 0x5c
	// Line 1023, Address: 0x206758, Func Offset: 0x68
	// Line 1026, Address: 0x20676c, Func Offset: 0x7c
	// Line 1030, Address: 0x2067b4, Func Offset: 0xc4
	// Line 1033, Address: 0x20688c, Func Offset: 0x19c
	// Line 1034, Address: 0x206890, Func Offset: 0x1a0
	// Func End, Address: 0x2068a0, Func Offset: 0x1b0
}

// MenuSelectNext__Fv
// Start address: 0x2068a0
int32 MenuSelectNext()
{
	// Line 982, Address: 0x2068a0, Func Offset: 0
	// Line 983, Address: 0x2068a8, Func Offset: 0x8
	// Line 985, Address: 0x2068c8, Func Offset: 0x28
	// Line 988, Address: 0x2068d4, Func Offset: 0x34
	// Line 990, Address: 0x2068f0, Func Offset: 0x50
	// Line 993, Address: 0x206964, Func Offset: 0xc4
	// Line 996, Address: 0x206978, Func Offset: 0xd8
	// Line 1000, Address: 0x2069c0, Func Offset: 0x120
	// Line 1003, Address: 0x206a94, Func Offset: 0x1f4
	// Line 1004, Address: 0x206a98, Func Offset: 0x1f8
	// Func End, Address: 0x206aa8, Func Offset: 0x208
}

// MenuClose__Fv
// Start address: 0x206ab0
int32 MenuClose()
{
	int32 result;
	// Line 588, Address: 0x206ab0, Func Offset: 0
	// Line 589, Address: 0x206abc, Func Offset: 0xc
	// Line 591, Address: 0x206ac0, Func Offset: 0x10
	// Line 593, Address: 0x206ac8, Func Offset: 0x18
	// Line 594, Address: 0x206b04, Func Offset: 0x54
	// Line 596, Address: 0x206b18, Func Offset: 0x68
	// Line 598, Address: 0x206b20, Func Offset: 0x70
	// Line 600, Address: 0x206b3c, Func Offset: 0x8c
	// Line 602, Address: 0x206b40, Func Offset: 0x90
	// Line 604, Address: 0x206b50, Func Offset: 0xa0
	// Line 606, Address: 0x206b60, Func Offset: 0xb0
	// Line 609, Address: 0x206b7c, Func Offset: 0xcc
	// Line 611, Address: 0x206b8c, Func Offset: 0xdc
	// Line 614, Address: 0x206b9c, Func Offset: 0xec
	// Line 616, Address: 0x206bac, Func Offset: 0xfc
	// Line 619, Address: 0x206bbc, Func Offset: 0x10c
	// Line 620, Address: 0x206bc0, Func Offset: 0x110
	// Func End, Address: 0x206bd4, Func Offset: 0x124
}

// MenuRemoveEntryByNumber__Fi
// Start address: 0x206be0
int32 MenuRemoveEntryByNumber(int32 entryNum)
{
	int32 count;
	MenuEntryTag* ptr;
	// Line 505, Address: 0x206be0, Func Offset: 0
	// Line 509, Address: 0x206be8, Func Offset: 0x8
	// Line 511, Address: 0x206c04, Func Offset: 0x24
	// Line 514, Address: 0x206c10, Func Offset: 0x30
	// Line 516, Address: 0x206c1c, Func Offset: 0x3c
	// Line 517, Address: 0x206c24, Func Offset: 0x44
	// Line 519, Address: 0x206c2c, Func Offset: 0x4c
	// Line 520, Address: 0x206c30, Func Offset: 0x50
	// Line 522, Address: 0x206c38, Func Offset: 0x58
	// Line 524, Address: 0x206c44, Func Offset: 0x64
	// Line 526, Address: 0x206c54, Func Offset: 0x74
	// Line 527, Address: 0x206c60, Func Offset: 0x80
	// Line 529, Address: 0x206c6c, Func Offset: 0x8c
	// Line 532, Address: 0x206c78, Func Offset: 0x98
	// Line 534, Address: 0x206c8c, Func Offset: 0xac
	// Line 536, Address: 0x206ca0, Func Offset: 0xc0
	// Line 538, Address: 0x206cb0, Func Offset: 0xd0
	// Line 541, Address: 0x206d04, Func Offset: 0x124
	// Line 542, Address: 0x206d08, Func Offset: 0x128
	// Func End, Address: 0x206d18, Func Offset: 0x138
}

// SelectByNumber__Fi
// Start address: 0x206d20
int32 SelectByNumber(int32 entryNum)
{
	int32 count;
	MenuEntryTag* ptr;
	// Line 478, Address: 0x206d20, Func Offset: 0
	// Line 480, Address: 0x206d3c, Func Offset: 0x1c
	// Line 483, Address: 0x206d48, Func Offset: 0x28
	// Line 485, Address: 0x206d54, Func Offset: 0x34
	// Line 486, Address: 0x206d5c, Func Offset: 0x3c
	// Line 488, Address: 0x206d64, Func Offset: 0x44
	// Line 489, Address: 0x206d68, Func Offset: 0x48
	// Line 491, Address: 0x206d70, Func Offset: 0x50
	// Line 493, Address: 0x206d7c, Func Offset: 0x5c
	// Line 495, Address: 0x206d8c, Func Offset: 0x6c
	// Line 497, Address: 0x206d94, Func Offset: 0x74
	// Line 498, Address: 0x206d98, Func Offset: 0x78
	// Func End, Address: 0x206da0, Func Offset: 0x80
}

// MenuToggle__Fv
// Start address: 0x206da0
int32 MenuToggle()
{
	// Line 301, Address: 0x206da0, Func Offset: 0
	// Line 302, Address: 0x206da8, Func Offset: 0x8
	// Line 303, Address: 0x206dd0, Func Offset: 0x30
	// Func End, Address: 0x206de0, Func Offset: 0x40
}

// MenuGetStatus__Fv
// Start address: 0x206de0
int32 MenuGetStatus()
{
	// Line 297, Address: 0x206de0, Func Offset: 0
	// Line 298, Address: 0x206de8, Func Offset: 0x8
	// Func End, Address: 0x206df0, Func Offset: 0x10
}

// MenuSetStatus__Fi
// Start address: 0x206df0
int32 MenuSetStatus(int32 newMode)
{
	// Line 257, Address: 0x206df0, Func Offset: 0
	// Line 260, Address: 0x206df8, Func Offset: 0x8
	// Line 263, Address: 0x206e08, Func Offset: 0x18
	// Line 266, Address: 0x206e14, Func Offset: 0x24
	// Line 268, Address: 0x206e20, Func Offset: 0x30
	// Line 269, Address: 0x206e28, Func Offset: 0x38
	// Line 271, Address: 0x206ea0, Func Offset: 0xb0
	// Line 273, Address: 0x206ea8, Func Offset: 0xb8
	// Line 274, Address: 0x206eb0, Func Offset: 0xc0
	// Line 276, Address: 0x206ebc, Func Offset: 0xcc
	// Line 279, Address: 0x206ec8, Func Offset: 0xd8
	// Line 281, Address: 0x206ed8, Func Offset: 0xe8
	// Line 282, Address: 0x206ee0, Func Offset: 0xf0
	// Line 285, Address: 0x206ee8, Func Offset: 0xf8
	// Line 287, Address: 0x206ef4, Func Offset: 0x104
	// Line 291, Address: 0x206f00, Func Offset: 0x110
	// Line 293, Address: 0x206f04, Func Offset: 0x114
	// Func End, Address: 0x206f14, Func Offset: 0x124
}

// LoadHelpFile__Fv
// Start address: 0x206f20
int32 LoadHelpFile()
{
	int32 i;
	int32 length;
	void* buffer;
	int8 line[79];
	_RwFileFunctions* fileFuncs;
	// Line 154, Address: 0x206f20, Func Offset: 0
	// Line 160, Address: 0x206f30, Func Offset: 0x10
	// Line 161, Address: 0x206f40, Func Offset: 0x20
	// Line 162, Address: 0x206f4c, Func Offset: 0x2c
	// Line 164, Address: 0x206f54, Func Offset: 0x34
	// Line 165, Address: 0x206f60, Func Offset: 0x40
	// Line 167, Address: 0x206f68, Func Offset: 0x48
	// Line 170, Address: 0x206f74, Func Offset: 0x54
	// Line 171, Address: 0x206f94, Func Offset: 0x74
	// Line 173, Address: 0x206f9c, Func Offset: 0x7c
	// Line 176, Address: 0x206fbc, Func Offset: 0x9c
	// Line 178, Address: 0x206fc4, Func Offset: 0xa4
	// Line 185, Address: 0x206fd0, Func Offset: 0xb0
	// Line 186, Address: 0x206fd8, Func Offset: 0xb8
	// Line 188, Address: 0x206fe0, Func Offset: 0xc0
	// Line 190, Address: 0x206ff8, Func Offset: 0xd8
	// Line 192, Address: 0x207004, Func Offset: 0xe4
	// Line 194, Address: 0x207030, Func Offset: 0x110
	// Line 195, Address: 0x20703c, Func Offset: 0x11c
	// Line 196, Address: 0x207040, Func Offset: 0x120
	// Line 198, Address: 0x207054, Func Offset: 0x134
	// Line 200, Address: 0x207088, Func Offset: 0x168
	// Line 202, Address: 0x2070ac, Func Offset: 0x18c
	// Line 205, Address: 0x2070e4, Func Offset: 0x1c4
	// Line 206, Address: 0x2070f8, Func Offset: 0x1d8
	// Line 209, Address: 0x207104, Func Offset: 0x1e4
	// Line 211, Address: 0x207138, Func Offset: 0x218
	// Line 212, Address: 0x20714c, Func Offset: 0x22c
	// Line 214, Address: 0x207170, Func Offset: 0x250
	// Line 218, Address: 0x207180, Func Offset: 0x260
	// Line 222, Address: 0x207194, Func Offset: 0x274
	// Func End, Address: 0x2071ac, Func Offset: 0x28c
}

