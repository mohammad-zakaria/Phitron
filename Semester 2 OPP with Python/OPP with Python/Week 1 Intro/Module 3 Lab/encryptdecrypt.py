""" Encrypt the following code using the Caesar Cipher. 
The key is 3. """

data = 'ab'
key = 1

output = ''
for i in data:
    output += chr((ord(i) + key-97) % 26 + 97)
print(output)