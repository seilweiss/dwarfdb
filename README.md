# Heavy Iron DWARF Database

This repository contains source trees for games and pre-release builds developed by Heavy Iron Studios, reconstructed from DWARF 1.0/1.1 debugging data present in the games' executables, using the tool [dwarf2cpp](https://github.com/seilweiss/dwarf2cpp). The source code files contain a *bunch* of C++ definitions converted from DWARF data, such as structs, enums, unions, variable declarations, and function signatures. No actual source code (decompiled or otherwise) is present.

This repository was made to help with researching Heavy Iron games. It will be continuously maintained and updated with more games/prototypes if they are found. (Note: some of Heavy Iron's games are known to have DWARF 2.0+ data, but dwarf2cpp does not support them yet.)

## Game List

| Directory | Game | Platform |
|--|--|--|
| in-proto-8-5-04-ps2 | The Incredibles (8/5/2004 Prototype) | PlayStation 2 |
| sb-bfbb-ps2 | SpongeBob SquarePants: Battle for Bikini Bottom | PlayStation 2 |
| sb-movie-demo-ps2 | The SpongeBob SquarePants Movie (Demo) | PlayStation 2 |
| sd-n100f-proto-1-3-01-ps2 | Scooby-Doo! Night of 100 Frights (1/3/2001 Prototype) | PlayStation 2 |
| sd-n100f-ps2 | Scooby-Doo! Night of 100 Frights | PlayStation 2 |

## dwarf2cpp

The source trees in this repository were generated with [dwarf2cpp](https://github.com/seilweiss/dwarf2cpp). Some C++ built-in keywords/types were renamed, however, to make them easier to integrate with existing decompilation projects. It might make more sense for your project to use the original names in some cases, though. (A `const int8*` representing a string should probably be a `const char*` instead, and some `struct`s might make more sense as `class`es.)

| Old name | New name |
|--|--|
| class | struct |
| char | int8 |
| unsigned char | uint8 |
| short | int16 |
| unsigned short | uint16 |
| int | int32 |
| unsigned int | uint32 |
| long | long32 |
| unsigned long | ulong32 |
| float | float32 |
| double | float64 |
| long double | float128 |
| long long | int64 |
| unsigned long long | uint64 |
