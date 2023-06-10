#include <stdio.h>
#include <stdlib.h>

int isUppercase(char ch);

int main(){
    char ch;
    printf("Enter a character : ");
    scanf(" %c", &ch);
    if (isUppercase(ch))
        printf("True");
    else
        printf("False");
}

int isUppercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    return 0;
}
