# from curses import ACS_LARROW, ACS_RARROW
import time
from msilib.schema import Control
from pynput.keyboard import Key, Controller
from PIL import ImageGrab
import win32ui

k = Controller()

time.sleep(2)


# s = ImageGrab.grab()

# print(s.getpixel((940, 695)))
# print(s.getpixel((1919, 1079)))


# 949 625
# s.save("lumber.PNG")
# s = ImageGrab.grab(bbox=(920, 620, 1000, 680))
# s.show()




# while True:
#     # time.sleep(0.3)
#     s1 = ImageGrab.grab(bbox=(931, 675, 932, 676)).load()
#     s2 = ImageGrab.grab(bbox=(996, 675, 997, 676)).load()
#     s3 = ImageGrab.grab(bbox=(931, 625, 932, 626)).load()
#     s4 = ImageGrab.grab(bbox=(992, 626, 993, 677)).load()
#     # time.sleep(0.0001)
#     # s.show()
#     if (s1[0, 0] == (161, 116, 56)):
#         k.press(Key.right)
#         # k.release(Key.right)
#         # print("r")
#     elif (s2[0, 0] == (161, 116, 56)):
#         k.press(Key.left)
#         # k.release(Key.left)
#         # print("l")
#     elif (s3[0, 0] == (161, 116, 56)):
#         k.press(Key.right)
#         # k.release(Key.right)
#         # print("r")
#     elif (s4[0, 0] == (161, 116, 56)):
#         # print("WHATSDF")
#         k.press(Key.left)
#         # k.release(Key.left)
#         # print("l")
#     # time.sleep(0.023)



while True:
    # time.sleep(0.3)
    s = ImageGrab.grab(bbox=(931, 625, 997, 676)).load()
    # time.sleep(0.0001)
    # s.show()
    time.sleep(0.023)
    if (s[0, 50] == (161, 116, 56)):
        k.press(Key.right)
        k.release(Key.right)
        k.press(Key.right)
        k.release(Key.right)
        # print("r")
    elif (s[65, 50] == (161, 116, 56)):
        k.press(Key.left)
        k.release(Key.left)
        k.press(Key.left)
        k.release(Key.left)
        # print("l")
    elif (s[0, 0] == (161, 116, 56)):
        k.press(Key.right)
        k.release(Key.right)
        # print("r")
    elif (s[61, 1] == (161, 116, 56)):
        k.press(Key.left)
        k.release(Key.left)
        # print("l")


# while True:
#     # time.sleep(0.3)
#     s = ImageGrab.grab(bbox=(931, 625, 997, 676)).load()
#     # time.sleep(0.0001)
#     # s.show()
#     time.sleep(0.023)
#     if (s[0, 50] == (161, 116, 56)):
#         k.press(Key.right)
#         # k.release(Key.right)
#         # print("r")
#     elif (s[65, 50] == (161, 116, 56)):
#         k.press(Key.left)
#         # k.release(Key.left)
#         # print("l")
#     elif (s[0, 0] == (161, 116, 56)):
#         k.press(Key.right)
#         # k.release(Key.right)
#         # print("r")
#     elif (s[61, 1] == (161, 116, 56)):
#         k.press(Key.left)
#         # k.release(Key.left)
#         # print("l")
