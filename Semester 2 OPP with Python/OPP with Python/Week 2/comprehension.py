numbers = [1,2,3,4,5,6,7,8,9,10]

odd_numbers = []

for number in numbers:
    if number % 2 == 1:
        odd_numbers.append(number)
# print(f"Odd Numbers: {odd_numbers}")

# comprehension
odd_numbers2 = [number for number in numbers if number % 2 == 1]
print(f"Odd Numbers: {odd_numbers2}")