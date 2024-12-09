//Q-1 implement a stack using arrays in c
#include <stdio.h>
#define MAX_SIZE 10
 
 int stack[MAX_SIZE];
 int top=-1;
 void push(int element){
     if(top==MAX_SIZE-1){
         printf("stack overflow\n");
         return;
     }
     stack[++top]=element;
 }
 int pop(){
     if(top==MAX_SIZE-1){
         printf("stack overflow\n");
         return -1;
     }
     return stack[top--];
 }
 int peek(){
     if(top==-1){
         printf("stack stack is empty\n");
         return -1;
     }
     return stack[top];
 }
 int isEmpty(){
     return top==-1;
 }
 
 int main(){
     push(10);
     push(20);
     push(30);
     printf("peek: %d\n",peek());
     printf("pop: %d\n",pop());
     printf("isEmpty: %d\n",isEmpty());
     
 }
