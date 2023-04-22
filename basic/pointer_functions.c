#include <stdio.h>

void fun(int *, int *);

int main()
{
    int a = 5;
    int b = 3;
    printf("%d, %d\n", a, b);
    fun(&a, &b);
    printf("%d, %d\n", a, b);
}

void fun(int *a, int *b){
    *a = 6;
    *b = 8;
    printf("%d, %d\n", *a, *b);
    printf("%p, %p\n", &a, &b);
}
