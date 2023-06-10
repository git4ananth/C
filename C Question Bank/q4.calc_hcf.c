#include <stdio.h>

int main()
{
    int num1, num2, temp, hcf;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int a = num1;
    int b = num2;
    if (a == 0 || b == 0)
    {
        hcf = 0;
    }
    else
    {
        while (b != 0)
        {
            temp = a % b;
            a = b;
            b = temp;
        }
        hcf = a;
    }

    printf("HCF (Highest Common Factor) of %d and %d is %d.", num1, num2, hcf);

    return 0;
}
