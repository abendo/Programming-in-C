/*
JTSK-320112
a5 p2.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
    {
        unsigned int dec;
        struct stack s;
        s.count = 0; // assigning the stack to 0

        scanf("%d", &dec); // reading the int

        printf("The binary representation of %d is ", dec);
        convert_binary(&s, dec);
        printing(&s);
        printf(".\n");

        return 0;
    }
