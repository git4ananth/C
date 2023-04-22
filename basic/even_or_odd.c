#include <stdio.h>

// print if a number is odd or even 
int main(){
    int a;
    printf("Enter a number : \n");
    scanf("%d", &a);
    if (a % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}