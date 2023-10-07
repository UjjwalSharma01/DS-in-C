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