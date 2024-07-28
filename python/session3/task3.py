#File Name : task3.py
#The Author is : AbdelRahman Ahmed Yassin
# The Date Of The File : 2024-06-24

import sys

len_arg = len(sys.argv)

print("The number of the Arguments of the CMD : ",len_arg)

print("The file name is : " , sys.argv[0])

print("The arguments are : " , list(sys.argv[1:]))