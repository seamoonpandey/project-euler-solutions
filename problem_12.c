/*We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?*/

#include <stdio.h>
int totalNumberof_Factors(int);
int TriangleNumberCreator(int);
int main()
{
    int i = 1,
        triangleNumber,
        factorCount;
    do
    {
        ++i;
        triangleNumber = TriangleNumberCreator(i);
        factorCount = totalNumberof_Factors(triangleNumber);
    } while (factorCount <= 500);

    printf("%d", triangleNumber);

    return 0;
}
int TriangleNumberCreator(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}
int totalNumberof_Factors(int x)
{
    int count = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    return count;
}