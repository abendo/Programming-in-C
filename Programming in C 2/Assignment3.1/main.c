/*
JTSK-320112
a3 p1.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list // Parameters
{
    int info;
    struct list *next;
};

// Struct to push an element in the beginning of the list
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

// Struct to push an element in the end of list
struct list * push_back(struct list *list, int value)
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

// Removing an element
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

// Printing the element of the linked list
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

int main()
{
    struct list *start=NULL;
    int n=1;

    while(n)
    {
        char c;
        scanf("%c", &c); // Getting the input

        int v1, v2;

        switch(c)
        {
        case 'a':
            scanf("%d", &v1);
            start = push_back(start, v1);
            break;

        case 'b' :
            scanf("%d", &v2);
            start = push_front(start, v2);
            break;

        case 'r':
            start = delete_firstel(start);
            break;

        case 'p':
            print_list(start);
            break;

        case 'q':
            dispose_list(start);
            n=0;
            break;
        }
    }
    return 0;
}
