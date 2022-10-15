/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143*/
#include<stdio.h>
int checkPrime(long long n){
    int flag=0;
    long long i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
void main()
{
    long long a,n=600851475143,num=600851475143;
    for (a=2;a<n/2;a++){
        if(num%a==0)
        {
            if (checkPrime(a)==0)
            {
                printf("%lld\t",a);
                
            }
        }
    }
}