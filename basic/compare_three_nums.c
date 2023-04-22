#include <stdio.h>

// comapre three numbers and print the largest
int main()
{
    int a, b, c;

    printf("Enter a number : \n");
    scanf("%d", &a);
    printf("Enter another number : \n");
    scanf("%d", &b);
    printf("Enter a third number : \n");
    scanf("%d", &c);

    int compare_array[] = {a, b, c};
    int largest = compare_array[0];
    for (int i = 0; i < 3; i++)
    {
        if (compare_array[i] > largest)
        {
            largest = compare_array[i];
        }
    }

    printf("The largest number is : %d", largest);
    return 0;
}