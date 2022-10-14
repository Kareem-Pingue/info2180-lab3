import pyautogui 
import time

c = 0

input("Enter 0/1: ", c)

if c == 1:
    c = True
else: 
    c = False

while c is True:
    pyautogui.press('right')
    
