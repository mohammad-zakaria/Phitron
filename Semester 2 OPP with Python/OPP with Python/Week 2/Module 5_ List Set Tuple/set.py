from os import remove
from numpy import empty, number


numbers = [12, 45, 56, 45, 12]

print(numbers)

nums = {12, 45, 56, 45, 12} #set in python don't store duplicate
print(nums)

empty = set()

print(empty)

numbers_set = set(numbers)
numbers_set.add(90)
numbers_set.add(45)

print(numbers_set)

numbers_set.remove(45)
print(numbers_set)


print(len(numbers_set))