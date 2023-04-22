#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Enter a number : \n");
    scanf("%d", &a);
    printf("Enter another number : \n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is greater than %d", a,b);
    }
    else{
        printf("%d is greater than %d", b,a);
    }
    return 0;

}
