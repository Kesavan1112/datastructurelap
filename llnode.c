#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
int main(){
struct node * head,* newnode,* temp;
int choice=1,count=0;
head=0;
while(choice!=0){
newnode=(struct node *) malloc(sizeof(struct node));

printf("enter the data:");

scanf("%d",&newnode->data);
newnode->next=0;

if(head==0){
    head=temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
}
printf("enter the choice  (0,1)?:");
scanf("%d",&choice);
}

temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
 count++;
}

printf("\ntotal linked list is %d",count);
return 0;
}
/*Yes, you can declare multiple pointers of the same type in a single line when working with a `struct`. For example:

```c
struct node *head, *newnode, *temp;
```

### **Explanation**
- The syntax declares three pointers:
  - `head` is a pointer to `struct node`.
  - `newnode` is a pointer to `struct node`.
  - `temp` is a pointer to `struct node`.

All of them are valid and can point to objects of type `struct node`.

---

### **Important Note on Pointer Declaration**
When declaring multiple variables in a single line, **each variable must explicitly include the `*` symbol if it's a pointer**. For example:

```c
struct node* head, newnode, *temp;
```

- In this case:
  - `head` is a pointer to `struct node`.
  - `newnode` is a normal variable (not a pointer) of type `struct node`.
  - `temp` is a pointer to `struct node`.

If your intention is for all variables to be pointers, you need to write:

```c
struct node *head, *newnode, *temp;
```

---

### Example Usage
Here’s an example that uses multiple pointers for a linked list:

```c
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *newnode, *temp;
    head = NULL;  // Initialize head to NULL

    // Create the first node
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode != NULL) {
        newnode->data = 10;
        newnode->next = NULL;  // Since it's the only node currently
        head = newnode;        // Point head to the new node
    }

    // Add another node
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode != NULL) {
        newnode->data = 20;
        newnode->next = NULL;
        temp = head;           // Start from the head
        while (temp->next != NULL) {
            temp = temp->next; // Traverse to the last node
        }
        temp->next = newnode;  // Link the new node to the end of the list
    }

    // Display the linked list
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
```

---

### Output
```
10 -> 20 -> NULL
```

---

### Summary
- You can use multiple pointers in a single declaration, e.g., `struct node *head, *newnode, *temp;`.
- Be cautious with the `*` symbol—it applies only to the variable immediately following it.
- This approach is widely used to keep the code concise and easy to read when working with linked lists.*/




/*
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *newnode, *temp;
    int choice = 1; // Initialize choice to enter the loop.

    head = NULL; // Initialize head to NULL.

    while (choice) {
        // Allocate memory for a new node.
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode; // If it's the first node.
        } else {
            temp->next = newnode; // Append the new node.
            temp = newnode;       // Move the temp pointer to the new node.
        }

        printf("Do you want to add another node? (0 for no, 1 for yes): ");
        scanf("%d", &choice);
    }

    // Traverse and print the linked list.
    printf("The linked list is: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}

*/


