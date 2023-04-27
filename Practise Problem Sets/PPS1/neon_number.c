#include <stdio.h>

/* A neon number is a number where the sum of digits of square of the number 
is equal to the number. Write a c program to check whether 
given number is neon numbers or not. */

void neon(int num);

int main(){
    int num;
    scanf("%d", &num);

    neon(num);
}


void neon(int num){
    int temp = 0;
    int exp = num * num;
    int sum = 0;
    while (exp){
        temp = exp % 10;
        sum = sum + temp;
        exp = exp / 10;
    }
    if (num == sum){
        printf("Neon Number");
    }
    else{
        printf("Not a neon number");
    }
}
