#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *TOP = NULL;

void enqueue(int data);
void dequeue();
int peek();
void traverse();
bool isFull();
bool isEmpty();

void enqueue(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    if (TOP == NULL)
    {
        newNode->next = NULL;
        TOP = newNode;
    }
    else
    {
        TOP->next = newNode;
        newNode->next = NULL;
        TOP = newNode;
    }
}

void dequeue()
{
    if (TOP == NULL)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        struct Node *temp;
        temp = TOP;
        TOP = TOP - 1;
        free(temp);
    }
}

int peek()
{
    return TOP;
}

void traverse()
{
    struct Node *temp;
    temp = TOP;
    if (isEmpty)
    {
        printf("Stack Empty");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}
