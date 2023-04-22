#include <stdio.h>

int main(){
    int lower;
    int upper;
    printf("Enter the lower number: ");
    scanf("%d\n", &lower);
    printf("Enter another number : ");
    scanf("%d\n", &upper);

    for (int num; num >= lower; num <= upper){
       for (int i = 2; i < upper; i++){
        if(num % i != 0){
            printf("%d\n", i);
        }
    }
    
    }
}