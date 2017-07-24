import csv
import sys
import string
import os
import time
import operator

file_template=string.Template('''/*This file has been generated from $filename by
$srcfile on $date.
Any changes to this file may be overwritten during compilation.
*/

#ifndef MIDICONSTANTS_${FILENAME_NO_EXT}_HPP
#define MIDICONSTANTS_${FILENAME_NO_EXT}_HPP

#include <utility>

namespace MIDIConstants
	{
	enum class $FilenameNoExt:int
		{
		 $constants
		};

	constexpr std::pair<$FilenameNoExt,const char*> ${FILENAME_NO_EXT}_VALUE_NAME[]=
		{
		 {$value_name}
		};

	constexpr std::pair<const char*,$FilenameNoExt> ${FILENAME_NO_EXT}_NAME_VALUE[]=
		{
		 {$name_value}
		};
	}

#endif
''')

const_template=string.Template('''${IDENTIFIER}=$value    /**<$description*/''')
name_template=string.Template('''$FilenameNoExt::${IDENTIFIER},"$description"''')
name_inv_template=string.Template('''"$description",$FilenameNoExt::${IDENTIFIER}''')

def write_error(*args, **kwargs):
    print(*args,file=sys.stderr,**kwargs)

def compile(filename):
	try:
		target_dir=sys.argv[1];
		in_dir=sys.argv[2];

		IDENTIFIER=0
		VALUE=1
		DESCRIPTION=2
		substitutes=dict();

		filename_no_ext=os.path.splitext(filename)[0]
		substitutes['FILENAME_NO_EXT']=''.join( filename_no_ext.upper().split('_') )
		substitutes['FilenameNoExt']=filename_no_ext.split('_')[0].capitalize()\
			+filename_no_ext.split('_')[1].capitalize()
		substitutes['filename']=filename
		substitutes['date']=time.strftime('%Y-%m-%d %H:%M %Z')
		substitutes['srcfile']=sys.argv[0]

		with open(in_dir + '/' + filename,encoding='utf-8') as src:
			reader=csv.reader(src,delimiter=';')
			table=list(reader)
			table_parsed=list()
			for row in table:
				table_parsed.append((row[IDENTIFIER],int(row[VALUE],0),row[DESCRIPTION]))

			constants=list()
			names=list()
			constant=dict()
			constant['FilenameNoExt']=substitutes['FilenameNoExt']
			for row in sorted(table_parsed,key=operator.itemgetter(VALUE)):
				constant['IDENTIFIER']=row[IDENTIFIER]
				constant['value']=row[VALUE]
				constant['description']=row[DESCRIPTION]
				constants.append(const_template.substitute(constant))
				names.append(name_template.substitute(constant))
			substitutes['constants']='\n\t\t\t,'.join(constants)
			substitutes['value_name']='}\n\t\t\t,{'.join(names)

			names.clear()
			for row in sorted(table_parsed,key=operator.itemgetter(DESCRIPTION)):
				constant['IDENTIFIER']=row[IDENTIFIER]
				constant['description']=row[DESCRIPTION]
				names.append(name_inv_template.substitute(constant))
			substitutes['name_value']='}\n\t\t\t,{'.join(names)

		with open(target_dir + '/' + in_dir + '/'  + ''.join(filename_no_ext.split('_')) \
			+ '.hpp','wb') as output:
			output.write(file_template.substitute(substitutes).encode('utf-8'))
		sys.exit(0)
	except Exception:
		write_error('%s:%d: error: %s\n'%(sys.argv[0],sys.exc_info()[2].tb_lineno,sys.exc_info()[1]))
		sys.exit(-1)
