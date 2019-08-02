/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

Bertrand's Postulate: if n > 3 is an integer, then there always exists at least one prime number p with n < p < 2n − 2
*/
#include <stdio.h>
#include <math.h>

#define NVALS 10002

int next_prime(int n);
int isprime(int n);

int main()
{
    int i;
    int current_prime = 3;
    for (i=2; i < NVALS; i++){
        printf("prime #%d is %d\n", i, current_prime);
        current_prime = next_prime(current_prime);
    }
    
}

int next_prime(int n)
{
    for (int i=n+1; n < ((2*n) - 2); i++){
        if (isprime(i)) {
            return i;
        }
    }
    return -1;
}

int isprime(int n)
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