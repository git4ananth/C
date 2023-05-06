#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head, *tail = NULL;

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
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n5 = (struct Node *)malloc(sizeof(struct Node));

    struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp2 = (struct Node *)malloc(sizeof(struct Node));

    n1->data = 10;
    n1->next = n2;
    n1->prev = NULL;
    head = n1;

    n2->data = 20;
    n2->next = n3;
    n2->prev = n1;

    n3->data = 30;
    n3->next = n4;
    n3->prev = n2;

    n4->data = 40;
    n4->next = n5;
    n4->prev = n3;

    n5->data = 50;
    n5->next = NULL;
    n5->prev = n4;
    tail = n5;

    temp1 = head;
    // forward traversal;
    while (temp1 != NULL)
    {
        printf("%d\n", temp1->data);
        temp1 = temp1->next;
    }

    printf("\n");

    temp2 = tail;
    while (temp2 != NULL)
    {
        printf("%d\n", temp2->data);
        temp2 = temp2->prev;
    }
}

