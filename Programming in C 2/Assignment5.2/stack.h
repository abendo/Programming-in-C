/*
JTSK-320112
a5 p2.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#ifndef STACK_H
#define STACK_H

struct stack
{
    unsigned int count;
    int array[12];
};

int pop(struct stack* pop_elem); // Pop an element

int isFull(struct stack* full); // Check if the stack is full

int isEmpty(struct stack* empty); // Check if the stack is empty

void empty(struct stack* s); // Empty the stack

void push(struct stack* pushing, int x); // Push an element in the stack

void convert_binary(struct stack* con, unsigned int dec);

void printing(struct stack* s);

#endif // STACK_H
