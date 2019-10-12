/*
JTSK-320112
a3 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct list
{
    int info;
    struct list *next;
};

struct list *push_front(struct list*list, int value);

struct list *push_back(struct list*list, int value);

struct list *delete_firstel(struct list*list);

void print_list(struct list*list);

void dispose_list(struct list*list);

#endif // LINKED_LIST
