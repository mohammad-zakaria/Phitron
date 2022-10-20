""" Given a string ‘s’ you need to find the words that are in list ‘a’ 
and use the next words on string ‘s’ to create a new string. 
Save it inside a file called ‘out.txt’. 
Remember to close the file after writing.

Write a function named create_new_string() and write your code inside this function.


a = ['oh', 'Emelia', 'to']

s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."

output = "I love Bangladesh" (inside a file)


 """
from hashlib import new
from multiprocessing.context import set_spawning_popen
import string
from typing import Set
a = ['oh', 'Emelia', 'to']
s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."
def create_new_string(s,a):
   s = s.translate(str.maketrans('', '', string.punctuation))
   k = s[0].lower()
   s = s.replace(s[0], k)
   s_split = s.split(" ")
   new_string = []
   s_split.reverse()
   for word in s_split:
       if word in a:
           k = s_split.index(word)
           new_string.append(s_split[k-1])
   new_string.reverse()
   output = ''
   k = new_string.__len__()
   for word in new_string:
       k -= 1
       if k !=0:
           output += word
       if k != 1:
           output += ' '
   return output
 

 
output = create_new_string(s,a)
 
f = open("out.txt", "a")
f.write(output)
f.close()
