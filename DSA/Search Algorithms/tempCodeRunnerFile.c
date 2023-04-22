igh);

int main()
{
    int num;
    printf("Enter a number to search : ");
    scanf("%d", &num);
    int arr[10] = {19, 45, 23, 76, 88, 2, 34, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = binary_search(arr, 56, 0, size-1);
    if(res == -1){
        printf("\nElement not found");
    }
    else{
        printf("\nElement found at index : %d", res);
    }
}

int binary_search(int arr[], int num, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num){
            return mid;
        }
        if (arr[mid] > num){
            return binary_search(arr, num, low, mid - 1);
        }
        else{
            return binary_search(arr, num, mid + 1, high);
        }
    }
}
