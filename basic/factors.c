#include <stdio.h>

// print the factors of a number
int main(){
    int num;
    printf("Enter a number to ouput its factors : ");
    scanf("%ud\n", &num);

    for (int i = 0; i <= num; i++)
    {
        if(num % i == 0){
            printf("%d\n", i);
        }
    }
}