/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <stdio.h>

int lpf(long long number);
int isprime(long long n);
int nextprime(long long n);

int main()
{
    long long number = 600851475143;
    
    printf("largest prime factor is %d\n", lpf(number));
}

int lpf(long long number)
{
    int prime = 2;
    while (!isprime(number)) {
        while ((number % prime) == 0 && number > prime) {
            number = number / prime;
        }
        prime = nextprime(prime);
    }
        
    return number;
}

int isprime(long long n)
{
    int i, flag = 1; 
  
    for (i = 2; i <= n / 2; i++) { 
        if (n % i == 0) { 
            flag = 0; 
            break; 
        } 
    } 
    return flag;
  

}

int nextprime(long long n) 
{
    int found = 0;
    while (!found) {
        if (isprime(++n)) {
            found = 1;
            return n;
        }
    }
    return -1;
}