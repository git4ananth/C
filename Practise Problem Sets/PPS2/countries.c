#include <stdio.h>

struct Country
{
    char country_name[15];
};

struct Country countries[50];

void reorder(int num, struct Country countries[]);

int main()
{
    // int num;
    // printf("Enter the number of countries : ");
    //scanf("%d", &num);
    char country[15];
    for (int i = 0; i < num; i++)
    {
        printf("Enter the name of country %d : ", i + 1);
        scanf("%s", country);
        printf("Entered country name is : %s", country);
        countries->country_name[i] = *country;
    }
    reorder(num, countries);
}

void reorder(int num, struct Country countries[])
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {

        }
    }
}