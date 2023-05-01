#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *HEAD, *TAIL = NULL;
int data, afterwhich;
void menu();
void insert_at_beg(int data);
void insert_in_middle(int afterwhich, int data);
void insert_at_end(int data);
void delete_from_beg();
void delete_from_middle(int afterwhich);
void delete_from_end();
void traverse();

int main()
{
    int option;
    while (option != 4)
    {
        menu();
        printf("Enter your option : ");
        scanf("%d", &option);
        printf("\n");

        switch (option)
        {
        case 1:
            printf("Enter Data : ");
            scanf("%d", &data);
            printf("\n");
            insert_at_beg(data);

        case 2:
            printf("Enter Data : ");
            scanf("%d", &data);
            printf("\n");
            printf("Enter afterwhich node data do you want to insert : ");
            scanf("%d", &afterwhich);
            printf("\n");
            insert_in_middle(afterwhich, data);

        case 3:
            printf("Enter Data : ");
            scanf("%d", &data);
            printf("\n");
            insert_at_end(data);

        case 4:
            delete_from_beg();

        case 5:
            printf("Enter afterwhich node data do you want to delete : ");
            scanf("%d", &afterwhich);
            printf("\n");
            delete_from_middle(afterwhich);

        case 6:
            delete_from_end();

        case 7:
            traverse();

        case 8:
            printf("Exiting.. ");
            exit(1);
        }
    }
}

void menu()
{
    printf("Choose an option\n");
    printf("1. Insert at the Beginning\n");
    printf("2. Insert in the Middle\n");
    printf("3. Insert at the End\n");
    printf("4. Delete from the Beginning\n");
    printf("5. Delete from the Middle\n");
    printf("6. Delete from the End\n");
    printf("7. Display the whole circular linked list\n");
    printf("8. Exit\n");
}

void insert_at_beg(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    // linked list is empty
    // this is the first node to be created
    if (HEAD == NULL && TAIL == NULL)
    {
        HEAD = newNode;
        newNode->next = HEAD;
        newNode->prev = HEAD;
        TAIL = newNode;
    }
    // there is a linked list with finite number of nodes
    // newNode to be inserted at the start
    else if (HEAD != NULL && TAIL != NULL)
    {
        newNode->next = HEAD;
        HEAD->prev = newNode;
        HEAD = newNode;
        newNode->prev = TAIL;
        TAIL->next = newNode;
    }
}

void insert_in_middle(int afterwhich, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp, *temp2;
    temp = HEAD;
    newNode->data = data;

    do
    {
        if (temp->data == afterwhich)
        {
            temp2 = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
            newNode->next = temp2;
            temp2->prev = newNode;
            break;
        }
    } while (temp->next != HEAD);
}

void insert_at_end(int data)
{
    if (HEAD != NULL && TAIL != NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        struct Node *temp = TAIL;
        TAIL->next = newNode;
        newNode->prev = TAIL;
        newNode->next = HEAD;
        HEAD->prev = newNode;
        TAIL = newNode;
    }
    else
    {
        insert_at_beg(data);
    }
}

void delete_from_beg()
{
    struct Node *temp, *temp2;
    temp = HEAD;
    temp2 = HEAD->next;
    HEAD = temp2;
    temp2->prev = TAIL;
    TAIL->next = temp2;
    printf("Deleted : %d\n", temp->data);
    free(temp);
}

void delete_from_middle(int afterwhich)
{
    struct Node *temp, *temp2, *x;
    temp = HEAD;
    do
    {
        if (temp->data == afterwhich)
        {
            x = temp->next;
            temp2 = temp->next->next;
            temp->next = temp2;
            temp2->prev = temp;
            printf("Deleted : %d\n", x->data);
            free(x);
            break;
        }
    } while (temp->next != HEAD);
}

void delete_from_end()
{
    struct Node *temp, *temp2, *x;
    temp = HEAD;
    do
    {
        temp2 = temp->next;
        if (temp2->next == HEAD)
        {
            x = temp->next;
            temp->next = HEAD;
            HEAD->prev = temp;
            TAIL = temp;
            printf("Deleted : %d\n", x->data);
            free(x);
            break;
        }
    } while (temp->next != HEAD);
}

void traverse()
{
    struct Node *temp;
    temp = HEAD;
    printf("Linked List : ");
    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != HEAD);
    printf("%d\n", HEAD->data);
}
