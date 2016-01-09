#!/bin/bash

#This is an example of how this database can be used to generate program code.

#Create a C include file with all MIDI control codes

mkdir -p output
cat << PREAMBLE > output/midi_cc.h
#ifndef MIDI_CC_H
#define MIDI_CC_H

PREAMBLE
wget -nv -O - https://raw.githubusercontent.com/milasudril/midi-constants/master/control-codes.txt \
 | sed 's/\(.*\);\(.*\);\(.*\)/static const int MIDI_CC_\1=\2;/' >> output/midi_cc.h

cat << END >> output/midi_cc.h
#endif
END
