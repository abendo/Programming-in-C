/*
JTSK-320111
a5 p5.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main() {
    int a;
    char string[50]; /* As it says we can only put 50 chars */
    fgets(string, 50, stdin);
    for (a=0; a<strlen(string)-1; a++) {
        if(a%2==1) {
            printf(" %c\n", string[a]); /* Whenever it is even there will be a space */
        }
        else {
            printf("%c\n", string[a]);
        }
    }
    return 0;
}
