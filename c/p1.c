/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <stdio.h>
#define MAXVAL 1000

int sum_mult(int val, int max);

int main()
{
    int vals[] = {3, 5};
    int val_both = vals[0] * vals[1];
    int sum_mult_1 = sum_mult(vals[0], MAXVAL);
    int sum_mult_2 = sum_mult(vals[1], MAXVAL);
    int sum_mult_both = sum_mult(val_both, MAXVAL);

    printf("sum1: %d  sum2: %d  sum both: %d\n", sum_mult_1, sum_mult_2, sum_mult_both);
    printf("sum of all multiples of %d or %d below %d: %d\n", vals[0], vals[1], MAXVAL, sum_mult_1 + sum_mult_2 - sum_mult_both);
}

int sum_mult(int val, int max)
{
    int i = 1;
    int sum = 0;

    while (i < max) {
        if (i % val == 0) {
            sum += i;
        }
        i++;
    }

    return sum;
}
