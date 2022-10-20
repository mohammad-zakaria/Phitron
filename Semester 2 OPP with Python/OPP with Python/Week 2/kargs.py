# k args in python

def multiply(**kwargs):
    result = 1
    for key, value in kwargs.items():
        result *= value
    return result

result = multiply(a=4,b=5)
print(f"Result: {result}")

# k args in for string formatting
def all_about(*args, **kwargs):
    print(args)
    print(kwargs)
    for arg in args:
        print(arg)
    for key, value in kwargs.items():
        print(f"{key} = {value}")

all_about(1,2,3,4,5,6,7,8,9,10, a=1, b=2, c=3, d=4, e=5, f=6, g=7, h=8, i=9, j=10)