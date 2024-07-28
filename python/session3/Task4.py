#File Name : Task4.py
#The Author is : AbdelRahman Ahmed Yassin
# The Date Of The File : 2024-06-26

import pandas as pn
import csv
from pprintpp import pprint
from random import random as rd
dict_list = {
    "Function_name": [],
    "ID_Func": []
}

with open("proj.h", "r") as file_h:
    for x in file_h.readlines():
        dict_list["Function_name"].append(x.strip())  
        dict_list["ID_Func"].append(rd())  

res = pn.DataFrame(dict_list)

res.to_csv("output.csv", index=False)

with open("output.csv", 'r') as file:
    reader = csv.reader(file)
    for line in reader:
        pprint(line)

#I coded all the code but i use ChatGPT to chick the error index parametar in DataFrame.