// Using pointer, write a C program that reads a character string and a
// character as input and deletes all occurrence of this character in the string.
//  The program should display the corrected string with no holes.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char character;
    printf("Enter sentence : ");
    fgets(str, 50, stdin);
    printf("Enter character : ");
    character = getchar();

    char result[50];
    // int len = sizeof(str) / sizeof(char);
    int flag = 1;
    int ctr = 0;
    int k = 0;

    while (flag == 1)
    {
        char ch = *(str + ctr);
        // printf("%c\n", ch);

        if (ch != character)
        {
            result[k] = ch;
            k++;
        }

        if (ch == '\0')
        {
            flag = 0;
        }
        ctr++;
    }
    //printf("Counter : %d\n", ctr);

    if (strcmp(result, str) == 0)
    {
        printf("No Match");
    }
    else{
        printf("%s", result);
    }
}