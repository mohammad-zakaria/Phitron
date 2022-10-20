numbers = [1,2,3,4,5,6,7,8,9,10]

def get_numbers(nums):
    for num in nums:
        yield num

result = get_numbers(numbers)
print(f"Result: {next(result)}")
print(f"Result: {next(result)}")
print(f"Result: {next(result)}")
print(f"Result: {next(result)}")
print(f"Result: {next(result)}")
print(f"Result: {next(result)}")
print("I know how to use generators now!")
print(f"Result: {next(result)}")
print(f"Result: {next(result)}")
print(f"Result: {next(result)}")
print(f"Result: {next(result)}")


    