/*
JTSK-320112
a3 p4.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

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
