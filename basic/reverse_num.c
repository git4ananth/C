#include <stdio.h>

// reverse a number using while loop
int main()
{
    int num, rem;
    int rev_num;
    scanf("%d", &num);
    rev_num = 0;
    while (num)
    {
        rem = num % 10;
        rev_num = (rev_num * 10) + rem;
        num = num / 10;
    }
    printf("%d", rev_num);
}

/* int rev(){
    int n;
    while (n > 0)
    {
        printf("%d", n % 10);
        n /= 10;
    }
} */