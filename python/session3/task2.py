import webbrowser as web
import pyautogui as pt
from time import sleep

open_gmail = web.open("https://mail.google.com/mail/u/0/#inbox")
sleep(5)

x , y= pt.locateCenterOnScreen("/home/abdel-rahman-yassin/Pictures/Screenshots/3_points.png")
sleep(2)
pt.click(x,y)
sleep(1)
pt.click(x+30,y+30)

print("Dooooooooooooonnnnnnnnnnnnnnnnnnnneeeeeeeeeeeeeeeee")