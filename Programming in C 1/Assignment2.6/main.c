/* JTSK-320111
a1 p2.c
Albrit Bendo
a.bendo@jacobs-university.de */

#include <stdio.h>
int main() {
    double x, y;
    printf("double variable one\n");
    printf("double variable two\n");
    scanf("%lf", &x);
    scanf("%lf", &y);
    double *ptr_one;
    double *ptr_two;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    printf("Address of x=%p\n", ptr_one);
    printf("Address of x=%p\n", ptr_two);
    printf("Address of y=%p\n", ptr_three);
    return 0;
}
