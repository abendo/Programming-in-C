/* JTSK-320111
a1 p2.c
Albrit Bendo
a.bendo@jacobs-university.de */

#include <stdio.h>
int main() {
    int a;
    printf("a=");
    scanf("%i", &a);
    printf("Value of a=%i\n", a);
    int *ptr_a = &a;
    ptr_a = &a;
    printf("Address of a=%p\n", ptr_a);
    *ptr_a += 5;
    printf("Adding 5 to a=%i\n", a);
    printf("Address of a + 5=%p\n", ptr_a);
    return 0;
}
