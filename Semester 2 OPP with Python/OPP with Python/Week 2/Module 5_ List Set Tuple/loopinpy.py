import numbers


numbers = [12, 45, 65, 23, 89, 78, 11]
# total = sum(numbers) #
# total2 = 0
# for i in numbers:
#     total2 += i


# print(total2)
# loop in set
num_set = {12, 45, 65, 23, 89, 78, 11}

# for i in num_set:
#     # print(i)

# loop in tuple
num_tuple = 12, 45, 65, 23, 89, 78, 11
for i in num_tuple:
    print(i)

# loop in dictionary
marks = {'Physics': 92, 'Chemistry': 85, 'Math': 100}
for mark in marks:
    val = marks[mark] # Here mark is variable of loop
    print(mark, val)

for subject, mark in marks.items():
    print(subject, mark)

#enumerate in python
for i, num in enumerate(numbers):
    print(i,num)