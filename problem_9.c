/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/
//how to find pythagorian triplet using c ?
#include <math.h>
#include <stdio.h>

int main()
{
    const int sum = 1000;
    int a,b,c;
    int res=0;
    for (a = 1; a <= sum/3; a++)
    {
        for (b = a + 1; b <= sum/2; b++)
        {
             c = sum - a - b;
            if ( a*a + b*b == c*c )
               printf("a=%d, b=%d, c=%d\n",a,b,c);
        }
    }
    res=(a*b*c);
    printf("%d",res);
    return 0;
}


