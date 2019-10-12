/* JTSK-320111
a3 p6.c
Albrit Bendo
a.bendo@jacobs-university.de */

#include <stdio.h>
int main() {
    float x;
    int n;
    scanf("%f", &x);
    scanf("%d", &n);


    for(;n<=0;) {
        printf("Input is invalid, reenter value\n"); /* For n number of times <= 0 it is invalid */
        scanf("%d", &n);
    }

    for(int i=1; i<=n; i++) {
        printf("%f\n", x); /* For a float x it will print the float n times */
    }
    return 0;
}
