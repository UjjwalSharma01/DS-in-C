# Stack
it's a linear data structure 
it's an ordered list or it's a container which is going to follow a rule for insertion and deletion of the data
## Rule
insertion and deletion and is possible only from one end (imagine it like books _stacked_ on top of each other" toh tum book upr se hi utha skte ho __ideally__ beechme se ya neeche se nahi

__PRINCIPLE__  - Last in first out (__LIFO__)

## Fundamental Operations
- Insertion operation is known as __push__ -> ```push(x)```
- deletion operation is known as __pop__ -> it will return as well as delete the top element from the stack -> ```pop()``` 
- Peek operation - > till will return the top element without removing it
- ```is empty()``` it will return true if there is not element in the stack
- ```isfull()``` will return true of the stack is full

## Applications
- String reversal
- Undo operations
- Recursion and Function calls
- To check the proper balancing of parenthesis __"{"__ if there is a closing parenthesis for each opening parenthesis at the right place 
- Infix to postfix or prefix conversion
- For the evaluation of postfix 

## Implementation
### Implementation using array

```c
// implementation of stack using arrays in c
#include <stdio.h>
# define n 5
int top = -1;
int stack[n];
void push(){
    int x;
    printf("Enter data");
    scanf("%d",&x);
    if(top == (n)-1){
        printf("overflow");
    }
    else{
        top++;
        stack[top] = x;
    }
}
void pop(){
    int item;
    if(top == -1){
        printf("Underflow");
    }
    else{
        item = stack[top];
        top--;
        printf("%d",item);
    }
}
void peek(){
    if(top == -1){
        printf("Underflow");
    }
    else{
        printf("%d", stack[top]);
    }
}
void display(){
    if(top == -1){
        printf("Stack is empty");
    }
    else {
    for(int i=0;i<=top;i++){
        printf("%d ", stack[i]);
    }
    }
}
int main(){
    int c;
    int num =1;
    while(num !=0){
    printf("Which operation you want to perform: \n");
    printf("select form the following\n1. push\n2. pop\n3. peek\n4. display\n");
    scanf("%d",&c);
    switch(c){
        case(1): push();
        break;
        
        case(2): pop();
        break;
        
        case(3): peek();
        break;
        
        case(4): display();
        break;
        
        default: printf("wrong choice, ap insaan hi galat ho\n");
    }
    printf("press 0 to exit\n");
    printf("Do you want to perform more operations?\n");
    scanf("%d",&num);
    }
    return 0;
}
```

### Infix Prefix and Postfix expressions
Operator precedance 
1. (),{},[]
2. ^ (associativity is **right to left**)
3. *,/ (associativity is **left to right**)
4. +,- (associativity is **left to right**)


### Prefix Expression
Written in the form of 
```<operator><operand><operand>```
### Postfix Expression
Written in the form of
```<operand><operand><operator>```


## Conversions

study from PDF 