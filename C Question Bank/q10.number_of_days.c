#include <stdio.h>

int main()
{
    int days;
    printf("Enter the number of Days : ");
    scanf("%d", &days);
    float months = days / 30 + days % 30;
    float years = days / 365 + days % 365;
    printf("Time in Months : %.2f", months);
    printf("Time in Years : %.2f", years);
}