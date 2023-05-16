#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* HEAD = NULL;

void enqueue(int data);
void dequeue();
void peek();
void traverse();
void isEmpty();
void isFull();

int main() {
    traverse(); // Empty queue
    enqueue(1000);
    enqueue(2000);
    traverse(); // Queue with 2000 -> 1000
    peek(); // Peek at top element (2000)
    dequeue();
    traverse(); // Queue with 1000
    isEmpty(); // False (queue not empty)
    return 0;
}

void enqueue(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (HEAD == NULL) {
        newNode->next = NULL;
        HEAD = newNode;
    } else {
        struct Node* temp = HEAD;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = NULL;
    }
}

void dequeue() {
    if (HEAD == NULL) {
        printf("UNDERFLOW!\n");
    } else {
        struct Node* temp = HEAD;
        HEAD = HEAD->next;
        free(temp);
    }
}

void peek() {
    if (HEAD == NULL) {
        printf("Queue is empty!\n");
    } else {
        printf("Top element: %d\n", HEAD->data);
    }
}

void traverse() {
    struct Node* temp = HEAD;
    printf("Queue : ");
    while (temp != NULL) {
        printf("%d-->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void isEmpty() {
    if (HEAD == NULL) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}

void isFull() {
    /* Assuming linked list implementation doesn't have fixed capacity */
    printf("False\n");
}
