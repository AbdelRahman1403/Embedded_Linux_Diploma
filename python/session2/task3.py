import pyautogui as pa
from time import sleep

def search_ext(name_ext , x , y):
    pa.write(name_ext)
    sleep(3)
    pa.click(x,y)
    sleep(10)

def delete_search():
    pa.moveTo(344,161)
    pa.dragTo(159, 159, button='left') 
    pa.hotkey('delete')
    sleep(2)

pa.click(21,387)
sleep(2)
url = "cd /home/abdel-rahman-yassin/El_Ripo_dip/python/session2"
pa.write(url)
sleep(1)
pa.press('enter')
sleep(2)
pa.write('code task3.py')
sleep(2)
pa.press('enter')
sleep(2)

pa.click(115,366)
sleep(2)
pa.click(162,161)


search_ext('clang',383,428)
delete_search()

search_ext('cmake',391,254)
delete_search()

search_ext('c++ helper',391,254)
delete_search()

search_ext('c++ testmate',391,254)
delete_search()