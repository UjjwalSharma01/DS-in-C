# Linked List

## Why do we need a linkedin list?
because of the fixed size of the array and its continous memory allocation property, its a tedious task to further add, more elements in an already declared fixed size array, and this often results in memory wastage because if i want to store 10 integers in an array, i should have a continous memory space of 40 __bytes__ but if we have 2 discrete space let's say one of size 30 and another of 10, we can't use it because we want continous memory for array allocation

so in order to overcome these issues we come up with the concept of linked list, in this data structure elements are not stored in continous memory block but in the different memory location , each node in a linkedin list is divided into 2 parts, first is, __value__  -> this contains the value stored in the node and the second is __link__  -> this contains the address of the next node

insertion and deletion is easy, its dynamic in nature
## Drawback of Linked List
- for each node of __int__  type, 8 bytes are allocated  - 4 bytes for storing the value and 4 bytes to store the address of the next node	
- In linked list, random access is not possible, only sequential access is possible, because we need to fetch the address of each node in the list to go to the next one and all are interconnected to each other so the __Time complexity is O(n)__ and in array its **O(1)**
- binary search is not possible because we need to 

## Declaration of Linked List
because we have to store two different values, first is the integers value and the second is pointer so we will be using user defined data type i.e __struct__

```c
struct node{ // datatype
int value;
struct node* ptr; // this pointer will store address of another node, not any other variable
}; 
```
### why we have used "struct node" in the pointer ?
we are defining the datatype of which the address will be stored in the __ptr__ pointer

## Types of Linked List
- Singly
- Doubly
- Circular
- Doubly circular

### Singly Linked list 
only forward sequential access is possible in singly linked list


![screeshot](https://github.com/UjjwalSharma01/DS-in-C/blob/922e4fc283f995062c79fb91bf42bc8aed3ff7e4/Linked%20List/Images/Screenshot%20(1937).png)

SYNTAX
```c
struct node {
int data;
sturct node* next
};
```
### Doubly linked List
it will have 3 componets
1. Pointer to the previous node
2. value
3. Pointer to the next node

forward and backward sequential access is possible

```c
struct node{
int value;
struct node* previous;
struct node* next;
};
```
screenshot

### circular linked list

the last node will have the address of first node instead of __NULL__ address at the end

- it will have property of singly linkedlist

### Doubly Circular Linkedlist

- it is having propery of both circular and doubly linked list __i.e__ when the last node is pointing to the fist node of the linked list and you have both forward and backward sequential access

screenshot

## Array VS Linked List

### Cost of Accessing data

screenshot


Random access is possible in arrays because values are stored in sequential manner 
time complexity of accessing any element is **O(1)**

in __linked list__ elements are **not stored in sequential manner** so in order to access any element you have traverse the linked list and the time complexity for this __O(n)__

---

### Memory Requirement and Utilization

####  Memory Requirement
because array is a fixed data structure because of which we have to declare the maximum size at the time of declaration of the array 
**ex** 
```c
int arr[100]; // declared the maximum size at the time of initialization 
```
where as since linked list is dynamic in size we don't have to do the same, we can insert afterwards 

hence -> **Memory Requirement is less in array then the linked list because for linked list we have store 2 datatypes - value and pointer so it will take more space than storing the same thing in array**

#### Memory Utilization
**Memory utilisation is better in linked list than in array** because for array we have to allot the memory slot of the maximum element , ab chahe hame sirf 1 element dalna ho for the time being pr agr hame max __100__ dalne h toh arr[10] hi krna pdega whereas linkedlist main esa nahi h

### Cost of Insertion
screenshot

## Implementation of Linked List
for dynamic memory allocation we use malloc in c and new keyword in c++

__Simplest code for creation of linkedlist__
```c
int main() {
    struct node{
        int value;
        struct node* next;
    };
    struct node *head,*newnode,*temp; // head or start pointer
    head  = 0; // intially because of the empty linkedlist
    newnode = (struct node*)malloc(size of(struct node)); // it will return the memory address of the srarting block of the allocated memory block or you can say a void pointer
    //  you need to type case the malloc function because it will return a void pointer 
    // we are using(struct node*) because we are dealing with pointer to node
    printf("Enter data")
    scanf("%d",&newnode->data); // new node stores the data of the first node
    newnode->next = NULL; // or "0"
    if(head == NULL){
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
    return 0;
}
```
we if want to get the choice as the input from the user 
```c
int main() {
    struct node{
        int value;
        struct node* next;
    };
    struct node *head,*newnode,*temp; // head or start pointer
    head  = 0; // intially because of the empty linkedlist
    int choice;
    printf("Enter 1 if you want to continue the creation of node, 0 if you want to terminate");
    scanf("%d",choice);
    while(choice ==1){
    newnode = (struct node*)malloc(size of(struct node)); // it will return the memory address of the srarting block of the allocated memory block or you can say a void pointer
    //  you need to type case the malloc function because it will return a void pointer 
    // we are using(struct node*) because we are dealing with pointer to node
    printf("Enter data")
    scanf("%d",&newnode->data); // new node stores the data of the first node
    newnode->next = NULL; // or "0"
    if(head == NULL){
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
}
    return 0;
}
```

### Linked List traversal
```c
temp = head
while(temp!=Null)
printf("%d", temp->data);
temp = temp->next; //updating value to the next address
}
```
### Full code 
```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};

int main() {
    struct node *head, *newnode, *temp;
    head = NULL;
    int num = 1; // Initialize num to 1 to enter the loop initially

    while (num == 1) {
        newnode = (struct node*)(malloc(sizeof(struct node)));

        if (newnode == NULL) {
            printf("Memory allocation failed. Exiting.\n");
            return 1; // Exit with an error code
        }

        printf("Enter the data: ");
        scanf("%d", &newnode->value);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            // Traverse to the end of the list to append the new node
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }

        printf("Do you want to add another node? ");
        scanf("%d", &num);

        // Printing the list
        temp = head;
        while (temp != NULL) {
            printf("Inside loop: %d\n", temp->value);
            temp = temp->next;
        }
    }

    // Free allocated memory before exiting
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

```
## Insertion 
1. At the beginning
2. At the end
3. After a given location

### At the Beginning
```c

```
screenshot






















### Some important points
when you define a class or structure in any programming language c or c++ then you create the blue print only, tab tak memory allocate nahi hoti when you create object int the case of classes and elements in the case of struct tab memory allocate hoti h