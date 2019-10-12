/*
JTSK-320112
a3 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

struct list * push_front(struct list *list, int value)
{
    struct list *newli;
    newli = (struct list *)malloc(sizeof(struct list));

    if(newli == NULL)
    {
        //printf("#error\n");
        return list;
    }

    newli -> info = value;
    newli -> next = list;

    return newli;
};

struct list * push_back(struct list * list, int value)
{
    struct list *cursor, *newli;
    cursor = list;
    newli = (struct list *)malloc(sizeof(struct list));
    if(newli == NULL)
    {
        //printf("error\n");
        return list;
    }

    newli -> info = value;
    newli -> next = NULL;
    if(list == NULL)
        return newli;

    while(cursor -> next != NULL)
        cursor = cursor -> next;

    cursor -> next = newli;
    return list;
};

struct list * delete_firstel(struct list *list)
{
    struct list *node;
    if(list == NULL) {
        return list;
    }
        //printf("error\n");
    else
    {
        node = list;
        list = list -> next;
        free(node);
        //printf("Deleted!\n");
    }
    return list;
};

void print_list(struct list* list)
{
    struct list *p;
    for(p = list; p; p = p->next)
    {
        printf("%d ", p->info);
    }
    printf("\n");
}

// Free the list
void dispose_list(struct list * list)
{
    struct list *nextelement;
    if(list == NULL)
        exit(1);
    while(list != NULL)
    {
        nextelement = list -> next;
        free(list);
        list = nextelement;
    }
}



