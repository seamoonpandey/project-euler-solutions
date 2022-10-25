/*You are given the following information, but you may prefer to do some research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?*/

#include <stdio.h>
#include <string.h>
// char *find_Day(int);
// void sundayCheck(int);
int main()
{
    int day = 2,
        sundaysCount = 0;

    for (int year = 1901; year < 2001; year++)
    {
        for (int month = 0; month < 12; month++)
        {
            if (day % 7 == 0)
            {
                sundaysCount++;
            }
            if (month == 1)
            {
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                {
                    day += 29;
                }
                else
                    day += 28;
            }
            else if (month == 3 || month == 5 || month == 10 || month == 8)
            {
                // if (day % 7 == 0)
                // {
                //     sundaysCount++;
                // }
                day += 30;
            }
            else
            {
                day += 31;
            }
        }
    }
    printf("%d\n", sundaysCount);
    return 0;
}
// char *find_Day(int n)
// {
//     switch (n % 7)
//     {
//     case 0:
//         return "sunday";
//         break;
//     case 1:
//         return "monday";
//         break;
//     case 2:
//         return "tuesday";
//         break;
//     case 3:
//         return "wednesday";
//         break;
//     case 4:
//         return "thursday";
//         break;
//     case 5:
//         return "friday";
//         break;
//     case 6:
//         return "saturday";
//         break;

//     default:
//         return NULL;
//         break;
//     }
// }
// void sundayCheck(int day)
// {
//     char theDay[20];
//     strcpy(theDay, find_Day(day));
//     if (day % 7 == 0)
//     {
//         sundaysCount++;
//     }
// }