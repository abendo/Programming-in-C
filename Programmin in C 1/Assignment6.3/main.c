/*
JTSK-320111
a6 p3.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_lower(char str[]);

int main() {
    char str[50]; /* Entered text of 50 char */
    fgets(str, 50, stdin);

    for(;1;) {
        if(str[0] == '\n') { /* Press enter to end the loop */
            printf("\\n");
            break;
        }
        printf("Lowercase nr= %d \n", count_lower(str)); /* Calling the function */
        fgets(str, 100, stdin);
    }
    return 0;
}

int count_lower(char *str) {
int sum=0;
while(*str != '\0') {
    if(islower(*str)) {
        sum++;
    }
    str++;
}
return sum;
}
