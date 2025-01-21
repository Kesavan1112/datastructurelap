//insertion at begining in linked list

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
   
}
newnode=(struct node *) malloc(sizeof(struct node));

printf("enter insert data:");

scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
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