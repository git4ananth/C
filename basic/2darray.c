#include <stdio.h>

int main()
{
    float a[2][2], b[2][2], result[2][2];

    // taking user input
    printf("Enter elements of 1st martix\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("Enter a%d%d :", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    // taking input using nested for loop
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("Enter b%d%d :", i + i, j + 1);
            scanf("%f", &b[i][j]);
        }
    }

    for (int i =0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    //displaying the sum
    printf("\nSum of matrix :\n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            printf("%.1f\t", result[i][j]);
            if(j == 1){
                printf("\n");
            }
        }
    }
    return 0;
}