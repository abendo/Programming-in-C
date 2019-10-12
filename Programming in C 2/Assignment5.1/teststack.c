/*
JTSK-320112
a5 p1.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
    {
        int item;
        char ch;
        struct stack s;
        s.count = 0;

        while(ch != 'q')
        {
            scanf("%c", &ch);
            switch(ch)
            {
// s and a number pushes the number into stack
            case 's':
                scanf("%d", &item);
                push(&s, item);
                break;
// p pops a number on the top of the stack
            case 'p':
                item=pop(&s);
                break;
// e empties the stack by popping the elements one by one
// also printing them afterwards
            case 'e':
                empty(&s);
                break;
// quit the program
            case 'q':
                printf("Quit\n");
                break;
            }
        }
        return 0;
    }
