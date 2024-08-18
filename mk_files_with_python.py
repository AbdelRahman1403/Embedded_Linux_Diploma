import os
from datetime import date
import time

def make_file(name_file , name_topic , name_session):
    with open(f"/home/abdel-rahman-yassin/Embedded_Linux_Diploma/{name_topic}/{name_session}/{name_file}" , "w") as fd:
        if name_topic == "python":
            os.write(fd.fileno(),
          f"#File Name : {name_file}\n\
#The Author is : AbdelRahman Ahmed Yassin\n\
#The Date Of The File : {date.today()}".encode())
        else:
             os.write(fd.fileno(),
          f"/* File Name : {name_file} */\n\
/* The Author is : AbdelRahman Ahmed Yassin */\n\
/* The Date Of The File : {date.today()} */\n\
#include<iostream>\n\
#include <algorithm>\n\
#include <vector>\n\
".encode())
    
    time.sleep(2) 
    os.system(f"code /home/abdel-rahman-yassin/Embedded_Linux_Diploma/{name_topic}/{name_session}/{name_file}")
    
#Input the file name with it extension : 
name_file = input("What is the name of the file ? ")
#Input the file name Topic like cpp , pythoh , rust ... : 
name_topic = input("What is the name of the Topic ? ")
#Input the file number of session : 
name_session = input("What is the name of the session ? ")


#chick if the folder of topic is exisit of not
if not os.path.isdir(f"/home/abdel-rahman-yassin/Embedded_Linux_Diploma/{name_topic}/{name_session}"):
        if not os.path.isdir(f"/home/abdel-rahman-yassin/Embedded_Linux_Diploma/{name_topic}"):
            os.system(f"mkdir /home/abdel-rahman-yassin/Embedded_Linux_Diploma/{name_topic}")
        time.sleep(3)
        os.system(f"mkdir /home/abdel-rahman-yassin/Embedded_Linux_Diploma/{name_topic}/{name_session}")
time.sleep(2)
make_file(name_file,name_topic,name_session)
