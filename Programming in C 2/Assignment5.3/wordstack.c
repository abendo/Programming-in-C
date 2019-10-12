/*
JTSK-320112
a5 p3.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int main()
    {
        char ch[100];
        struct stack *one, *two;
// Creating two dynamic allocation for one and two stacks used to compare
        one = (struct stack*)malloc(sizeof(struct stack));
        one -> count = 0;

        two = (struct stack*)malloc(sizeof(struct stack));
        two -> count = 0;
// using strcmp function to compare the words with exit keyword
        while(strcmp(ch, "exit"))
        {
            fgets(ch, sizeof(ch), stdin); // getting the input for the words

            ch[strlen(ch)-1] = '\0';

            char *c = strtok(ch, " ");

            while(c)
            {
                push(one, c);
                c = strtok(NULL, " ");
            }
            int x = one -> count /2;

            while(x != 0)
            {
                char c2[50];
                strcpy(c2, one -> array[one->count]);
                push(two, c2);
                pop(one);
                x--;
            }
            if(one -> count > two -> count)
                pop(one);
            x = one -> count;

            int num = 1;
            while(x != 0)
            {
                char c3[50];
                strcpy(c3, one -> array[one->count]);
                pop(one);

                char c4[50];
                strcpy(c4, two -> array[two->count]);
                pop(two);

                if(strcmp(c3, c4) != 0)
                    num = 0;
                x--;
            }
            if(num == 1 && strcmp(ch, "exit"))
                printf("The sentence is palindromic by words!\n");
            else if(strcmp(ch, "exit"))
                printf("The sentence is not palindromic by words!\n");
        }
        free(one); // freeing the memory allocation
        free(two);
        return 0;
    }
