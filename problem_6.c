#include<stdio.h>
#include<math.h>
/*void main()
{
    int i,j;
    long sum1=0,sum2=0,res;
    for(i=1;i<=100;i++)
    {
        sum1+=pow(i,2);
        sum2+=i;
    }
    printf("%d\n",sum2);
    sum2=pow(sum2,2);    
    res=sum2-sum1;

    printf("%ld -%ld =%ld",sum2,sum1,res);

}*/
#include<stdio.h>
void main()
{
    int i,j;
    long sum1=0,sum2=0,res;
    for(i=1;i<=100;i++)
    {
        sum1+=(i*i);
        sum2+=i;
    }
    printf("%d\n",sum2);
    sum2=sum2*sum2;    
    res=sum2-sum1;

    printf("%ld -%ld =%ld",sum2,sum1,res);

}