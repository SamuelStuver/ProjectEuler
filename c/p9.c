/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    float c;

    for (a=1; a <= 500 + 1; a++) {
        for (b=1; b <= 500 + 1; b++) {
            c = (float)sqrt((float)(a*a) + (float)(b*b));
            printf("\n%d^2 + %d^2 = %f^2", a, b, c);
            printf("\n%d + %d + %f = %f\n", a, b, c, a+b+c);
            if ((a+b+c) == 1000) {
                printf("\nFOUND: %d * %d * %f = %f\n", a, b, c, a*b*c);
                exit(EXIT_SUCCESS);
            }
        }
    }

    return 0;
}

