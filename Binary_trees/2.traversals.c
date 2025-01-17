#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new node
Node* newNode(int data) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}



int main() {
    // creating root
    Node* root = newNode(5); 
    // creating left and right children
    root->left = newNode(25);
    root->right = newNode(125);

    // Output the root and its children
    printf("Root: %d\nLeft Child: %d\nRight Child: %d\n", 
           root->data, root->left->data, root->right->data);

    return 0;
}
