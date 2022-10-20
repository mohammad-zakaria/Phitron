""" Clean the dirty data

--> Clean tha data and get a string output 'a e i o u'

"""

data = "aNEriOur\n\t>>"

new_data = data.lower()

for char in new_data:
    if char not in 'aeiou':
        new_data = new_data.replace(char, '')
print(new_data)