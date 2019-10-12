/*
JTSK-320111
a6 p9.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *faptr, *fbptr, *gptr;
    faptr = fopen("txt1.txt", "r");
    fbptr = fopen("txt2.txt", "r"); /* Name of file */
    gptr = fopen("res.txt", "w");

    if(faptr == NULL) {
        printf("Some error occurred!\n"); /* Error if cannot open */
        exit(1);
    }
    if(fbptr == NULL) {
        printf("Some error occurred!\n");
        exit(1);
    }
    else
        printf("Success"); /* Success if it opens */

    double a, b;
    if(faptr != NULL && fbptr != NULL) {
        fscanf(faptr, "%lf", &a);
        fscanf(fbptr, "%lf", &b);

        fprintf(gptr, "%lf", (a+b));
        fprintf(gptr, "%lf", (a-b));
        fprintf(gptr, "%lf", (a*b));
        fprintf(gptr, "%lf", (a/b));

        fclose(faptr);
        fclose(fbptr);
    }
    return 0;
}
