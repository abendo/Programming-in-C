/*
JTSK-320112
a4 p2.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void uppercase_string(char ch[50])
{
    char ch2[50];
    strcpy(ch2, ch); // We create a copy so we do not use the upcoming string

    int i = 0;

    while(ch2[i] != '\0')
    {
        if(ch2[i] >= 'a' && ch2[i] <= 'z') // as we cannot use strupr
        {
            ch2[i] = ch2[i] - 32;
        }
        i++;
    }
    printf("%s\n", ch2);
}

void lowercase_string(char ch[50])
{
    char ch3[50];
    strcpy(ch3, ch);

    int i = 0;

    while(ch3[i] != '\0')
    {
        if(ch3[i] >= 'A' && ch3[i] <= 'Z')
        {
            ch3[i] = ch3[i] + 32;
        }
        i++;
    }
    printf("%s\n", ch3);
}

void convert_lowup(char ch[50])
{
    char ch_cpy[50];
    strcpy(ch_cpy, ch);

    int i = 0;

    while(ch_cpy[i] != '\0') // some conditions
    {
        if(ch_cpy[i] >= 'a' && ch_cpy[i] <= 'z')
        {
            ch_cpy[i] = ch_cpy[i] - 32;
        }
        else if(ch_cpy[i] >= 'A' && ch_cpy[i] <= 'Z')
        {
            ch_cpy[i] = ch_cpy[i] + 32;
        }
        i++;
    }
    printf("%s\n", ch_cpy);
}

    int main()
    {
        char ch[50];
        int cursor = 0;
// creating a function pointer
        void(*function[3])(char *ch) = {uppercase_string, lowercase_string, convert_lowup};

        fgets(ch, 50, stdin);

        ch[strlen(ch) - 1] = '\0';

        while(1)
        {
            scanf("%d", &cursor);
            getchar();
            if(cursor == 4)
                break;
// calling the functions
            function[cursor-1](ch);
        }

        return 0;
    }
