#include <stdio.h>

int isPunctuation(int num1);

int main()
{
    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);
    int num1 = ch;
    if (isPunctuation(ch)== 1)
    {
        printf("True");
    }
    else
        printf("False");
}

int isPunctuation(int num1)
{
    if (num1 >= 33 && num1<= 47)
        return 1;
    else if (num1 >= 58 && num1 <= 64)
        return 1;
    return 0;
}
