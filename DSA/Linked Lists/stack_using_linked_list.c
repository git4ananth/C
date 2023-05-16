#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* TOP = NULL;

void enqueue(int data);
void dequeue();
int peek();
void traverse();
bool isFull();
void isEmpty();

int main() {
    traverse(); // Empty queue
    enqueue(1000);
    enqueue(2000);
    traverse(); // Queue with 1000 -> 2000
    printf("%d\n", peek()); // Peek at top element (2000)
    isEmpty(); // False (queue not empty)

    return 0;
}

void enqueue(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (TOP == NULL) {
        newNode->next = NULL;
        TOP = newNode;
    } else {
        newNode->next = TOP;
        TOP = newNode;
    }
}

void dequeue() {
    if (TOP == NULL) {
        printf("UNDERFLOW!\n");
    } else {
        struct Node* temp = TOP;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

int peek() {
    if (TOP == NULL) {
        printf("Queue is empty!\n");
        exit(1);
    }
    return TOP->data;
}

void traverse() {
    struct Node* temp = TOP;
    if (TOP == NULL) {
        printf("No Element in Queue\n");
    } else {
        printf("START->");
        while (temp != NULL) {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

bool isFull() {
    /* Assuming linked list implementation doesn't have fixed capacity */
    return false;
}

void isEmpty() {
    if (TOP == NULL) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}
