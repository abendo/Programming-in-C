/*
JTSK-320111
a6 p8.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr, *gptr;
    fptr = fopen("txt1.txt", "r");
    gptr = fopen("txt2.txt", "w");
    if(fptr == NULL) {
        printf("Error!\n"); /* Error if the file doesn't open */
        exit(1);
    }
    else {
        printf("Success\n"); /* Success if the file opens */
    }
    char a, b;
    if(fptr != NULL) {
        a = getc(fptr);
        b = getc(fptr);
        fprintf(gptr, "%d", a+b);
    }
    fclose(fptr);
    fclose(gptr);
    return 0;
}
