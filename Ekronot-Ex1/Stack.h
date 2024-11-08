#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
	node* head;
} Stack;

void push(Stack* s, unsigned int element); // funtion to add element to sstack
int pop(Stack* s); // Return -1 if stack is empty

void initStack(Stack* s); // fucntion to initalize stack
void cleanStack(Stack* s); // funtion to clean stack

bool isEmpty(Stack* s); // fuction to check if stack is emtpy
bool isFull(Stack* s); // cant be full due to linked list implentaion 

#endif // STACK_H