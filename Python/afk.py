import random
import pyautogui as pg
import time

while True:
    x=random.randint(-100,100)
    y=random.randint(-200,200)
    pg.move(x,y,0.5)
    time.sleep(1)