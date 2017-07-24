#@  {
#@  "targets":
#@      [
#@           {
#@			 "name":"statuscodes.hpp","dependencies":
#@				[{"ref":"status_codes.txt","rel":"misc"},{"ref":"compile.py","rel":"misc"}]
#@			 }
#@      ]
#@  }

import compile
compile.compile('status_codes.txt')
