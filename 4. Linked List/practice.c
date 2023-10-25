// Linked list


// creation of a node 
/*
Concept
1. ek head pointer ya start pointer hota h which points towards the starting of linked list, each linked list in connected to thw other one
in a sequence and the random access is not possible we can perform only sequential access in a linked list

toh node contains 2 things
1. info > saves the value to be stored in the linked list
2. link > saves the address to the next node in the linked list, and the last link or the next part of node will be NULL



*/

// creation of a linked list

// #include <stdio.h>
// int main(){
//    typedef struct node{
//         int info;
//         struct node* link;
//     } node ;
//     node *head =NULL ,*newnode,*temp;
//     newnode = (node*)malloc(sizeof(node));
//     printf("Enter data into the node\n");
//     scanf("%d", &newnode->info);
//     newnode->link=NULL;
//     if(head == NULL){ // Which means that the node is empty
//         head = newnode;
//     } 
//     else{
//         temp =head;
//         while(temp->link != NULL){
//             temp = temp->link;
//         }
//         temp->link = newnode;
//     }

//     return 0;
// }



//INSERTION AT THE BEGINNIng

// #include <stdio.h>
// int main(){
//     typedef struct node{
//         int info;
//         struct node* link;
//     } node;
//     // initialising the key elements
//     node *head =NULL, *newnode, *temp;
//     newnode = (node*)malloc(sizeof(node)); // isko loop main lgana h
//     if(newnode == NULL){
//         printf("ERROR! memory not allocated to newnode\n");
//     }
//     // first normally inserting the data 
//     newnode->info = 2;
//     newnode->link=NULL;
//     head = newnode;


//     // ENTERING NEW NODE;
//     printf("Enter the data for the node to be inserted\n");
//     scanf("%d", &newnode->info);
    
//     // now

//     newnode->link = head;
//     head = newnode;
//     return 0;
// }

// Insertion at a given position 

/*
learning outcome

1.  while writing this code keep in mind the case of insertion at the beginning
2. no need to think of insertion at the end

*/
// #include <stdio.h>
// int main(){
//     typedef struct node{
//         int info;
//         struct node* link;
//     } node;
//     node *newnode,*temp,*tr, *head = NULL;
//     newnode = (node*) malloc(sizeof(node));
//     // check if the memory is allocated 
//     if(newnode == NULL){
//         printf("Memory allocation to newnode failed, ERROR!\n");
//         return 1;
//     }

//     printf("Enter the value of the node");
//     scanf("%d", &newnode->info);
//     int pos, k =1;
//     printf("Enter the position at which you want to enter the node\n");
//     scanf("%d", &pos);
//     tr = head;
//     while(tr != NULL){
//         tr= tr->link;
//         k++;
//         if(k==pos){
//             break;
//         }
//     }
//     if(pos ==1){
//         if(head == NULL){
//         head= newnode;
//         }
//         else{
//          temp =head->link;
//         head= newnode;
//         newnode->link  = temp;
//         }
//     }
//     else{
//     temp = tr;
//     tr->link = newnode;
//     newnode->link = tr;
//     }
//     return 0;
// }



// deletion from nodes
// deletion from the beginning

// assuming that the data is already present in the node

#include
