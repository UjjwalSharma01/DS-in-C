# Queue
queue is like order list of elements which works on the principle of __"First in First Out"__ __FIFO__   
in Queue insertion takes place at the rear end and the deletion takes place the Front side 
## Operations
1. Insertion __(Enqueue)__
2. Deletion __(Dequeue)__ 

## Disadvantages
The memory wastage takes place in the queue after deletion of some array and the front moves to the next item here is how it goes
1. To delete an element from the queue, the deletion will take place from the front part
2. So we will simply move the front pointer or the location to the element, now the previous value has become a garbage value
3. suppose you declared an array of size 10 and you performed deletion operation 3 times not the front location of the queue is at index __2__ now you can add only 7 elements in the array which was declared of size 10 so here the memory wastage occurs


## Code
all operations
```cpp
//  implementation of queue
// queue and dequeue


#include <stdio.h>
int arr[10]; 
int front = -1;
int rear = - 1;
void enqueue(int a){
    // SABSE PEHLE OVERFLOW CHECK HOGA
    if(rear == 9){
        printf("OVERFLOW HOGYA BHAMIYA\n");
    }
     else if(front  == -1 && rear == -1){
        front  = rear = 0;
        arr[rear] = a;
    }
    else {
        rear++;
        arr[rear] = a;
    }
}
void dequeue(){
    // kuchh delete krne ke liye kuch stored bhi hona chahiye that's why we will check underflow condition ki kuch h bhi ya nahi
    if(front == -1 && rear == -1){
        printf("Undeflown\n");
    }
    // deletion occurs the the front
    else{
        // to print the dequeued element
        printf("Deleting the value %d \n", arr[front]);
        front++;
    }
}
void display(){
    // again checking for underflow, values dikhane ke liye values exist bhi thoh krni chahiye
    if(front == -1 && rear == -1){
        printf("Underflow, can't display elements\n");
    }
    else{
        for(int i = front;i<=rear;i++){
            printf("%d \n", arr[i]);
        }
    }
}
void peek(){
    if(front == -1 && rear == -1){
        printf("Underflow, can't perform peak operation\n");
    }
    else{
        printf("The element is %d \n", arr[front]);
    }
}
int main(){
    // check if queue is empty
    // Insertion takes place at the rear end of a queue and deletion from the front end
    // INSERTION
    display();
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(10);
    display();
    dequeue();
    display();
    dequeue();
    return 0;
}
```