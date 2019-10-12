/*
JTSK-320111
a5 p1.c
Albrit Bendo
a.bendo@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

int main() {

float upper, ssize;
float lower;
scanf("%f", &lower); /* put the lower nr */
getchar();
scanf("%f", &upper); /* put the upper nr */
getchar();
scanf("%f", &ssize); /* put the size */
getchar();

for(;lower<=upper; lower+=ssize) {
    printf("%f %f %f\n", lower, M_PI*lower*lower,2*M_PI*lower );
    }
return 0;
}
