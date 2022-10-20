""" . Create a string out of some words given in a list -

l = ["This", "is", "very", "fantastic"]


Expected Output:
"This is very fantastic"

Write a function named create_string() and write your code inside this function.
 """

l = ["This", "is", "very", "fantastic"]

def create_string(l):
    return " ".join(l)

print(create_string(l))

# what does the join function do? It joins the list elements with a space in between them. 
# So, the output is "This is very fantastic" as expected. The join function is a string function. 
# It is used to join a list of strings with a separator. The separator is the string that is used to join the strings. 
# In this case, the separator is a space. So, the output is "This is very fantastic" as expected.

