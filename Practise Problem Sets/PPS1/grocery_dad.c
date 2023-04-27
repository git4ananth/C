

//Write a program to create two grocery storage with minimum five items each. 
//Merge the storage to new space storage in such a way that first storage 
//may be copied as it is and reverse only the second array and merge it. 
//Perform sorting in the new array and print it. Implement the same by passing
// appropriate arrays to functions.

//you dont need to return the reversed array,  array is passed by reference
void reverse ( int arr [] , int n )  
{  
  int i , tmp ;  
  for( i=0 ; i < n/2 ; i ++ )  
  {  
    tmp = arr[i];
    arr[i] = arr[n-1-i] ;  
    arr[n-1-i] = tmp;  
  }  
}  

int* merge(int a1[], int a2[]){
    //assuming that the size of both a1 and a2 are same
    int len1 = sizeof(a1)/sizeof(a1[0]);
    int len2 = sizeof(a2)/sizeof(a2[0]);
    int result_array_size = len1 + len2;
    int result[result_array_size];
    int i = 0;

    for (i=0; i < len1; i++){
        result[i] = a1[i];
    }
    for (int j=0; j < len2; j++, i++){
        result[i] = a2[j];
    }
    return result;
}

void sort(int a[],int n){
    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j]) 
            {
                a = a[i];
                a[i] = a[j];
                a[j] = a;
            }
        }
    }
}

int main(){
    int *result;
    int list1[] = {4,5,6,9,10};
    int list2[] = {100,2,32,1,5};
    reverse(list2,5);
    result = merge(list1, list2);
    sort(result, 10);
}