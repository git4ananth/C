#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head, *tail = NULL;

int data = 0;
int count = 0;
int after_which = 0;

void menu();
void insert_at_beg(int data);
void insert_at_end(int data);
void insert_after_data(int data, int after_which);
void delete_from_beg();
void delete_after_which(int after_which);
void delete_from_end();
void traverse();
void search(int data);

int main()
{
    menu();
    int choice = 0;
    while (choice != 9)
    {
        menu();
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &data);
            insert_at_beg(data);
            break;
        case 2:
            printf("Enter data : ");
            scanf("%d", &data);
            printf("Insert after which data? ");
            scanf("%d", &after_which);
            insert_after_data(data, after_which);
            break;
        case 3:
            printf("Enter data : ");
            scanf("%d", &data);
            insert_at_end(data);
            break;
        case 4:
            delete_from_beg();
            break;
        case 5:
            printf("Delete after which data? ");
            scanf("%d", &after_which);
            delete_after_which(after_which);
            break;
        case 6:
            delete_from_end();
            break;
        case 7:
            traverse();
            break;
        case 8:
            printf("Enter data : ");
            scanf("%d", &data);
            search(data);
            break;
        case 9:
            printf("Exiting...");
            exit(1);
            break;

        default:
            printf("Enter a valid choice!\n");
        }
    }
}

void menu()
{
    printf("Choose an option : \n");
    printf("1. Create Node at beginning\n");
    printf("2. Create Node after certain data\n");
    printf("3. Create Node at end\n");
    printf("4. Delete Node at beginning\n");
    printf("5. Delete Node after certain data\n");
    printf("6. Delete Node at end\n");
    printf("7. Display the full list\n");
    printf("8. Search\n");
    printf("9. Exit\n");
}

void insert_at_beg(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    count++;
}

void insert_after_data(int data, int after_which_data)
{
    if (count > 0)
    {
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = data;
        struct Node *temp, *temp1;
        while (temp->next != NULL)
        {
            if (temp->data == after_which_data)
            {
                temp1 = temp;
                break;
            }
        }
        new_node->next = temp1->next;
        temp1->next = new_node;
        count++;
    }
    else
    {
        printf("Underflow!\n");
    }
}

void insert_at_end(int data)
{
    if (count > 0)
    {
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = data;

        struct Node *temp;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = NULL;
        count++;
    }
    else
    {
        printf("Underflow!\n");
    }
}

void delete_from_beg()
{
    if (count > 1)
    {
        struct Node *temp;
        temp = head;
        temp->next = head;
        free(temp);
        count--;
    }
    else
    {
        printf("Underflow!\n");
    }
}

void delete_after_which(int after_which)
{
    struct Node *temp_head, *temp, *temp1;
    temp_head = head;
    if (temp_head == NULL)
    {
        printf("Empty list\n");
    }
    else
    {
        while (temp->next != NULL)
        {
            if (temp->data == after_which)
            {
                temp1 = temp;
                temp = temp->next;
                break;
            }
        }
        temp1->next = temp->next;
        printf("%d", temp);
        free(temp);
        count--;
    }
}

void delete_from_end()
{
    struct Node *temp, *temp2;
    temp = head;
    if (temp == NULL)
    {
        printf("Linked List is Empty!\n");
    }
    else if (temp->next == NULL)
    {
        head = NULL;
        printf("%d deleted\n", head);
        free(head);
        count--;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        printf("%d deleted\n", temp);
        free(temp);
        count--;
    }
}

void traverse()
{
    struct Node *temp;
    temp = head;
    printf("Linked list is : ");
    printf("%d-->", temp->data);
    while (temp->next != NULL)
    {
        temp = temp->next;
        printf("%d-->", temp->data);
    }
    printf("NULL\n");
}

void search(int data)
{
    struct Node *ptr, *ptr2;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        printf("Item to search : ");
        scanf("%d", &item);
        printf("\n");
        while (ptr->next != NULL)
        {
            if (ptr->data == item)
            {
                printf("Item found at location %d\n", i + 1);
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("Item not found\n");
        }
    }
}
