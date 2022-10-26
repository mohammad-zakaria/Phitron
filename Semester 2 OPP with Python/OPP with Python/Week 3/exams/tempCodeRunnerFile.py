# Input  : x3b4U5i2
# Output : bbbbiiUUUUUxxx

x = 'x3b4U5i2'
x = list(x)
y = ''
for i in x:
    n = int(x[i+1])
    while(n != 0):
        y = y + x[i]
        n = n - 1
    i = i + 2
y = "".join(sorted(y, key=str.lower))
print(y)
    