def numberOf_factors(n):
    num = n
    count = 0
    for i in range(1, n+1):
        if num % i == 0:
            count += 1
    return count
# print(numberOf_factors(21))


def triangleNumberCreator(n):
    sum = 0
    for i in range(1, n+1):
        sum += i
    return sum


# print(triangleNumberCreator(10))
i = 1
while True:
    triangleNumber = triangleNumberCreator(i)
    # numberOffactors=numberOf_factors(triangleNumber)
    i = i + 1

    if numberOf_factors(triangleNumber) >= 500:
        break
print(triangleNumber)
