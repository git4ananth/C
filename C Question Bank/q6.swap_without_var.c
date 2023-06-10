#include <stdio.h>

int main() {
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    
    printf("\nBefore swapping, a = %d and b = %d", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("\nAfter swapping, a = %d and b = %d", a, b);
    return 0;
}
