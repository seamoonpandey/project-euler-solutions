/*The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.*/

#include <stdio.h>
void main()
{
    int const numberBarrier = 1000000;
    long givenNumber = 13,
         testNumber,
         finalNumber;
    int countRun,
        countMax = 0;
    for (givenNumber = 13; givenNumber < numberBarrier; givenNumber++)
    {
        countRun = 0;
        testNumber = givenNumber;
        while (testNumber > 1)
        {
            if (testNumber % 2 == 0)
            {
                testNumber /= 2;
            }
            else
            {
                testNumber = (testNumber * 3) + 1;
            }
            countRun++;
        }
        // printf("%ld\t%d\t%d\n",givenNumber,countRun,countMax);
        countMax = (countMax > countRun) ? countMax : countRun;
    }
    for (givenNumber = 13; givenNumber < numberBarrier; givenNumber++)
    {
        countRun = 0;
        testNumber = givenNumber;
        while (testNumber > 1)
        {
            if (testNumber % 2 == 0)
            {
                testNumber /= 2;
            }
            else
            {
                testNumber = (testNumber * 3) + 1;
            }
            countRun++;
        }
        if (countRun == countMax)
        {
            finalNumber=givenNumber;
            break;
        }
        else
            continue;
    }
    printf("%ld", finalNumber);
}