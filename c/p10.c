/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include <math.h>

int isprime(long n);
int next_prime(long n);

int main()
{
    long sum = 2;
    long current_prime = 3;
    while (current_prime < 2000000 && current_prime > 0) {
        long next = next_prime(current_prime);
        if (next < 2000000) {
            current_prime = next_prime(current_prime);
            sum += current_prime;
        }
        printf("sum: %ld\ncurrent prime: %ld\n", sum, current_prime);
    }
}


/* n > 3 */
int next_prime(long n)
{
    for (int i=n+1; n < ((2*n) - 2); i++){
        if (isprime(i)) {
            return i;
        }
    }
    return -1;
}

int isprime(long n)
{
    if (n % 2 == 0){
        return 0;
    }
    for (int i=3; i <= sqrt(n); i+=2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}