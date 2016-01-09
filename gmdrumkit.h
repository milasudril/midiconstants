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

		constexpr uint8_t HIGH_Q=27;
		constexpr uint8_t SLAP=28;
		constexpr uint8_t SCRATCH_PUSH=29;
		constexpr uint8_t SCRATCH_PULL=30;
		constexpr uint8_t STICKS=31;
		constexpr uint8_t SQUARE_CLICK=32;
		constexpr uint8_t METRONOME_CLICK=33;
		constexpr uint8_t METRONOME_BELL=34;
		constexpr uint8_t BASSDRUM2=35;
		constexpr uint8_t BASSDRUM1=36;
		constexpr uint8_t RIMSHOT=37;
		constexpr uint8_t SNAREDRUM1=38;
		constexpr uint8_t CLAP=39;
		constexpr uint8_t SNAREDRUM2=40;
		constexpr uint8_t TOM_FLOOR_LOW=41;
		constexpr uint8_t HIHAT_CLOSED=42;
		constexpr uint8_t TOM_FLOOR_HIGH=43;
		constexpr uint8_t HIHAT_PEDAL=44;
		constexpr uint8_t TOM_LOW=45;
		constexpr uint8_t HIHAT_OPEN=46;
		constexpr uint8_t TOM_MID_LOW=47;
		constexpr uint8_t TOM_MID_HIGH=48;
		constexpr uint8_t CYMBAL_CRASH1=49;
		constexpr uint8_t TOM_HIGH=50;
		constexpr uint8_t CYMBAL_RIDE1=51;
		constexpr uint8_t CYMBAL_CHINESE=52;
		constexpr uint8_t CYMBAL_RIDE_BELL=53;
		constexpr uint8_t TAMBOURINE=54;
		constexpr uint8_t CYMBAL_SPLASH=55;
		constexpr uint8_t COWBELL=56;
		constexpr uint8_t CYMBAL_CRASH2=57;
		constexpr uint8_t VIBRASLAP=58;
		constexpr uint8_t CYMBAL_RIDE2=59;
		constexpr uint8_t BONGO_HIGH=60;
		constexpr uint8_t BONGO_LOW=61;
		constexpr uint8_t CONGA_HIGH_MUTED=62;
		constexpr uint8_t CONGA_HIGH_OPEN=63;
		constexpr uint8_t CONGA_LOW=64;
		constexpr uint8_t TIMBALE_HIGH=65;
		constexpr uint8_t TIMBALE_LOW=66;
		constexpr uint8_t AGOGO_HIGH=67;
		constexpr uint8_t AGOGO_LOW=68;
		constexpr uint8_t CABASA=69;
		constexpr uint8_t MARACAS=70;
		constexpr uint8_t WHISTLE_SHORT=71;
		constexpr uint8_t WHISTLE_LONG=72;
		constexpr uint8_t GUIRO_SHORT=73;
		constexpr uint8_t GUIRO_LONG=74;
		constexpr uint8_t CLAVES=75;
		constexpr uint8_t WOODBLOCK_HIGH=76;
		constexpr uint8_t WOODBLOCK_LOW=77;
		constexpr uint8_t CUICA_MUTED=78;
		constexpr uint8_t CUICA_OPEN=79;
		constexpr uint8_t TRIANGLE_MUTED=80;
		constexpr uint8_t TRIANGLE_OPEN=81;
		constexpr uint8_t SHAKER=82;
		constexpr uint8_t BELL_JINGLE=83;
		constexpr uint8_t BELLTREE=84;
		constexpr uint8_t CASTANETS=85;
		constexpr uint8_t SURDO_MUTED=86;
		constexpr uint8_t SUROD_OPEN=87;
		constexpr uint8_t APPLAUSE=88;
		constexpr uint8_t APPLAUSE_CATHEDRAL=89;
		}
	}
#endif
