#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d", &b);
    sum = a + b;
    printf("%d", sum);

    return 0;
}