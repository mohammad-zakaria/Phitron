""" 
Write a python program for the requirement below. Notice the output must be in sorted order -
Input  : x3b4U5i2
Output : bbbbiiUUUUUxxx



 """
s = input("Enter string: ")
for i in sorted(s):
    if i.isalpha():
        print(i*ord(i), end="")
    else:
        print(i*int(i), end="")