#include <stdio.h>

int stack[100], choice = 0, top = -1;
int i, j, n;

void push();
void pop();
void show();

int main()
{
    printf("Enter the number of elements in the stack :");
    scanf("%d", &n);
    printf("-----Stack Operatioons using Array-----");
    printf("\n-----------------------------------\n");

    while (choice != 4)
    {
        printf("Choose an option\n");
        printf("\n1. Push\n2. Pop\n3. Show\n4. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;

        case 4:
            printf("Exiting...");
            break;

        default:
            printf("PLease enter valid choice");
            break;
        }
    }
}

void push()
{
    int val;
    if (top == n)
    {
        printf("\nOverflow\n");
    }
    else
    {
        printf("Enter the value?");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        top = top - 1;
    }
}

void show()
{
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    if (top == -1)
    {
        printf("Stack is Empty");
    }
}
