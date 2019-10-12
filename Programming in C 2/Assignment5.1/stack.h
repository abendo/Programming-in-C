/*
JTSK-320112
a5 p1.c
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

int full(struct stack* full); // Check if the stack is full

void empty(struct stack* s); // Empty the stack

void push(struct stack* pushing, int x); // Push an element in the stack


#endif // STACK_H
