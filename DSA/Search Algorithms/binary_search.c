#include <stdio.h>
#include <stdbool.h>

int binary_search(int arr[], int num, int low, int high);
void bubble_sort(int arr[], int n);
void swap(int *a, int *b);
void print_array(int arr[]);

int main()
{
    int num;
    printf("Enter a number to search : ");
    scanf("%d", &num);

    int arr[10] = {19, 45, 23, 76, 88, 2, 34, 98, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, 10);
    print_array(arr);
    int res = binary_search(arr, num, 0, size - 1);
    if (res == -1)
    {
        printf("\nElement not found");
    }
    else
    {
        printf("\nElement found at index : %d", res);
    }
}

int binary_search(int arr[], int num, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        if (arr[mid] > num)
        {
            return binary_search(arr, num, low, mid - 1);
        }
        if (arr[mid] < num)
        {
            return binary_search(arr, num, mid + 1, high);
        }
    }
    return -1;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void print_array(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
