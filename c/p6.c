/*
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <stdio.h>
#include <assert.h>

#define NVALS_TEST 10
#define NVALS_FINAL 100

int square_of_sum(int n);
int sum_of_squares(int n);

int main()
{
    int s1 = sum_of_squares(NVALS_TEST);
    int s2 = square_of_sum(NVALS_TEST);
    printf("Diff: %d - %d = %d\n", s2, s1, s2-s1);
    assert((s2 - s1) == 2640);
    s1 = sum_of_squares(NVALS_FINAL);
    s2 = square_of_sum(NVALS_FINAL);
    printf("Diff: %d - %d = %d\n", s2, s1, s2-s1);
    return 0;
}

int sum_of_squares(int n)
{
    int sum = 0;
    for (int i=1; i <= n; i++){
        sum += (i*i);
    }

    return sum;
}

int square_of_sum(int n)
{
    int sum = 0;
    for (int i=1; i <= n; i++){
        sum += i;
    }

    return (sum*sum);
}

