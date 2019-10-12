/*
JTSK-320111
a5 p13.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void uppcase(char *str);
void lowcase(char *str);

int a;
int main (){
    while (1){

        char string[90]; /* Maximum of 90 chars */
        char exit [] = "exit"; /* Exit to stop the program */

        scanf("%[^\n]%*c", string);

        a = (int)strlen (string);

        if (strcmp(string, exit) == 0) {
            break;
        }
        uppcase(string);
        lowcase(string);
}
    return 0;
}

void uppcase(char *str){ /* Lower case situation */
    for (int x=0; x<a; x++){
        if(islower(str[x])){
            str[x] = toupper((str[x]));
}
}
    printf ("uppcase=%s\n", str);
    return;
}


void lowcase(char *str){ /* Upper case situation */
    for (int x=0; x<a; x++){
        if(isupper(str[x])){
            str[x] = tolower(str[x]);
}
}
    printf ("lowcase=%s\n", str);
    return;
}
