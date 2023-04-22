#include <stdio.h>

void sum();
void average();

int main()
{
    /* int values[5];
    
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d\n", &values[i]);
    }
    printf("Displaying the elements of array");

    for (int j = 0; j < 5; ++j)
    {
        printf("%d\n", values[j]);
    } */

    sum();
    average();
    return 0;
}

void sum()
{
    int values[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        sum = sum + values[i];
    }
    printf("The sum is : %d\n", sum);
}

void average()
{
    int values[5] = {1, 2, 3, 4, 5};
    int length = sizeof(values) / sizeof(int);
    int temp = 0;
    int average;

    for (int i = 0; i < 5; ++i)
    {
        temp = temp + values[i];
    }
    average = temp / length;
    printf("The average : %d\n", average);
}