/*Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million(4000000), find the sum of the even-valued terms.*/
#include<stdio.h>
void main(){
    long a=1,b=2,c=0,d,sum=2;
    while (c<4000000)
    {
        c=a+b;
        if(c%2==0){
            sum+=c;
        }
        a=b;b=c;
    }
    printf("%ld",sum);
    
    
}