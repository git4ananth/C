#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    
    printf("printing array elements...\n");
    for (int i = 0; i <5; i++){
        printf("%d\n", *(p + i));
    }
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum += *(p + i);
    }
    printf("Sum is : %d", sum);
}