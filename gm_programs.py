#@  {
#@  "targets":
#@      [
#@           {
#@			 "name":"gmprograms.hpp","dependencies":
#@				[{"ref":"gm_programs.txt","rel":"misc"},{"ref":"compile.py","rel":"misc"}]
#@			 }
#@      ]
#@  }

import compile
compile.compile('gm_programs.txt')
