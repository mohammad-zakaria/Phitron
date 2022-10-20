from unittest import result


def add(a,b):
    print(f"ADDING {a} + {b}")
    return a+b

result = add(b=30,a = 5)
print(f"Result: {result}")

def multiply(a,b=1):
    print(f"MULTIPLYING {a} * {b}")
    return a*b

# muliple parementers
def multiply(*args):
    result = 1
    for arg in args:
        result *= arg
    return result

result = multiply(4,5)
print(f"Result: {result}")
