#!/bin/bash

mkdir -p __target_cpp

cat << PREAMBLE > __target_cpp/statuscodes.h
#ifdef __WAND__
target[name[statuscodes.h] type[include]]
#endif

#ifndef MIDICONSTANTS_SATUSCODES_H
#define MIDICONSTANTS_SATUSCODES_H

#include <cstdint>

namespace MIDIConstants
	{
	namespace StatusCodes
		{
PREAMBLE

sed 's/\(.*\);\(.*\);\(.*\)/\t\tconstexpr uint8_t \1=\2;/' status-codes.txt \
	>> __target_cpp/statuscodes.h

cat << END >> __target_cpp/statuscodes.h
		}
	}
#endif
END



cat << PREAMBLE > __target_cpp/controlcodes.h
#ifdef __WAND__
target[name[controlcodes.h] type[include]]
#endif

#ifndef MIDICONSTANTS_CONTROLCODES_H
#define MIDICONSTANTS_CONTROLCODES_H

#include <cstdint>

namespace MIDIConstants
	{
	namespace ControlCodes
		{
PREAMBLE

sed 's/\(.*\);\(.*\);\(.*\)/\t\tconstexpr uint8_t \1=\2;/' control-codes.txt \
	>> __target_cpp/controlcodes.h

cat << END >> __target_cpp/controlcodes.h
		}
	}
#endif
END



cat << PREAMBLE > __target_cpp/gmprograms.h
#ifdef __WAND__
target[name[gmprograms.h] type[include]]
dependency[gmprograms.o]
#endif

#ifndef MIDICONSTANTS_GMPROGRAMS_H
#define MIDICONSTANTS_GMPROGRAMS_H

#include <cstdint>

namespace MIDIConstants
	{
	namespace GmPrograms
		{
		extern const char* PROGRAM_NAMES[129];

PREAMBLE

sed 's/\(.*\);\(.*\);\(.*\)/\t\tconstexpr uint8_t \1=\2;/' gm-programs.txt \
	>> __target_cpp/gmprograms.h

cat << END >> __target_cpp/gmprograms.h
		}
	}
#endif
END



cat << PREAMBLE > __target_cpp/gmprograms.cpp
#ifdef __WAND__
target[name[gmprograms.o] type[object]]
#endif

#include "gmprograms.h"

const char* MIDIConstants::GmPrograms::PROGRAM_NAMES[129]=
	{
PREAMBLE

sed 's/\(.*\);\(.*\);\(.*\)/\t"\3",/' gm-programs.txt \
	>> __target_cpp/gmprograms.cpp

cat << END >> __target_cpp/gmprograms.cpp
	nullptr
	};
END



cat << PREAMBLE > __target_cpp/gmdrumkit.h
#ifdef __WAND__
target[name[gmdrumkit.h] type[include]]
dependency[gmdrumkit.o]
#endif

#ifndef MIDICONSTANTS_GMDRUMKIT_H
#define MIDICONSTANTS_GMDRUMKIT_H

#include <cstdint>

namespace MIDIConstants
	{
	namespace GmDrumkit
		{
		extern const char* PERCUSSION_NAMES[129];

PREAMBLE

sed 's/\(.*\);\(.*\);\(.*\)/\t\tconstexpr uint8_t \1=\2;/' gm-drumkit.txt \
	>> __target_cpp/gmdrumkit.h

cat << END >> __target_cpp/gmdrumkit.h
		}
	}
#endif
END



cat << PREAMBLE > __target_cpp/gmdrumkit.cpp
#ifdef __WAND__
target[name[gmdrumkit.o] type[object]]
#endif

#include "gmdrumkit.h"

const char* MIDIConstants::GmDrumkit::PERCUSSION_NAMES[129]=
	{
PREAMBLE

sed 's/\(.*\);\(.*\);\(.*\)/\t"\3",/' gm-drumkit.txt \
	>> __target_cpp/gmdrumkit.cpp

cat << END >> __target_cpp/gmdrumkit.cpp
	nullptr
	};
END

mv __target_cpp/* .
