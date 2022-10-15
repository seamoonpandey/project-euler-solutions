/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
#include<stdio.h>
void main()
{
    int rem,i;
    long n=20;
    do{
        n++;
        rem=0;
        for(i=1;i<=20;i++)
        {
            rem=n%i;
            if (rem!=0)
            {
                break;
            }
        }

    }while(rem!=0);
    printf("%d",n);

}