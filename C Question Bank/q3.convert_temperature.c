#include <stdio.h>
int main()
{
    float temperature, celsius, fahrenheit;
    int choice;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    printf("Select Conversion type: \n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        celsius = (temperature - 32) * 5 / 9;
        printf("\n%.2f Fahrenheit is equal to %.2f Celsius.", temperature, celsius);
        break;

    case 2:
        fahrenheit = (temperature * 9 / 5) + 32;
        printf("\n%.2f Celsius is equal to %.2f Fahrenheit.", temperature, fahrenheit);
        break;

    default:
        printf("Invalid");
    }
}
