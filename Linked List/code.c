#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next; 
} node;

int main(){
    node *head = NULL,*newnode,*temp;
    int n=1;
    while(n!=0){
    newnode = malloc(sizeof(node));
    printf("Enter the value of the node: ");
    scanf("%d",&newnode->value);
    newnode->next = NULL;
    if(head == NULL){
    head = newnode;
    }
    else{
        temp = head;
        temp->next = newnode;
    }
    printf("You want to add one more value to the linkedlist ? ");
    scanf("%d", &n);
    
    }
    // Printing the linked list
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    return 0;
}