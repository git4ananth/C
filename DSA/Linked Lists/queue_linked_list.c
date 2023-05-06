#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *HEAD = NULL;
struct Node queue;

int count = 0;

void enqueue();
void dequeue();
void peek();
void traverse();
void isEmpty();
void isFull();

void enqueue(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    if (HEAD == NULL)
    {
        newNode->next = NULL;
        HEAD = newNode;
    }
    else
    {
        newNode->next = HEAD;
        HEAD = newNode;
    }
}

void dequeue()
{
    struct Node *t1, *t2;
    t1 = HEAD;
    while (t1->next != NULL)
    {
        t2 = t1->next;
        t1->next = NULL;
        free(t2);
    }
}

void traverse()
{
    struct Node *temp;
    temp = HEAD;
    printf("Queue : ");
    printf("%d-->", temp->data);
    while (temp->next != NULL)
    {
        temp = temp->next;
        printf("%d-->", temp->data);
    }
    printf("NULL\n");
}


// left - inside; right - outside
// NULL->10->NULL;
// enqueue(20);
// NULL->20->10->NULL;
// peak = 20;
// dequeue();
// NULL->20->NULL;
// |counter| 10 <- 20 <- 30 <- 40 <- NULL;
// NULL <- 40 <- 30 <- 20 <- 10 ||COUNTER|| 