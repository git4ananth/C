#include <stdio.h>

void insertion_sort(int arr[], int n);

void insertion_sort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[5] = {33, 67, 25, 75, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, size);

    printf("Printing the sorted array");
    for (int k = 0; k < size; k++)
    {
        printf("%d ", arr[k]);
    }
}