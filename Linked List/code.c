#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next; 
} node;

int main(){
    node *head = NULL,*newnode,*temp;
    int n==1;
    if(n!=0){
    newnode = malloc(sizeof(node));
    printf("Enter the value of the node: ");
    scanf("%d",&newnode->value);
    newnode->next = NULL;
    }
    printf("You want to add one more value to the linkedlist ? ");
    scanf("%d", &n);
    
    if(head == NULL){
    head = newnode;
    }
    else{
        temp = newnode;
        temp->next = newnode;
    }
    return 0;
}