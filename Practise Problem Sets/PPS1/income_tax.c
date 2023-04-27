// Calculate tax given the following conditions:
// If income is less than or equal to 1,50,000 then no tax
// If taxable income is 1,50,001 – 3,00,000 then charge 10% tax
// for the remaining slab If taxable income is 3,00,001 – 5,00,000
// then charge 20% tax for the remaining slab
// If taxable income is above 5,00,001 then charge 30% tax for the remaining slab

#include <stdio.h>

void income_tax(int income);

int main()
{
    int income;
    printf("Enter your income : ");
    scanf("%d", &income);
    income_tax(income);
}

void income_tax(int income)
{
    int tax;
    if (income <= 150000)
    {
        tax = 0;
    }
    else if (income > 150000 && income <= 300000)
    {
        tax = (income - 150000) * 0.1;
    }
    else if (income > 300000 && income <= 500000)
    {
        tax = (income - 300000) * 0.2 + 15000;
    }
    else if (income > 500000)
    {
        tax = (income - 500000) * 0.3 + 40000 + 15000;
    }
    printf("%d", tax);
}
