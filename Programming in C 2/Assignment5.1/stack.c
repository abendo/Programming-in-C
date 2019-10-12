/*
JTSK-320112
a5 p1.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


// to delete an item
int pop(struct stack* pop_elem)
{
    if(pop_elem->count==0)
    {
        printf("Popping Stack Underflow\n");
        return -1;
    }
    else
    {
        int pop = pop_elem -> array[--pop_elem -> count];
        printf("Popping %d\n", pop);
        return pop;
    }
}
/*
void isEmpty(struct stack* em)
{
    int c = em -> count;
    if(c==0)

}*/
// for emptying the stack
void empty(struct stack* s)
{
    int c = s -> count;
    if(c==0)
        printf("Stack Underflow!\n");
    else if(c==12)
        printf("Stack Overflow!\n");
    else
    {
        printf("Emptying Stack ");
        for(int i=s->count -1; i>=0; i--)
        {
            printf("%d ", s->array[i]);
        }
        printf("\n");
        s -> count =0;
    }
}
// to add an item
void push(struct stack* pushing, int x)
{
    int i = pushing -> count;

    if(i == 12)
        printf("Pushing Stack Overflow\n");
    else
    {
        pushing -> array[i] = x;
        pushing -> count++;
        printf("Pushing %d\n", x);
    }
}
int full(struct stack* full)
{
    if(full -> count == 12)
        return(1);
    return(0);
}
