/* JTSK-320111
a3 p2.c
Albrit Bendo
a.bendo@jacobs-university.de */

#include <stdio.h>
int main() {
    int a;
    scanf("%i", &a);
    if ((a % 2 == 0) && (a % 7 == 0)) {
        printf("The number is divisible by 2 and 7\n");
    }
    else {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}
