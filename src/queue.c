#include <stdio.h>
#include <stdlib.h>

// Define the structure for a queue node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define the structure for the queue
typedef struct {
    Node* front;
    Node* rear;
} Queue;

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize the queue
void initializeQueue(Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}

// Check if the queue is empty
int isEmpty(Queue* q) {
    return q->front == NULL;
}

// Add an element to the queue (enqueue)
void enqueue(Queue* q, int value) {
    Node* newNode = createNode(value);
    if (q->rear == NULL) {
        // If queue is empty, both front and rear point to the new node
        q->front = q->rear = newNode;
        return;
    }
    // Add the new node at the end of the queue and update the rear
    q->rear->next = newNode;
    q->rear = newNode;
}

// Remove an element from the queue (dequeue)
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        return -1;
    }
    Node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;
    
    // If the front becomes NULL, then the queue is empty, set rear to NULL as well
    if (q->front == NULL) {
        q->rear = NULL;
    }
    
    free(temp);
    return data;
}

// Get the front element of the queue without removing it
int peek(Queue* q) {
    if (isEmpty(q)) {
        return -1;
    }
    return q->front->data;
}

// Display the queue elements
void displayQueue(Queue* q) {
    if (isEmpty(q)) {
        return;
    }
    
    Node* temp = q->front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
