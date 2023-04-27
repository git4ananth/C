#include <stdio.h>

int main() {
    int n, digit1, digit2, digit3, digit4, sum;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    digit1 = n / 1000;
    digit2 = (n / 100) % 10;
    digit3 = (n / 10) % 10;
    digit4 = n % 10;
    // Calculate all possible two-digit sums
    sum = digit1 + digit2 + digit3 + digit4;
    int sum12 = digit1 + digit2 + digit3;
    int sum23 = digit2 + digit3 + digit4;
    int sum13 = digit1 + digit3 + digit4;
    // Find the smallest two-digit sum
    int smallest = sum;
    if (sum12 < smallest) {
        smallest = sum12;
    }
    if (sum23 < smallest) {
        smallest = sum23;
    }
    if (sum13 < smallest) {
        smallest = sum13;
    }
    printf("The smallest possible two-digit sum of %d is %d\n", n, smallest);
    return 0;
}