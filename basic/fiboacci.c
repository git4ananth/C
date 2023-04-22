#include <stdio.h>

void fib(int num);

int main()
{
    unsigned int n;
    printf("Number of terms of the fibonacci series? ");
    scanf("%u", &n);

    fib(n);
}

void fib(int num)
{
    unsigned int i;
    unsigned int t1 = 0, t2 = 1;
    unsigned int next_term = t1 + t2;
    printf("The Fibonacci Series is : ");
    printf("%u, %u, ", t1, t2);

    for (i = 3; i <= num; ++i)
    {
        printf("%u, ", next_term);
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }
}