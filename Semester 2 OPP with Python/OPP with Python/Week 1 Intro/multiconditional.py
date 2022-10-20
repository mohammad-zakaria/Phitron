exam = 'GRE'
passed = True

if passed and exam == 'GRE':
    print('Congratulations!')
    print('Congratulations! You passed the ' + exam + ' exam.')
else:
    print('Sorry, you did not pass the ' + exam + ' exam.')
    print('Try again next year.')

if passed or exam == 'GRE':
    print('Congratulations!Patri Ready')
    print('Congratulations! You passed the ' + exam + ' exam.')

#  while loop
num = 1
sum = 0

while num < 10:
    print(num)
    num += 1
    sum += num
    if num == 5:
        break

print("Out of while loop")
print(sum)


name = "Mohammad Zakaria"
# for letter in name:
#     print(letter)

# for i in range(11):
#     print(i)

# for i in range(5, 11):
#     print(i)
# print(12==13)

price = -10
if price :
    print("Yes")
else :
    print("No")





# i=1
# while(i<3):
#     print(i,end=" ")
#     i+=1


i=1
while(i<3):
    print(i)
    i+=1