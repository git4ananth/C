#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;

void menu();
void insert_at_beg(int data);
void insert_at_end(int data);
void insert_in_middle(int data);
void delete_from_beg();
void delete_from_middle();
void delete_from_end();
void traverse();
void search();

int main()
{
    menu();
    int choice;
    printf("Enter your choice : ");
    scanf("%d", &choice);
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            insert_at_beg();
            break;
        case 2:
            insert_at_end();
            break;
        case 3:
            insert_in_middle;
            break;
        case 4:
            delete_from_beg();
            break;
        case 5:
            delete_from_middle();
            break;
        case 6:
            delete_from_end();
            break;
        case 7:
            traverse();
            break;
        case 8:
            printf("Exiting...");
            exit(1);
        }
    }
}

void menu()
{
    printf("Choose an option : \n");
    printf("1. Create Node at beginning\n");
    printf("2. Create Node at middle\n");
    printf("3. Create Node at end\n");
    printf("4. Delete Node at beginning\n");
    printf("5. Delete Node at middle\n");
    printf("6. Delete Node at end\n");
    printf("7. Display the full list\n");
    printf("8. Exit\n");
}

void insert_at_beg(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

