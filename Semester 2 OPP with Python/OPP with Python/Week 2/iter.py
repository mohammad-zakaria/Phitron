
numbers = [1,2,3,4,5,6,7,8,9,10]

numbers_iter = iter(numbers)
try:
    while True:
        print(next(numbers_iter))
except StopIteration:
    print("Iteration Complete")
