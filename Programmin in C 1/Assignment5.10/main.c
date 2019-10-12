/*
JTSK-320111
a5 p1.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void proddivpowinv(float a, float c, float *prod, float *div, float *pwr, float *invb) {
*prod = a*c; /* Product */
*div = a/c; /* Division */
*pwr = pow(a, c); /* a raised by c */
*invb = 1/c; /* Inverse c */
return;
}

int main() {
    float a, c;
    float prod, div, pwr, invb;
    scanf("%f", &a);
    getchar();
    scanf("%f", &c);
    proddivpowinv(a, c, &prod, &div, &pwr, &invb);
    printf("Product of a c by reference = %f\n", prod);
    printf("Division of a c by reference = %f\n", div);
    printf("Power of a raised by c by reference = %f\n", pwr);
    printf("Inverse c by reference = %f\n", invb);
    return 0;
}
