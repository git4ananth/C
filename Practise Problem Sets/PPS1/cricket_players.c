#include <stdio.h>
#include <stdlib.h> // for atoi() function

int main() {
    int n = 0, i = 0, num = 0;
    int even[100], odd[100];
    int even_count = 0, odd_count = 0;

   

    // taking continuous input separated by spaces
    while (scanf("%d", &num) == 1) {
        if (num < 0) {
            printf("Invalid input, all input must be positive numbers\n");
            return 0;
        }
        else {
            n++;
            if (num % 2 == 0) {
                even[even_count] = num;
                even_count++;
            }
            else {
                odd[odd_count] = num;
                odd_count++;
            }
        }
    }

    // sorting even integers in ascending order
    for (i = 0; i < even_count; i++) {
        for (int j = i + 1; j < even_count; j++) {
            if (even[i] > even[j]) {
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }

    // sorting odd integers in ascending order
    for (i = 0; i < odd_count; i++) {
        for (int j = i + 1; j < odd_count; j++) {
            if (odd[i] > odd[j]) {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
    }
    // printing odd integers in ascending order

    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    // printing even integers in ascending order
    
    for (i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    return 0;
}