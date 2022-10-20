# def square(x):
#     return x*x

square = lambda x: x*x # lambda is an anonymous function

result = square(5)
print(f"Result: {result}")

add = lambda a,b: a+b
sum = add(5,6)
print(f"Sum: {sum}")


numbers = [1,2,3,4,5,6,7,8,9,10]
print(numbers)

def double_it(x):
    return x*2
double_it2 = lambda x: x*2

doubled_numbers = map(double_it,numbers)
print(f"Doubled Numbers: {list(doubled_numbers)}")

# filter numbers greater than 5
bigger_than_5 = filter(lambda x: x>5,numbers)
print(f"Numbers greater than 5: {list(bigger_than_5)}")

users = [
    {'username': 'samuel', 'age': 3},
    {'username': 'katie', 'age': 12},
    {'username': 'jeff', 'age': 74},
    {'username': 'bob123', 'age': 42},

]

senior = filter(lambda user: user['age'] > 35,users)
print(f"Senior Users: {list(senior)}")