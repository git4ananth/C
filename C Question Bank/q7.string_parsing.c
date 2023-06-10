#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[25];
    char marital_status;

    printf("Enter you name : ");
    scanf("%s", name);
    printf("Enter you marital status (y/n): ");
    scanf(" %c", &marital_status);
    char salutation1[5] = "Mrs.";
    char salutation2[5] = "Miss.";
    switch (marital_status)
    {
    case 'y':

        printf("Good Morning %s%s!", salutation1, name);
        break;

    case 'n':

        printf("Good Morning %s%s!", salutation2, name);
        break;

    default:
        printf("Enter a valid response\n");
        exit(1);
        break;
    }
}