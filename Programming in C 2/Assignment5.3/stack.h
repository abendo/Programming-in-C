/*
JTSK-320112
a5 p3.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

#ifndef STACK_WORD
#define STACK_WORD

struct stack
{
    unsigned int count;
    char array [50][100];
};

// A push function
void push(struct stack *s, char* c);

// A pop function
char *pop(struct stack *s);

// Empty
void emptying(struct stack *s);

#endif // STACK_WORD
