#include <stdio.h>

/* Write a c-program to find the smallest possible two
digit sum of a 4 digit number. e.g 5592 is the input 25+59=84
is the smallest two digit sum possible. */

void arrayify(int num, int arr[]);
void insertionSort(int arr[], int n);
void print_array(int array[]);

int main()
{
    int num;
    printf("Enter a 4 digit number : ");
    scanf("%d", &num);
    int arr[4];

    if (num > 0)
    {
        arrayify(num, arr);
        insertionSort(arr, 4);
        print_array(arr);
        // printf("arr[0] is %d and arr[1] is %d", arr[0], arr[1]);
        // printf("arr[2] is %d and arr[3] is %d", arr[2], arr[3]);
        int smallest = (10 * arr[0]) + arr[1];
        int smallest2 = (10 * arr[2]) + arr[3];
        // printf("smallest = %d and largest = %d", smallest, smallest2);
        int result = smallest + smallest2;
        printf("%d", result);
    }
    else
    {
        printf("Invalid");
    }
}

void arrayify(int num, int arr[])
{
    int temp;
    for (int i = 0; i < 4; i++)
    {
        temp = num % 10;
        arr[i] = temp;
        num = num / 10;
    }
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void print_array(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
}