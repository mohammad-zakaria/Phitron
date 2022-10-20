""" Multi Line comment shortcut Alt + Shift + A """
# Single Line comment shortcut Ctrl + /

import string
from tkinter import Variable
from xmlrpc.client import boolean


id = 193025
first_name = "Mohammad"
last_name = "Zakaria"

full_name = first_name + " " + last_name

print(id, full_name)

name_type = type(full_name)
print(name_type)

#   F string

about_me = f"My name is {full_name} and my id is {id}"
print(about_me)

# User Input in Python
# input("What is your name? ")

name = input("What is your name? ")  # By default user input is string
print(f"Hello {name}")



""" 
Summerry: 
    1. what is python
    2. python installation
    3. vs code installation ( python extension  and code runner)
    4. variable, f string, user input
          Variable nameing convention
              a. snake_case
                b. camelCase
                c. PascalCase
                d. kebab-case
    5. data type
        a. int
        b. float
        c. string
        d. boolean
        e. list
        f. tuple
        g. set
        h. dictionary
        i. complex
    6. type casting
    7. operators
        a. arithmetic
        b. assignment
        c. comparison
        d. logical
        e. identity
        f. membership
        g. bitwise
    


 """