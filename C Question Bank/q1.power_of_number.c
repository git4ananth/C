#include <stdio.h>
#include <math.h>

int main()
{

    int num1, num2, cube, cube_with_pow;

    printf("Enter any integer number: ");
    scanf("%d", &num1);
    cube = (num1 * num1 * num1);
    printf("Cube of the num is : %d\n", cube);

    printf("Enter any integer number: ");
    scanf("%d", &num2);
    cube_with_pow = pow(num2, 3);
    printf("Cube of the num is : %d\n", cube_with_pow);

}
