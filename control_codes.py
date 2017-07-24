#@  {
#@  "targets":
#@      [
#@           {
#@			 "name":"controlcodes.hpp","dependencies":
#@				[{"ref":"control_codes.txt","rel":"misc"},{"ref":"compile.py","rel":"misc"}]
#@			 }
#@      ]
#@  }

import compile
compile.compile('control_codes.txt')
