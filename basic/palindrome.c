#include <stdio.h>

void palindrome(char string[]);

int main()
{
    char word[25];
    int len = 0;
    // printf("Enter a string : ");
    // gets(word);
    word[25] = {'m', 'a', 'd', 'a', 'm'};
    // palindrome(word);
    for (int i = 0; word[i] != 0; i++)
    {
        len += i;
    }
    printf("length is %d", len);
}

/* void palindrome(char string[])
{
    int ctrl = 1;

    for (int i = 1; i <= len; i++)
    {
        if (string[i] == string[len - i])
        {
            printf("Palindrome");
        }
        else
        {
            printf("not Palindrome");
        }
    }
    if (ctrl == 1)
    {\
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
} */