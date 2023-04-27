#include <stdio.h>

void lucky(int num);

int main()
{
    int num;
    printf("Enter a 8-digit number : ");
    scanf("%d", &num);
    lucky(num);
}

void lucky(int num)
{
    int sum_odd = 0;
    for (int i = 1; i < 9; i++){
        if (i%2 != 0){
            int temp = 0;
        temp = num % 10;
            

        }
    }
}
