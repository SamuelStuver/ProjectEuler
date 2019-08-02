/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM 999
#define MIN_NUM 100

int ispal(int n);
void reverse(char *s);
int string_length(char *pointer);

int main()
{
    int n1, n2;
    int current_max = 0;
    for (n1 = MAX_NUM; n1 >= MIN_NUM; n1--){
        for (n2 = MAX_NUM; n2 >= MIN_NUM; n2--){
            if (ispal(n1*n2)){
                printf("%d * %d = %d\n", n1, n2, n1*n2);
                if (n1*n2 > current_max){
                    current_max = n1*n2;
                }
            }
        }
    }
    printf("max palindrome: %d\n", current_max);
}

int ispal(int n)
{
    char *s = malloc(256);
    int n_chars = 0;

    if (n < 0) {
        *s++ = '-';
        n = -n;
        n_chars++;
    }
    while (n / 10){     /* while n >= 10 or n <= -10 */
        *s++ = (n % 10) + '0';
        n /= 10; 
        n_chars++;
    }
    *s++ = n + '0';
    n_chars++;
    *s = '\0';
    s = s-n_chars;

    char *s_flip = malloc(256);
    s_flip = strcpy(s_flip, s);
    reverse(s_flip);
    
    if (strcmp(s, s_flip) == 0){
        return 1;
    }
    
    return 0;
}

void reverse(char *s)
{
    int length, c;
    char *begin, *end, temp;
 
    length = string_length(s);
    begin  = s;
    end    = s;

    if (*s == '-') {
        begin++;
    }
 
    for (c = 0; c < length - 1; c++)
        end++;
 
    for (c = 0; c < length/2; c++)
    {        
        temp   = *end;
        *end   = *begin;
        *begin = temp;
 
        begin++;
        end--;
   }
}

int string_length(char *pointer)
{
    int c = 0;
 
    while( *(pointer + c) != '\0' )
    c++;
 
    return c;
}