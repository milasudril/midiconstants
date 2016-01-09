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
		constexpr uint8_t BANK_SELECT=0;
		constexpr uint8_t MODWHEEL=1;
		constexpr uint8_t BREATH=2;
		constexpr uint8_t FOOT=4;
		constexpr uint8_t PORTAMENTO_TIME=5;
		constexpr uint8_t DATA_ENTRY=6;
		constexpr uint8_t CHANNEL_VOLUME=7;
		constexpr uint8_t BALANCE=8;
		constexpr uint8_t PAN=10;
		constexpr uint8_t EXPRESSION=11;
		constexpr uint8_t EFFECT1=12;
		constexpr uint8_t EFFECT2=13;
		constexpr uint8_t GENERAL_PURPOSE_1=16;
		constexpr uint8_t GENERAL_PURPOSE_2=17;
		constexpr uint8_t GENERAL_PURPOSE_3=18;
		constexpr uint8_t GENERAL_PURPOSE_4=19;
		constexpr uint8_t SUSTAIN=64;
		constexpr uint8_t PORTAMENTO_SWITCH=65;
		constexpr uint8_t SOSTENUTO=66;
		constexpr uint8_t SOFT_PEDAL=67;
		constexpr uint8_t LEGATO=68;
		constexpr uint8_t HOLD=69;
		constexpr uint8_t SOUND_1=70;
		constexpr uint8_t SOUND_2=71;
		constexpr uint8_t SOUND_3=72;
		constexpr uint8_t SOUND_4=73;
		constexpr uint8_t SOUND_5=74;
		constexpr uint8_t SOUND_6=75;
		constexpr uint8_t SOUND_7=76;
		constexpr uint8_t SOUND_8=77;
		constexpr uint8_t SOUND_9=78;
		constexpr uint8_t SOUND_10=79;
		constexpr uint8_t GENERAL_PURPOSE_5=80;
		constexpr uint8_t GENERAL_PURPOSE_6=81;
		constexpr uint8_t GENERAL_PURPOSE_7=82;
		constexpr uint8_t GENERAL_PURPOSE_8=83;
		constexpr uint8_t PORTAMENTO_CONTROL=84;
		constexpr uint8_t VELOCITY_PREFIX=88;
		constexpr uint8_t EFFECT1_DEPTH=91;
		constexpr uint8_t EFFECT2_DEPTH=91;
		constexpr uint8_t EFFECT3_DEPTH=91;
		constexpr uint8_t EFFECT4_DEPTH=91;
		constexpr uint8_t EFFECT5_DEPTH=91;
		constexpr uint8_t DATA_INCREMENT=96;
		constexpr uint8_t DATA_DECREMENT=97;
		constexpr uint8_t PARAMETER_NUMBER_REG=100;
		constexpr uint8_t PARAMETER_NUMBER_REG=101;
		constexpr uint8_t SOUND_OFF=120;
		constexpr uint8_t CONTROLLERS_RESET=121;
		constexpr uint8_t LOCAL_SWITCH=122;
		constexpr uint8_t NOTES_OFF=123;
		constexpr uint8_t OMNI_OFF=124;
		constexpr uint8_t OMNI_ON=125;
		constexpr uint8_t MONO_MODE=126;
		constexpr uint8_t POLY_MODE=127;
		}
	}
#endif
