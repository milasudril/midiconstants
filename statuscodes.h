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
		constexpr uint8_t INVALID=0;
		constexpr uint8_t NOTE_OFF=0x80;
		constexpr uint8_t NOTE_ON=0x90;
		constexpr uint8_t NOTE_PRESSURE=0xA0;
		constexpr uint8_t CONTROLLER=0xB0;
		constexpr uint8_t PGM_CHANGE=0xC0;
		constexpr uint8_t CHANNEL_PRESSURE=0xD0;
		constexpr uint8_t PITCH_BEND=0xE0;
		constexpr uint8_t SYSTEM_BEGIN=0xF0;
		constexpr uint8_t MTC_QUARTER=0xF1;
		constexpr uint8_t SONG_POSITION=0xF2;
		constexpr uint8_t SONG_SELECT=0xF3;
		constexpr uint8_t TUNE_REQUEST=0xF6;
		constexpr uint8_t SYSEX_END=0xF7;
		constexpr uint8_t CLOCK=0xF8;
		constexpr uint8_t START=0xFA;
		constexpr uint8_t CONTINUE=0xFB;
		constexpr uint8_t STOP=0xFC;
		constexpr uint8_t ACTIVE_SENSE=0xFE;
		constexpr uint8_t RESET=0xFF;
		}
	}
#endif
