#include <stdio.h>
#include <stdbool.h>

void linear_search(int num);

int main()
{
    int num;
    printf("Enter a number to search : ");
    scanf("%d", &num);
    linear_search(num);
}

void linear_search(int num)
{
    int arr[10] = {23, 76, 45, 98, 77, 56, 34, 22, 45, 70};
    bool flag = false;
    for (int i = 0; i < 10; i++)
    {
        if (num == arr[i])
        {
            printf("Element found at index %d\n", i);
            flag = true;
            break;
        }
    }
    if (flag == false){
        printf("Element not found\n");
    }
}