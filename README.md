# midi-constants -- An unofficial MIDI SDK
This repository contains all (General)MIDI constants in semicolon delimited text files.

## Contnets
 * `status-codes.txt` contains all MIDI status codes
 * `control-codes.txt` contains all control codes for MIDI status 0xB0
 * `gm-programs.txt` contains names of all General MIDI programs
 * `gm-drumkit.txt` contains names of all General MIDI percussion instruments

## Usage
See `example.sh`

### Control codes
Control codes less than 32 have a corresponding Least Significant Byte control code obtained by adding 32 to the Most Significant Byte control code.
