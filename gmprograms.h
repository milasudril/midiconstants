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

		constexpr uint8_t PIANO_GRAND=0;
		constexpr uint8_t PIANO_BRIGHT=1;
		constexpr uint8_t PIANO_GRAND_ELECTRIC=2;
		constexpr uint8_t PIANO_HONKYTONK=3;
		constexpr uint8_t PIANO_ELECTRIC1=4;
		constexpr uint8_t PIANO_ELECTRIC2=5;
		constexpr uint8_t HARPSICHORD=6;
		constexpr uint8_t CLAVINET=7;
		constexpr uint8_t CELESTA=8;
		constexpr uint8_t GLOCKENSPIEL=9;
		constexpr uint8_t MUSICBOX=10;
		constexpr uint8_t VIBRAPHONE=11;
		constexpr uint8_t MARIMBA=12;
		constexpr uint8_t XYLOPHONE=13;
		constexpr uint8_t BELL_TUBULAR=14;
		constexpr uint8_t DULCIMER=15;
		constexpr uint8_t ORGAN_DRAWBAR=16;
		constexpr uint8_t ORGAN_PERCUSSIVE=17;
		constexpr uint8_t ORGAN_ROCK=18;
		constexpr uint8_t ORGAN_CHURCH=19;
		constexpr uint8_t ORGAN_REED=20;
		constexpr uint8_t ACCORDION=21;
		constexpr uint8_t HARMONICA=22;
		constexpr uint8_t ACCORDION_TANGO=23;
		constexpr uint8_t GUITAR_NYLON=24;
		constexpr uint8_t GUITAR_STEEL=25;
		constexpr uint8_t GUITAR_ELECTRIC_JAZZ=26;
		constexpr uint8_t GUITAR_ELECTRIC_CLEAN=27;
		constexpr uint8_t GUITAR_ELECTRIC_MUTED=28;
		constexpr uint8_t GUITAR_ELECTRIC_OVERDRIVE=29;
		constexpr uint8_t GUITAR_ELECTRIC_DIST=30;
		constexpr uint8_t GUITAR_HARMONICS=31;
		constexpr uint8_t BASS_ACOUSTIC=32;
		constexpr uint8_t BASS_FINGER=33;
		constexpr uint8_t BASS_PICK=34;
		constexpr uint8_t BASS_FRETLESS=35;
		constexpr uint8_t BASS_SLAP1=36;
		constexpr uint8_t BASS_SLAP2=37;
		constexpr uint8_t BASS_SYNTH1=38;
		constexpr uint8_t BASS_SYNTH2=39;
		constexpr uint8_t VIOLIN=40;
		constexpr uint8_t VIOLA=41;
		constexpr uint8_t CELLO=42;
		constexpr uint8_t CONTRABASS=43;
		constexpr uint8_t STRINGS_TREMOLO=44;
		constexpr uint8_t STRINGS_PIZZICATO=45;
		constexpr uint8_t HARP=46;
		constexpr uint8_t TIMPANI=47;
		constexpr uint8_t STRINGS1=48;
		constexpr uint8_t STRINGS2=49;
		constexpr uint8_t STRINGS_SYNTH1=50;
		constexpr uint8_t STRINGS_SYNTH2=51;
		constexpr uint8_t CHOIR_AAH=52;
		constexpr uint8_t CHOIR_OOH=53;
		constexpr uint8_t CHOIR_SYNTH=54;
		constexpr uint8_t ORCHESTRA_HIT=55;
		constexpr uint8_t TRUMPET=57;
		constexpr uint8_t TROMBONE=58;
		constexpr uint8_t TUBA=59;
		constexpr uint8_t TRUMPET_MUTED=60;
		constexpr uint8_t HORN_FRENCH=61;
		constexpr uint8_t BRASS=62;
		constexpr uint8_t BRASS_SYNTH1=63;
		constexpr uint8_t BRASS_SYNTH2=64;
		constexpr uint8_t SAX_SOPRANO=65;
		constexpr uint8_t SAX_ALTO=66;
		constexpr uint8_t SAX_TENOR=67;
		constexpr uint8_t SAX_BARITONE=68;
		constexpr uint8_t OBOE=69;
		constexpr uint8_t HORN_ENGLISH=70;
		constexpr uint8_t BASSOON=71;
		constexpr uint8_t CLARINET=72;
		constexpr uint8_t FLUTE_PICCOLO=73;
		constexpr uint8_t FLUTE=74;
		constexpr uint8_t RECORER=75;
		constexpr uint8_t FLUTE_PAN=76;
		constexpr uint8_t BOTTLE_BLOWN=77;
		constexpr uint8_t SHAKUHACHI=78;
		constexpr uint8_t WHISTLE=79;
		constexpr uint8_t OCARINA=80;
		constexpr uint8_t SYNTHLEAD_SQAUARE=81;
		constexpr uint8_t SYNTHLEAD_SAWTOOTH=82;
		constexpr uint8_t SYNTHLEAD_CALLIOPE=83;
		constexpr uint8_t SYNTHLEAD_CHIFF=84;
		constexpr uint8_t SYNTHLEAD_CHARANG=85;
		constexpr uint8_t SYNTHLEAD_VOICE=86;
		constexpr uint8_t SYNTHLEAD_FITHS=87;
		constexpr uint8_t SYNTHLEAD_BASSLEAD=88;
		constexpr uint8_t SYNTHPAD_NEWAGE=89;
		constexpr uint8_t SYNTHPAD_POLYSYNTH=90;
		constexpr uint8_t SYNTHPAD_CHOIR=91;
		constexpr uint8_t SYNTHPAD_BOWED=92;
		constexpr uint8_t SYNTHPAD_METALLIC=93;
		constexpr uint8_t SYNTHPAD_HALO=94;
		constexpr uint8_t SYNTHPAD_SWEEP=95;
		constexpr uint8_t FX_RAIN=96;
		constexpr uint8_t FX_SOUNDTRACK=97;
		constexpr uint8_t FX_CRYSTAL=98;
		constexpr uint8_t FX_ATMOSPHERE=99;
		constexpr uint8_t FX_BRIGHTNESS=100;
		constexpr uint8_t FX_GOBLINS=101;
		constexpr uint8_t FX_ECHOES=102;
		constexpr uint8_t FX_SCIFI=103;
		constexpr uint8_t SITAR=104;
		constexpr uint8_t BANJO=105;
		constexpr uint8_t SHAMISEN=106;
		constexpr uint8_t KOTO=107;
		constexpr uint8_t KALIMBA=108;
		constexpr uint8_t BAGPIPE=109;
		constexpr uint8_t FIDDLE=110;
		constexpr uint8_t SHANAI=111;
		constexpr uint8_t BELL_TINKLE=112;
		constexpr uint8_t AGOGO=113;
		constexpr uint8_t DRUMS_STEEL=114;
		constexpr uint8_t WOODBLOCKS=115;
		constexpr uint8_t DRUMS_TAIKO=116;
		constexpr uint8_t TOMS_MELODIC=117;
		constexpr uint8_t DRUMS_SYNTH=118;
		constexpr uint8_t CYMBAL_REVERSED=119;
		constexpr uint8_t GUITAR_FRET=120;
		constexpr uint8_t BREATH=121;
		constexpr uint8_t SEASHORE=122;
		constexpr uint8_t BIRDTWEET=123;
		constexpr uint8_t TELEPHONE=124;
		constexpr uint8_t HELICOPTER=125;
		constexpr uint8_t APPLAUSE=126;
		constexpr uint8_t GUNSHOT=127;
		}
	}
#endif
