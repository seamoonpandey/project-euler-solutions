/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/
// how to find pythagorian triplet using c ?
#include <math.h>
#include <stdio.h>

int main()
{
    int probable_first_number,
        probable_second_number,
        probable_third_number,
        first_number,
        second_number,
        third_number,
        sum = 1000;

    long long result = 0;

    for (probable_first_number = 1; probable_first_number <= sum / 3; probable_first_number++)
    {
        for (probable_second_number = probable_first_number + 1; probable_second_number <= sum / 2; probable_second_number++)
        {
            probable_third_number = sum - probable_first_number - probable_second_number;
            if (probable_first_number * probable_first_number + probable_second_number * probable_second_number == probable_third_number * probable_third_number)
            {
                first_number = probable_first_number;
                second_number = probable_second_number;
                third_number = probable_third_number;

                break;
            }
        }

        if (probable_first_number * probable_first_number + probable_second_number * probable_second_number == probable_third_number * probable_third_number)
            break;
    }
    printf("probable_first_number=%d, probable_second_number=%d, probable_third_number=%d\n", probable_first_number, probable_second_number, probable_third_number);

    result = (first_number * second_number * third_number);
    printf("%lld", result);

    return 0;
}
