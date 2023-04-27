#include <stdio.h>

void earthquake(int num);

int main()
{
    int num;
    scanf("%d", &num);
    if (num > 0)
    {
        earthquake(num);
    }
    else if (num == 0)
    {
        printf("No earthquake detected");
    }
    else
    {
        printf("Invalid Input");
    }
}

void earthquake(int num)
{
    int low = 0, med = 0, high = 0;
    float magnitude = 0;
    for (int i = 0; i < num; i++)
    {
        scanf("%f", &magnitude);
        printf("%f", magnitude);
        if (magnitude <= 5.4)
        {
            low += 1;
        }
        else if (magnitude > 5.4 && magnitude <= 7.0)
        {
            med += 1;
        }
        else if (magnitude > 7.0)
        {
            high += 1;
        }
    }
    printf("%d %d %d", low, med, high);
}