/*
JTSK-320111
a5 p5.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_consonants(char str[]) {
int consonants = 0;
char a[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'}; /* Declare the consonants */

for (char *p=&str[0]; *p!='\0'; p++) { /* Declare first char */
    if(isalpha(*p) && !strchr(a, *p)) {
        consonants++;
}
}
return consonants;
}

char string[100];
int main() {
do {
    fgets(string, 100, stdin);
    if(string[0]=='\n') /* Condition */
        break;
    printf("Consonants number = %i\n", count_consonants(string));
}
while (strlen(string)>0);
return 0;
}
