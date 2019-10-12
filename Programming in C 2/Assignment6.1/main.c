/*
JTSK-320112
a6 p1.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=0;

    char word[100];
    char name[100];
    scanf("%s", name);

    FILE *fp;
// opening the file
    fp = fopen(name, "r");
    if(fp == NULL)
        exit(1);
// counting the words
    while(!feof(fp))
    {
        fscanf(fp, "%s", word);
        printf("Word: %s\n", word);
        counter++;
    }
    printf("The entered words are: %d", counter);
// closing the file
    fclose(fp);
        return 0;
    }
