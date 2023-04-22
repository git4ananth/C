#include <stdio.h>

int main()
{
    int a, b;
    int operator;
    printf("Enter a number : \n");
    scanf("%d", &a);
    printf("Enter another number : \n");
    scanf("%d", &b);
    printf("Enter a num (1=Add | 2=Subtract | 3=Multiply | 4=Divide): \n");
    scanf("%d", &operator);

    switch (operator)
    {
    case 1: //add
        printf("%d", a + b);

    case 2: //subtract
        printf("%d", a - b);

    case 3: // multiply
        printf("%d", a * b);

    case 4: //divide
        printf("%d", a / b);
    }
    return 0;
}