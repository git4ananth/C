#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *HEAD, *TAIL = NULL;

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
    n1->prev = TAIL;
    HEAD = n1;

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
    n5->next = HEAD;
    n5->prev = n4;
    TAIL = n5;

    temp1 = HEAD;
    do
    {
        printf("%d\n", temp1->data);
        temp1 = temp1->next;

    } while (temp1 != HEAD);


}