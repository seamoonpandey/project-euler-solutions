/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/
#include<stdio.h>
int checkPalindrome(long n)
{
    int num=n,sum=0,rem;
    while(num!=0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num/=10;
    }
    if(sum==n){
        return 0;
    }
    else return 1;
}
void main()
{
    long i,j,k,prod,ans=0;
    for (i=100;i<1000;i++){
        for (j=i;j<1000;j++)
        {
            prod=i*j;
            if(checkPalindrome(prod)==0 && prod>ans)
            {
                ans=prod;
            }
        }
    }
    printf("%ld",ans);
}