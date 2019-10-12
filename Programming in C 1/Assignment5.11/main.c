/*
JTSK-320111
a5 p11.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_insensitive(char *str, char c);

 int strsize;
 int main() {
    char *str;
    char *cstr;
    str = (char*)malloc(sizeof(char)*50);
    if(str == NULL){
        printf("Invalid\n");
        exit(1);
    }

    fgets(str, 50, stdin);
    strsize = strlen(str)-1;
    cstr = (char*)malloc(sizeof(char)*strsize);
    strcpy(cstr, str);
    free(str);
    printf("The character 'b' occurs %d times\n", count_insensitive(cstr, 'b'));
    printf("The character 'H' occurs %d times\n", count_insensitive(cstr, 'H'));
    printf("The character '8' occurs %d times\n", count_insensitive(cstr, '8'));
    printf("The character 'u' occurs %d times\n", count_insensitive(cstr, 'u'));
    printf("The character '$' occurs %d times\n", count_insensitive(cstr, '$')); /* These will print how many times a char occurs */
    free(cstr);
    return 0;
}

int count_insensitive(char *str, char c){
    int sum = 0;
    char *p = str;
    for (int a=0; a<strsize; a++){

        if(*p == toupper(c) || *p == tolower(c)){
             sum = sum + 1;


        }
        p++;
    }
     return sum;
    }
