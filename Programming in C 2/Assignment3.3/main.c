/*
JTSK-320112
a3 p3.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// the struct list
struct list
{
    char ch;
    struct list *next, *prev;
};

int check = 0;
struct list *first = NULL;
struct list *current = NULL;
struct list *last = NULL;
// typeing 1
void insert_beginning(char ch) // function to insert an element in the beginning of the list
{
    struct list *newelement = (struct list*)malloc(sizeof(struct list));
    newelement->ch = ch;

    if(first == NULL)
    {
        last = newelement;
    }

    else
    {
        first->prev = newelement;
    }
    newelement->next = first;
    newelement->prev = NULL;

    first = newelement;
}

// Created this function to use  for deleting all the elements later
struct list *delete_one_element(char ch) // function to delete one element
{
    struct list *cur = first; // For the actual element
    struct list *cursor = first; // For the one that we use to move

    if(first == NULL)
        return NULL;

    while(cur->ch != ch)
    {
        if(cur->next == NULL)
            return NULL;
        else
        {
            cur = cur->next;
            cursor = cursor->next;
        }
    }

    if(cur == first)
    {
        first = first->next;
    }
    else
    {
        cur->prev->next = cur->next;
    }

    if(cur == last)
    {
        last = cur -> prev;
    }
    else
    {
        cur -> next -> prev = cur -> prev;
    }
    return cur;
};
// typeing 2
struct list *delete_all(char ch) // remove all elements with a given char
{
    check = 0;
    struct list * cursor = first;
    for(; cursor; cursor=cursor->next)
    {
        if(cursor->ch == ch)
        {
            check = 1;
            break;
        }
    }
    if(check == 0)
    {
        printf("The element is not in the list!\n");
    }
    while(delete_one_element(ch) != NULL) {} // by using the function before
    return current;
};
// typeing 3
void display_current() // function to print the current list
{
    struct list *ptr = first; // assigning ptr to first pointer array

    while(ptr != NULL) // condition
    {
        printf("%c ", ptr->ch);
        ptr = ptr->next;
    }
    printf("\n");
}
// typeing 4
void display_backward() // function to print the backward list
{
    struct list *ptr = last;

    while(ptr != NULL)
    {
        printf("%c ", ptr->ch); // print the elements
        ptr = ptr->prev;
    }
    printf("\n");
}
// typeing 5
void empty_list(struct list *list) // destroying the list
{
    struct list *element;

    while(list != NULL)
    {
        element = list -> next;
        free(list); // freeing the memory
        list = element;
    }
}

int main()
{
    char data;
    int i = 0;
    // assigning i to 0 so when we know when its 5 and the program stops
// could choose any value different from 5
    while(i != 5)
    {
        scanf("%d", &i);
        getchar();
// using switch case statement to decide which action to take
        switch(i)
        {
        case 1:
            scanf("%c", &data);
            insert_beginning(data);
            break;

        case 2:
            scanf("%c", &data);
            delete_all(data);
            break;

        case 3:
            display_current();
            break;

        case 4:
            display_backward();
            break;

        case 5:
            empty_list(first);
            break;
        }
    }

    return 0;
}
