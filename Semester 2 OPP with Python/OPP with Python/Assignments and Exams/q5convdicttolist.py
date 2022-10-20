""" You have given a dictionary ‘d’, convert it into a list. The first value will be the key of the dict, and value will come next. 
 """
#  x = { 'a' : 1, 'b' :  2, 'c': 3, 'd': 4}
# output:  [ 'a', 1, 'b',  2, 'c', 3, 'd', 4]

d = {'!': 1, '@' : 2, '#': 3, '$' : 4, '%' : 5, '^' : 6}


# crate list function 
def create_list(d):
    list1 = []
    for key, value in d.items():
        list1.append(key)
        list1.append(value)
    return list1

# print list
print(create_list(d))