/*
JTSK-320112
a5 p3.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
// push function implementation
void push(struct stack *s, char *c)
{
    if(s->count < 100)
    {
        s -> count++;
        strcpy(s -> array[s->count], c);
    }
    else
        printf("Pushing Stack Overflow\n");
}

// popping function
char *pop(struct stack *s)
{
    if(s -> count == 0)
    {
        printf("Popping Stack Underflow\n");
        return NULL;
    }
    else
    {
        s -> count--;
        return s -> array[s->count];
    }
}

void empty(struct stack *s)
{
    s -> count = 0;
}


