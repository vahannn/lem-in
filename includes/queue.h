#ifndef QUEUE_H
#define QUEUE_H

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

// Function prototypes
void initializeQueue(Queue* q);        // Initialize the queue
int isEmpty(Queue* q);                 // Check if the queue is empty
void enqueue(Queue* q, int value);     // Add an element to the queue
int dequeue(Queue* q);                 // Remove an element from the queue
int peek(Queue* q);                    // Get the front element of the queue without removing it
void displayQueue(Queue* q);           // Display the queue elements

#endif // QUEUE_H
