/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

(only need to check mod of primes)
*/

#include <stdio.h>


int check_mods(int n);

int main()
{
    int n = 20;
    int primes[8] = {2, 3, 5, 7, 11, 13, 17, 19};
    int i = 7;
    while (primes[i] >= 2) {
        printf("     -> %d %% %d = %d\n", n, primes[i], n % primes[i]);
        if ((n % primes[i]) != 0) {
            n = n * primes[i];
            primes[i]++;
        } else {
            n = n / primes[i];
            i--;
        }
        printf("%d\n", n);
    }
    printf("found: %d\n", n);
    if (check_mods(n)) {
        printf("confirmed.\n");
    }

}

int check_mods(int n)
{
    for (int d = 20; d >= 1; d--){
        //printf("%d %% %d = %d\n", n, d, n%d);
        if (n % d > 0) {
            return 0;
        }
    }
    return 1;
}
