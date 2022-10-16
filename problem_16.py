a=2**1000
print (a)

sum=0
while a:
    sum+=a%10
    a//=10
print(sum)


# def sum_of_digits(n):
#     s = 0
#     while n:
#         s += n % 10
#         n //= 10
#     return s

# print(sum_of_digits(123))
# print(sum_of_digits(99))
# print(sum_of_digits(0))
# print(sum_of_digits(10))
# print(sum_of_digits(123456789))