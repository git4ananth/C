#include <stdio.h>

int main()
{
    int a,b;
    int arr1[2][2] = {{1, 2}, {3, 4}};
    int arr2[2][2] = {{5, 6}, {7, 8}};
    int arr3[2][2];q

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            a= arr1[i][j] * arr2[j][i];
            b = arr1[j][i] * arr2[i][j];
        }
    }

    for (int i = 0; i<2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d", arr3[1][j]);
        }
    }
}