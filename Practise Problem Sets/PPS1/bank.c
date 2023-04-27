#include <stdio.h>

void menu();
void withdrawal();
void deposit();
void available_balance();

int balance_amt = 30000;

int main()
{
    int choice;
    while (choice != 4)
    {
        menu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            withdrawal();
            break;

        case 2:
            deposit();
            break;

        case 3:
            available_balance();
            break;

        case 4:
            printf("Exiting...");
            break;

        default:
            printf("\nInvalid\n");
        }
    }
}

void menu()
{
    printf("\nEnter an option : \n");
    printf("1. Withdrawal\n");
    printf("2. Deposit\n");
    printf("3. Display Balance\n");
    printf("4. Exit\n");
}

void withdrawal()
{
    int m;
    printf("Enter the value to withdraw : ");
    scanf("%d", &m);
    if (m > balance_amt)
    {
        printf("Invalid Amount Request, check balance.\n");
    }
    else
    {
        printf("Entered value : %d\n", m);
        balance_amt = balance_amt - m;
        printf("Balance : %d\n", balance_amt);
    }
}

void deposit()
{
    int m;
    printf("Enter the value to deposit : ");
    scanf("%d", &m);
    printf("Entered value : %d\n", m);
    balance_amt = balance_amt + m;
    printf("Balance : %d\n", balance_amt);
}

void available_balance()
{
    printf("Available Balance : %d\n", balance_amt);
}