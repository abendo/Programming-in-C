#include <stdio.h>
#include <stdlib.h>
// struct list
struct list
{
    int info;
    struct list *next;
};

struct list *push_front(struct list *list, int value)
{
    struct list *newli;
    newli = (struct list *)malloc(sizeof(struct list));
 
    if(newli == NULL)
        return list;
 
    newli -> info = value;
    newli -> next = list;
 
    return newli;
};

struct list *push_back(struct list *list, int value)
{
    struct list *cursor, *newli;
    cursor = list;
    newli = (struct list *)malloc(sizeof(struct list));
 
    if(newli == NULL )
        return list;
 
    newli -> info = value;
    newli -> next = NULL;
 
    if(list == NULL)
        return newli;
 
    while(cursor -> next != NULL)
        cursor = cursor -> next;
 
    cursor -> next = newli;
    return list;
};

struct list *delete_firstel(struct list *list)
{
    struct list *node;
    if(list == NULL)
        return list;
    else
    {
        node = list;
        list = list -> next;
        free(node);
    }
    return list;
};

void print_list(struct list *list)
{
    struct list *p;
 
    for(p=list; p; p=p->next)
    {
        printf("%d ", p->info);
    }
    printf("\n");
}

void dispose_list(struct list *list)
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

struct list *insert_element(struct list *list, int position, int value)
{
 
    struct list *new_element;
    struct list  *next_element;
    struct list *cursor;
 
    new_element = (struct list*)malloc(sizeof(struct list));
    next_element = (struct list *)malloc(sizeof(struct list));
    cursor = (struct list *)malloc(sizeof(struct list));
 
    if(position == 0) // if position 0 call the function to push the element in the front of array
    {
        return push_front(list, value);
    }
 
    else if(position > 0) // if position greater than 0
    {
        cursor = list;
        for(int i=0; i<position-1; i++)
        {
            cursor = cursor -> next;
 
        }
        next_element = cursor;
        next_element = next_element -> next;
        new_element -> info = value;
        new_element -> next = next_element;
        cursor -> next = new_element;
        return list;
    }
    else
    {
        printf("Invalid position!\n");
        return list;
    }
}
// the reverse function
struct list *reverse(struct list *list)
{
    struct list *currpos = list;
    struct list *nextpos;
    struct list *prevpos = NULL; // assigning to null so no element losts during the compilation
 
    while(currpos != NULL)
    {
        nextpos = currpos -> next;
        currpos-> next = prevpos;
        prevpos = currpos;
        currpos = nextpos;
    }
    return prevpos;
};
 
int main()
{
    struct list *start=NULL;
    int n=1;
    int count = 0;
 
    while(n)
    {
        char c;
        scanf("%c", &c);
 
        int v1, v2, v3, v4;
 
        switch (c)
        {
        case 'a':
            scanf("%d", &v1);
            start = push_back(start, v1);
            count++;
            break;
 
        case 'b':
            scanf("%d", &v2);
            start = push_front(start, v2);
            count++;
            break;
 
        case 'r':
            start = delete_firstel(start);
            count--;
            break;
 
        case 'p':
            print_list(start);
            break;
 
        case 'i':
            scanf("%d%d", &v3, &v4);
            if(v3 < 0 || v3 > count) // To check whether the position entered is correct
            {
                printf("Invalid position!\n");
                break;
            }
            else
            {
              insert_element(start, v3, v4);
              break;
            }
 
        case 'R':
            start = reverse(start);
            break;
 
        case 'q':
            dispose_list(start);
            n=0;
            break;
        }
    }
    return 0;
}