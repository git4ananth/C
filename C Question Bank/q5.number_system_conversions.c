#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Decimal value is: %d\n", num);
    printf("Octal number is: %o\n", num);
    printf("Hexadecimal number is: %X\n", num);
}