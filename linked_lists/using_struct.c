#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

void main() {
    
    struct node *head,*newnode,*temp;
    head = 0;
    int choice=1, count;
    
    while(choice){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head ==0){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue?\n");
    scanf("%d", &choice);
    }
    temp=head;
    while(temp != 0){
        printf("%d\n",temp->data);
        temp = temp->next;
        count++;
    }
    printf("Elements: %d", count);
    
    
    
}
