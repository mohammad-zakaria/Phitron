from numpy import short


numbers = [12, 45, 56, 45, 89]
print(numbers)

numbers_tuple = 12, 45, 56, 45, 89 # tuple in pyton are immutable 
print(numbers_tuple)

print(numbers_tuple[0])

tuple2D = ([12, 45, 12], [45, 11, ])
print(tuple2D)
tuple2D[0][1] = 99
print(tuple2D)

short_tuple = 2, 

tuple_from_list = tuple(numbers)
print(tuple_from_list)