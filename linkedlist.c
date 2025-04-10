#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node *next;
};

// Global pointers
struct node *head = NULL, *newnode, *temp;

// Function to insert a node at the end
void insert() {
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL) {
        head = temp = newnode;
    } else {
        temp->next = newnode;
        temp = newnode;
    }
    printf("Node inserted.\n");
}

// Function to delete the first node
void deleteFirst() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);
    printf("First node deleted.\n");
}

// Function to display the list
void display() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    printf("Current Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    int choice;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Insert\n");
        printf("2. Delete First Node\n");
        printf("3. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                deleteFirst();
                break;
            case 3:
                display();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
