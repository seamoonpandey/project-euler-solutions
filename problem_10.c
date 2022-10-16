/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/

#include <stdio.h>
int checkPrime(long long n)
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
void main()
{
    long sum = 2, n = 3;
    while (n != 2000000)
    {
        if (checkPrime(n) == 0)
        {
            // printf("%ld\t\n",n);     //to check the code is working or not}
            sum += n;
        }
        n+=2;
    }
    printf("SUM=%ld", sum);
}