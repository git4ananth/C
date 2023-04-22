#include <stdio.h>

int main(){
    int largest;
    char hello[] = {5,78,34};
    int len = sizeof(hello) / sizeof(char);

    largest = hello[0];
    for (int i = 0; i < len; i++){
        if (hello[i]>largest){
            largest = hello[i];
        }

    }
    printf("The largest number is : %d", largest);


}