#include <stdio.h>

void menu();
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

void menu()
{
    printf("Choose an operator :");
    printf("1. Add");
    printf("2. Subtract");
    printf("3. Multiply");
    printf("4. Divide");
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}

int multiply(int num1, int num2)
{
    return num1 * num2;
}

int divide(int num1, int num2)
{
    return num1 / num2;
}

int main()
{
    int op, a, b, res;
    res = 0;
    printf("Enter 2 numbers : ");
    scanf("%d,%d", &a, &b);
    printf("The numbers are %d,%d", a, b);

    menu();

    scanf("%d", &op);

    switch (op)
    {

    case 1:
        res = add(a, b);

    case 2:
        res = subtract(a, b);

    case 3:
        res = multiply(a, b);

    case 4:
        res = divide(a, b);
    }

    printf("Result is : %d", res);
}
