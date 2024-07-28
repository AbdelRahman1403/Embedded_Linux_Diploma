import os,shutil
from sys import platform
type_os = platform

if not type_os == 'linux':
    print(f"sorry , this file dous not play in {platform}")
else:
    if os.path.exists('project_AVR_With_Python'):
        shutil.rmtree('project_AVR_With_Python')
        print('folder deleted')
    os.system("mkdir -p python/session3/project_AVR_With_Python")
    fd = open("python/session3/project_AVR_With_Python/proj.c" , "w")
    os.write(fd.fileno(),
             "#include <iostream>\n\
             using namespace std\n\
             int set_bits(){\n\
                int bits[8];\n\
                for(int i = 0 ; i < 8 ; i++)\n\
                {\n\
                 cout << \"Please enter bit\" << i << \"mode\" :;\n\
                 cin >> bits[i];\n\
                 }\
                ".encode())
    fd.close()