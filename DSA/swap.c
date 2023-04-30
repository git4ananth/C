#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int a = 10;
    int b = 6;

    printf("%d\n", a);
    printf("%d\n", b);
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}

void swap(int *a, int *b){
    printf("a - %d, b - %d\n", *a, *b);
    *b = *b + *a; // 16
    *a = *b - *a; //16 -10 = 6 corrcet
    *b = *b - *a; // 16-6 = 10;
}

