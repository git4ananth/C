#include <stdio.h>
int main()
{
    float basic_salary, HRA, DA, PF, gross_salary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);
    HRA = 0.25 * basic_salary;
    DA = 0.15 * basic_salary;
    PF = 0.12 * basic_salary;

    gross_salary = basic_salary + HRA + DA - PF;

    printf("\nBasic Salary: %0.2f\n", basic_salary);
    printf("HRA : %0.2f\n", HRA);
    printf("DA: %0.2f\n", DA);
    printf("PF: %0.2f\n", PF);
    printf("Gross Salary: %0.2f\n", gross_salary);

    return 0;
}
