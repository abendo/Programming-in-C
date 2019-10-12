/*
JTSK-320112
a1 p1.c
Albrit Bendo
a.bendo@jacobs-university.de
*/

#include <stdio.h>
#define SWAP(x, y, type) {type z = x; x = y; y = z;} // Macro to swap

int main()
{
    int n, m; // Two variables integers
    double nf, mf; // Two variables floats

    //printf("Enter two integer numbers to swap\n");
    scanf("%d %d", &n, &m);

    //printf("You entered: n=%d , m=%d\n", n, m);

    SWAP(n, m, int); // Swapping type int
    //printf("Swapped values: n=%d and m=%d\n", n, m);

    //printf("Enter two float numbers to swap\n");
    scanf("%lf %lf", &nf, &mf);

    //printf("You entered: nf=%f and mf=%f\n", nf, mf);

    SWAP(nf, mf, double); // Swapping type float
    //printf("Swapped values: nf=%f and mf=%f\n", nf, mf);

    printf("After swapping:\n%d\n%d\n%lf\n%lf\n", n, m, nf, mf);
    return 0;
}
