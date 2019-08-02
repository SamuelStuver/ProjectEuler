/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/
#include <stdio.h>
#define MAXVAL 4000000

int fib(int max);

int main()
{
    printf("\nsum of even fib terms w/ value < %d: %d\n", MAXVAL, fib(MAXVAL));
}

int fib(int max)
{
    int sum = 0;
    int prev_val, current_val, next_val;

    prev_val = 1;
    current_val = 2;
    while (current_val < max) {
        printf("%d ", current_val);
        if (current_val % 2 == 0) {
            sum += current_val;
        }
        next_val = current_val + prev_val;
        prev_val = current_val;
        current_val = next_val;

    }

    return sum;
}
