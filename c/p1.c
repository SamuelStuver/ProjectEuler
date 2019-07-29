/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#define MAX 1000

int sum_mult(int val1, int val2, int max);

int main()
{
    int val1 = 3;
    int val2 = 5;
    printf("sum of all multiples of %d or %d below %d: %d", val1, val2, MAX, sum_mult(val1, val2, MAX));
}

int sum_mult(int val, int max)
{
    int i, j;
    int sum = 0;

    return sum;
}
