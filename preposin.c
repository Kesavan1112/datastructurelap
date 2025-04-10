#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct node {
    int data;
    struct node *left, *right;
};

// Function to create a new node
struct node *newnode(int value) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to create a tree dynamically with user input
struct node *create() {
    int x;
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);  

    if (x == -1) {
        return NULL;    
    }

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;

    printf("Enter left child of %d:\n", x);
    newnode->left = create();

    printf("Enter right child of %d:\n", x);
    newnode->right = create();

    return newnode;
}

// Preorder Traversal (Root -> Left -> Right)
void preorder(struct node *root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal (Left -> Root -> Right)
void inorder(struct node *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Postorder Traversal (Left -> Right -> Root)
void postorder(struct node *root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {
    // Static Tree Construction
    struct node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);

    // Printing Traversals
    printf("\nPreOrder Traversal:\n");
    preorder(root);

    printf("\n\nInOrder Traversal:\n");
    inorder(root);

    printf("\n\nPostOrder Traversal:\n");
    postorder(root);

    return 0;
}
