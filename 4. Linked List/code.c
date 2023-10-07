#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next; 
} node;

int main(){
    // node *head = NULL,*newnode,*temp;
    // int n=1;
    // while(n!=0){
    // newnode = malloc(sizeof(node));
    // printf("Enter the value of the node: ");
    // scanf("%d",&newnode->value);
    // newnode->next = NULL;
    // if(head == NULL){
    // head = newnode;
    // }
    // else{
    //     temp = head;
    //     temp->next = newnode;
    // }
    // printf("You want to add one more value to the linkedlist ? ");
    // scanf("%d", &n);
    
    // }
    // // Printing the linked list
    // temp = head;
    // while(temp!=NULL){
    //     printf("%d ",temp->value);
    //     temp = temp->next;
    // }



    // Insertion at the beginning in the Linked list
    node *head =NULL, *temp, *newnode, *temp2;
    newnode = (node*)malloc(sizeof(node));
    // entering one node in adv
    printf("Enter the Value of the first node: ");
    scanf("%d",&newnode->value);
    newnode->next = NULL; 
    if(head == NULL){
        head = newnode;   
    }
    else{
        temp = head;
        temp->next = newnode;
        free(temp);
    }

    // Printing
    temp = head;
    while(temp != NULL){
    printf("The value you entered is: \n");
    printf("%d", temp->value);
    temp = temp->next;
}

    // // adding new node
    // newnode->value = 99;

    // temp2 = head;
    // head = newnode;
    // head->next = temp2;

    // printing the updated linked List
    temp = head;
    while(temp!=NULL){
        printf("%d",temp->value);
        temp = temp->next;
    }
    return 0;
}