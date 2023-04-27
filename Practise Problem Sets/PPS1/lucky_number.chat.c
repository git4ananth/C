#include <stdio.h>

int main() {
    int dob, sum1 = 0, sum2 = 0;

    printf("Enter your date of birth (8 digits): ");
    scanf("%d", &dob);

    // Check if DOB is 8 digits
    if (dob < 10000000 || dob > 99999999) {
        printf("Invalid Inpu\n");
        return 0;
    }

    // Calculate the sum of digits in odd and even positions
    int dupdob = dob;
    for (int i = 1; i <= 8; i++) {
        int digit = dupdob % 10;
        dupdob /= 10;

        if (i % 2 == 0) {
            sum2 += digit;
        } else {
            sum1 += digit;
        }
    }

    // Check if DOB is lucky
    int result = (sum1 * 3) + sum2;
    if (result % 10 == 0) {
        printf("%d\nLucky Number\n", dob);
    } else {
        printf("%d\nNot a Lucky Number\n", dob);
    }

    return 0;
}