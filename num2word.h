#include<stdio.h>
#include<string.h>
char *numberWords(int n)
{
    char *ones[] = {"one",
                    "two",
                    "three",
                    "four",
                    "five",
                    "six",
                    "seven",
                    "eight",
                    "nine"};
    char *tenTOtwenty[] = {"eleven",
                           "twelve",
                           "thirteen",
                           "fourteen",
                           "fifteen",
                           "sixteen",
                           "seventeen",
                           "eighteen",
                           "nineteen"};
    char *tens[] = {"ten",
                    "twenty",
                    "thirty",
                    "forty",
                    "fifty",
                    "sixty",
                    "seventy",
                    "eighty",
                    "ninety"};
    // char *newTemp;
    char storeTheword[100];

    if (n < 10)
    {
        return ones[n - 1];
    }
    else if (n > 10 && n < 20)
    {
        return tenTOtwenty[(n % 10) - 1];
    }
    else if (n % 10 == 0 && n < 100)
    {
        return tens[(n / 10) - 1];
    }
    else if (n % 10 != 0 && n < 100)
    {
        strcpy(storeTheword, numberWords(n - n % 10));
        strcat(storeTheword, numberWords(n % 10));
        char *newTemp = storeTheword;
        return newTemp;
    }
    else if (n > 99 && n < 1000)
    {
        if (n % 100 == 0)
        {
            strcpy(storeTheword, numberWords(n / 100));
            strcat(storeTheword, "hundred");
            char *newTemp = storeTheword;
            return newTemp;
        }
        else
        {
            strcpy(storeTheword, numberWords(n - n % 100));
            strcat(storeTheword, "and");
            strcat(storeTheword, numberWords(n % 100));
            char *newTemp = storeTheword;
            return newTemp;
        }
    }
    else if (n > 999 && n < 1000000)
    {
        if (n % 1000 == 0)
        {
            strcpy(storeTheword, numberWords(n / 1000));
            strcat(storeTheword, "thousand");
            char *newTemp = storeTheword;
            return newTemp;
        }
        else
        {
            strcpy(storeTheword, numberWords(n - n % 1000));
            strcat(storeTheword, "and");
            strcat(storeTheword, numberWords(n % 1000));
            char *newTemp = storeTheword;
            return newTemp;
        }
    }
    
}