#include <stdio.h>

int main()
{
    int num1, num2, rem, x, y;
    printf("Enter Number1: ");
    scanf("%d", &num1);
    printf("Enter Number2: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        x = num1;
        y = num2;
    }
    else
    {
        x = num2;
        y = num1;
    }
    rem = x % y;
    while (rem != 0)
    {
        x = y;
        y = rem;
        rem = x % y;
    }

    printf("Greatest Common Divisor is: %d\n", y);
}