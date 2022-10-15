// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// What is the 10 001st prime number?

#include <stdio.h>
int checkPrime(long n)
{
    int flag = 0;
    long long i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main()
{
    long count = 0, n = 1;
    while (count < 10001)
    {
        n++;
        if (checkPrime(n) == 0)
        {
            count++;
        }
    }
    printf("%ld", n);
}