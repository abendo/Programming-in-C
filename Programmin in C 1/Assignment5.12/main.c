/*
JTSK-320111
a5 p12.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceAll(char *str, char c, char e); /* The prototype from the assignment */

int size;
int main(){

    char str[80];
    char stop[] = "stop";

    while(1) {

        char c; /* The character that we want to replace */
        char e;

        fgets(str, sizeof(str), stdin); /* String */
        sscanf(str, "%s", &*str);

        if(strcmp(str, stop) == 0){
            break;
        }

        size = strlen(str);
        scanf("%c", &c);
        getchar();
        scanf("%c", &e);
        getchar();

        printf("Char to be replaced = %c\n", c);
        printf("Replacing char = %c\n", e);

        printf("Before = %s\n",str);
        replaceAll(str, c, e);
        printf("After = %s\n", str);
}

    return 0;
}

void replaceAll(char *str, char c, char e) {

    for(int x = 0; x < size; x++){
        if(str[x] == c){
            str[x] = e;
}
}
}
