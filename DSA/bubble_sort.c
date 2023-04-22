#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int arr[], int n);
void swap(int *a, int *b);

void swap(int *a, int *b){
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



int main()
{
    int arr[5] = {44, 24, 86, 45, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    printf("The sorted array is : ");
    for (int k = 0; k < size; k++)
    {
        printf("%d ", arr[k]);
    }
}
