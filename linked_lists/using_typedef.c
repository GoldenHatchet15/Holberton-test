#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;               // Data part of the node
    struct node *next;      // Pointer to the next node
} Node;

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node)); // Allocate memory
    if (newNode == NULL) { // Check if malloc failed
        printf("Memory allocation failed!\n");
        exit(1); // Exit the program if memory allocation fails
    }
    newNode->data = data; // Store the value in the node
    newNode->next = NULL; // Initialize the pointer to NULL
    return newNode; // Return the address of the new node
}

int main() {
    Node *head = NULL, *temp = NULL; // Start with an empty list
    int choice = 1, data;

    while (choice) {
        printf("Enter Data: ");
        scanf("%d", &data); // Read the user's input

        Node *newNode = createNode(data); // Create a new node
        if (head == NULL) { // If the list is empty
            head = temp = newNode; // The new node becomes the first node
        } else { // If the list already has nodes
            temp->next = newNode; // Attach the new node to the end
            temp = newNode;       // Move temp to point to the new last node
        }

        printf("Do you want to continue? (1 for Yes / 0 for No): ");
        scanf("%d", &choice); // Ask the user if they want to continue
    }

    printf("Linked List: ");
    temp = head; // Start from the head of the list
    while (temp != NULL) { // Traverse until the end
        printf("%d -> ", temp->data); // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
    printf("NULL\n"); // Indicate the end of the list

    return 0;
}
