#include <stdio.h>

void factorial(int num);

int main()
{
    int a;
    printf("Enter a number to output factorial: ");
    scanf("%d", &a);
    factorial(a);
}

void factorial(int num)
{
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        if (i == 1)
        {
            printf("The factorial of the given number: %d", fact);
        }
        else
        {
            fact = fact * i;
        }
    }
}
