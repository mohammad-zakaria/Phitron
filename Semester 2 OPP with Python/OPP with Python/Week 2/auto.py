import pyautogui
import time

# pyautogui.alert('This program will run for 10 seconds. Press OK to begin.')

for i in range(100):
    time.sleep(1)
    pyautogui.write('I Love you', interval=0.25)
    pyautogui.press('enter')

