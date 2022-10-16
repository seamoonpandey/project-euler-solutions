a = 2**1000
print(a)

sum = 0
while a:
    sum += a % 10
    a //= 10
print(sum)
